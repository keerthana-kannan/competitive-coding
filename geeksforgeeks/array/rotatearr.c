//ROTATE ARRAY
/*
Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 

Input:
The first line of the input contains T denoting the number of testcases. First line of eacg test case contains two space separated elements, N denoting the size of the array and an integer D denoting the number size of the rotation. Subsequent line will be the N space separated array elements.

Output: 
For each testcase, in a new line, output the rotated array.

Constraints:
1 <= T <= 200
1 <= N <= 107
1 <= D <= N
0 <= arr[i] <= 105

Example:
Input:
2
5 2
1 2 3 4 5 
10 3
2 4 6 8 10 12 14 16 18 20

Output:
3 4 5 1 2
8 10 12 14 16 18 20 2 4 6
*/
#include<stdio.h>

void left(int a[],int n)
{
    int i;
    int temp = a[0];
    for(i=0;i<n-1;i++)
        a[i] = a[i+1];
    a[i] = temp;
}

void rotateleft(int a[],int n,int d)
{
    for(int i=0;i<d;i++)
    {
        left(a,n);
    }
}

int main()
{
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    int n,d;
	    scanf("%d %d",&n,&d);
	    int a[n];
	    for(int j=0;j<n;j++)
	        scanf("%d",&a[j]);
	    
	    rotateleft(a,n,d);
	    
	    for(int j=0;j<n;j++)
	        printf("%d ",a[j]);
	    
	    printf("\n");
	}
	return 0;
}