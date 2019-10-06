/* REVERSE ARRAY IN GROUPS
Given an array arr[] of positive integers of size N. Reverse every sub-array of K group elements.

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of two lines of input. The first line of each 
test case consists of an integer N(size of array) and an integer K separated by a space. The second line of each test case contains N space separated integers denoting the array 
elements.

Output:
For each test case, print the modified array.

Constraints:
1 ≤ T ≤ 200
1 ≤ N, K ≤ 107
1 ≤ A[i] ≤ 1018

Example:
Input
2
5 3
1 2 3 4 5
6 2
10 20 30 40 50 60

Output
3 2 1 5 4
20 10 40 30 60 50
*/
#include <stdio.h>

void reverse(int a[],int n,int k)
{
    for(int i=0;i<n;i=i+k)
    {
        int left,right;
        left = i;
        right = ((i+k-1) < (n-1))? (i+k-1):(n-1);
        
        while(left<right)
        {
            int temp;
            temp = a[left];
            a[left] = a[right];
            a[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
	//code
    int test,i;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n];
        for(int j=0;j<n;j++)
            scanf("%d",&a[j]);
        
        reverse(a,n,k);
        
        for(int j=0;j<n;j++)
            printf("%d ",a[j]);
            
        printf("\n");
    }
	return 0;
}