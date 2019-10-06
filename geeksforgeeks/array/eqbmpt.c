/* EQUILIBRIUM POINT
 Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the 
 sum of elements before it is equal to the sum of elements after it.

Input:
The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. First line of each test case contains an integer N denoting the size of 
the array. Then in the next line are N space separated values of the array A.

Output:
For each test case in a new  line print the position at which the elements are at equilibrium if no equilibrium point exists print -1.

Constraints:
1 <= T <= 100
1 <= N <= 106
1 <= Ai <= 108

Example:
Input:
2
1
1
5
1 3 5 2 2

Output:
1
3
*/
#include <stdio.h>

int main() {
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    int n,k;
	    scanf("%d",&n);
	    int a[n];
	    int sum=0;
	    int now=0;
	    int flag = 0;
	    for(k=0;k<n;k++)
	        scanf("%d",&a[k]);
	        sum += a[k];
	   
	    for(int j=0;j<n;j++)
	    {
	        sum = sum - a[j];
	        if(now == sum)
	        {
	            printf("%d\n",j+1);
	            flag = 1;
	            break;
	        }
	        now += a[j];
	    }
	    
	    if(flag == 0)
	        printf("-1\n");
	    
	}
	return 0;
}