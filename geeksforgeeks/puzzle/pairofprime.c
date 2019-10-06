//PAIRS OF PRIME NUMBERS
/*
Print all pairs (sets) of prime numbers (p,q) such that p*q <= n, where n is given 
number.

Input:
The first line of input contains an integer T denoting the number of test cases. T 
testcases follow.
The first line of each test case is N.

Output:
For each testcase, in a new line, print the all pairs of prime numbers in increasing 
order.

Constraints:
1 ≤ T ≤ 50
4 ≤ N ≤ 400

Example:
Input:
2
4
8
Output:
2 2
2 2 2 3 3 2

Explanation:
Testcase 1: Pair (2, 2) which has both prime numbers as well as satisfying the 
condition 2*2 <= 4.
*/
#include<stdio.h>
#include<math.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i,j,b,k=0,a[n];
        for(i=2;i<=n;i++) //prime num
        {   
            b=0; //flag
            for(j=1;j<=sqrt(i);j++) //if divisible by any of these
            {
                if(i%j==0)
                    b++; 
                
            }
            if(b==1)
            {
                a[k]=i; //store the prime num in an array
                k++;
                    
            }
        }
        for(i=0;i<k-1;i++)
        {
            for(j=0;j<k;j++)
            {
                if(a[i]*a[j]<=n)
                    printf("%d %d ",a[i],a[j]);
            }
        }
            
        printf("\n");
    }
	return 0;
}