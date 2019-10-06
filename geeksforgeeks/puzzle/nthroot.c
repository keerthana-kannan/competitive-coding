//FIND NTH ROOT OF M
/*
You are given 2 numbers (N , M); the task is to find N√M (Nth root of M).

Input:
The first line of input contains an integer T denoting the number of test cases. Then 
T test cases follow. Each test case contains two space separated integers N and M.

Output:
For each test case, in a new line, print an integer denoting Nth root of M if the root 
is an integer else print -1.

Constraints:
1 <= T <= 200
2 <= N <= 20
1 <= M <= 109+5

Example:
Input:
2
2 9
3 9
Output:
3
-1
*/
#include<stdio.h>
#include<math.h>
int main()
{
	//code
	long int t,n,k;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	   scanf("%ld%ld",&n,&k);
	   long int x=round(pow(k,1.0/n));
	   if(pow(x,n)==k)
	        printf("%ld\n",x);
	   else
	        printf("-1\n");
	}
	return 0;
}