//ARMSTRONG NUMBERS
/*
For a given 3 digit number, find whether it is armstrong number or not. An Armstrong 
number of three digits is an integer such that the sum of the cubes of its digits is 
equal to the number itself. For example, 371 is an Armstrong number since 
33 + 73 + 13 = 371

Input:
First line contains an integer, the number of test cases 'T'. T testcases follow. 
Each test case contains a positive integer N.

Output:
For each testcase, in a new line, print "Yes" if it is a armstrong number else print 
"No".

Constraints:
1 <= T <= 31
100 <= N < 1000

Example:
Input:
1
371
Output:
Yes
*/
#include<stdio.h>
#include<math.h>
int main()
{
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int digits = log10(n)+1; //number of digits
	    int last = 0,sum = 0;
	    int num = n;
	    while(num>0)
	    {
	        last = num % 10;
	        sum = sum + pow(last,digits);
	        num = num/10;
	    }
	    
	    if(sum == n)
	        printf("Yes\n");
	    else
	        printf("No\n");
	}
	return 0;
}