/* Subarray with given sum

Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case is
N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai <= 1010

Example:
Input:
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
Output:
2 4
1 5
*/

#include<stdio.h>

int main()
{
	int n,t,s;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++)
	{
		scanf("%d%d",&n,&s);
		int arr[n],count=0,flag=0,front,end;
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		for(front=0;front<n;front++){
			count=0;
			for( end=front;end<n;end++)
			{
				count+=arr[end];
				if(count==s)
				{
					flag=1;
					break;
				}
				
				if(count+arr[end+1]>s||count>s)
				{
					break;
				}
			}
			if(flag==1)
			{
				break;
			}
		}
		if(flag==1)
			printf("%d %d\n",front+1,end+1);
		else
			printf("-1\n");
		
	}
	return 0;
}