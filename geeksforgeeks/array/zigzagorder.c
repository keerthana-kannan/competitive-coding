/*CONVERT ARRAY IN ZIGZAG FASHION
Given an array A (distinct elements) of size N. Rearrange the elements of array in zig-zag fashion. The converted array should be in form a < b > c < d > e < f. The relative order of 
elements is same in the output i.e you have to iterate on the original array only.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains two lines of input. The first line contains a single 
integer N denoting the size of array.
The second line contains N space-separated integers denoting the elements of the array.

Output:
For each testcase, print the array in Zig-Zag fashion.

Constraints:
1 <= T <= 100
1 <= N <= 100
0 <= Ai <= 10000

Example:
Input:
2
7
4 3 7 8 6 2 1
4
1 4 3 2
Output:
3 7 4 8 2 6 1
1 4 2 3
*/
#include <stdio.h>

void zigzag(int a[],int n)
{
    int flag = 1;
    for(int i=0;i<n-1;i++)
    {
        if(flag)
        {
            if(a[i]>a[i+1])
            {
                int temp;
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }

        }
        else
        {
            if(a[i]<a[i+1])
            {
                int temp;
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        flag = !flag;
    }
}

int main() {
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int j=0;j<n;j++)
	        scanf("%d",&a[j]);
	    
	    zigzag(a,n);
	    
	    for(int j=0;j<n;j++)
	        printf("%d ",a[j]);
	    
	    printf("\n");
	}
	return 0;
}