//CLOSEST NUMBER
/*
Given non-zero two integers N and M. The problem is to find the number closest to N 
and divisible by M. If there are more than one such number, then output the one having 
maximum absolute value.

Input:
The first line consists of an integer T i.e number of test cases. T testcases follow.  
The first and only line of each test case contains two space separated integers N and 
M.

Output:
For each testcase, in a new line, print the closest number to N which is also divisible
 by M.

Constraints: 
1 <= T <= 100
-1000 <= N, M <= 1000

Example:
Input:
2
13 4
-15 6
Output:
12
-18
*/
#include<stdio.h>
#include<math.h>



int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int q,n,m,n2;
	    scanf("%d%d",&n,&m);
	    q=n/m;
	    int n1=m*q;
	    if((n*m)>0)
	    {
	        n2=m*(q+1);
	    }
	    else
	    {
	        n2=m*(q-1);
	    }
	    if(abs(n-n1)<abs(n-n2))
	        printf("%d\n",n1);
	    else
	        printf("%d\n",n2);
	}
	return 0;
}