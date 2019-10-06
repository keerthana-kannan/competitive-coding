//REACH THE NTH POINT
/*
There are N points on the road ,you can step ahead by 1 or 2 . Find the number of ways you can reach at point N. For example:  for N=4 we have 5 possible ways [1,1,1,1]  [1,1,2]  [1,2,1]  [2,1,1]  [2 2].

Input:
The first line of input contains an integer T denoting the number of test cases. Next line of each input contains a single integer N.

Output:
For each testcase, in a new line, print the number of ways.

Constraints:
1<=T<=100
1<=N<=90

Example:
Input:
2
4
5

Output:
5
8

ANS: O(mn) by using dynamic programming
*/
#include<stdio.h>
int main()
{
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    int n;
	    scanf("%d",&n);
	    long long int res[n+1];
	    res[0] = 1;
	    res[1] = 1;
	    for(int j=2;j<=n;j++)
	    {
	        res[j] = res[j-1]+res[j-2];
	    }
	    
	    printf("%lli\n",res[n]);
	}
	return 0;
}
/*
//COMMON SOLUTION
int countWaysUtil(int n, int m) 
{ 
    int res[n+1]; 
    res[0] = 1; res[1] = 1; 
    for (int i=2; i<=n; i++) 
    { 
       res[i] = 0; 
       for (int j=1; j<=m && j<=i; j++) 
         res[i] += res[i-j]; 
    } 
    return res[n]; 
} 
*/