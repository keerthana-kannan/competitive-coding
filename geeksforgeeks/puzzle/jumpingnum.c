//JUMPING NUMBERS
/*
Given a positive number X. Find all Jumping Numbers smaller than or equal to X. 
Jumping Number: A number is called Jumping Number if all adjacent digits in it differ 
by only 1. All single digit numbers are considered as Jumping Numbers. For example 7, 
8987 and 4343456 are Jumping numbers but 796 and 89098 are not.

Input:
The first line of the input contains T denoting the number of testcases. Each testcase 
contain a positive number X.

Output:
Output all the jumping numbers less than X in sorted order. Jump to example for better 
understanding.

Constraints:
1 <= T <= 100
1 <= N <= 109

Example:
Input:
2
10
50
Output:
0 1 2 3 4 5 6 7 8 9 10
0 1 2 3 4 5 6 7 8 9 10 12 21 23 32 34 43 45

Explanation:
Testcase 2: Here, the most significant digits of each jumping number is following 
increasing order, i.e., jumping numbers starting from 0, followed by 1, then 2 and so 
on, themselves being in increasing order 2, 21, 23.
*/
#include<stdio.h>
#include "stdlib.h"

void jumping(int n)
{
    int  i =0;
    int back = 0;
    int digits[10];
    int num_digits = 1;
    int num =0;
    digits[0]=0;
    i =0;

    while (num <n )
    {
        printf("%d ", num); 
        while (i>=0){
            if (i>0) {
                if (digits[i] == (digits[i-1] - 1)) {
                    if ((digits[i-1] <9) && ((i==num_digits-1) || (digits[i+1] == digits[i-1])))
                    {
                            digits[i] = digits[i-1] +1;
                            break;
                    }
                }
                back =1;
                i--;
                continue;
            }
            else
            {
                if (((num_digits==1) && (digits[i] <9))||(digits[i] == (digits[i+1] -1))) {
                    digits[i]++ ;
                }
                else 
                {
                    num_digits++;
                    digits[0]=1;
                    back =1;
                }
                break;
            }
        }

        if (back) {
            for (i=i+1;i <num_digits; i++)
            {
                if (digits[i-1] > 0)
                {
                    digits[i] = digits[i-1] -1;
                }
                else
                {

                    digits[i] = digits[i-1] +1;
                }
            }
        }
        num =0;
        for (i=0;i <num_digits; i++)
        {
            num = num*10+digits[i];
        }
        i = num_digits-1;
    }
    printf("\n");
}


int main()
{
    int t,n;
    int i = 0;
    int *arr=NULL;

    scanf("%d",&t);
    while (t) {
        scanf("%d", &n);

        jumping(n);
        t--;
    }
}