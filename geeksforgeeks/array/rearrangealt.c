/*REARRANGE ARRAY ALTERNATIVELY

Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on...

Note: O(1) extra space is allowed. Also, try to modify the input array as required.

Input:
First line of input conatins number of test cases T. First line of test case contain an integer denoting the array size N and second line of test case contain N space separated integers denoting the array elements.

Output:
Output the modified array with alternated elements.

Constraints:
1 <=T<= 100
1 <=N<= 107
1 <=arr[i]<= 107

Example: 
Input:
2
6
1 2 3 4 5 6
11 
10 20 30 40 50 60 70 80 90 100 110

Output:
6 1 5 2 4 3
110 10 100 20 90 30 80 40 70 50 60
*/

#include <stdio.h>

int main() {
	//code
	int test;
	scanf("%d",&test);
	for(int i=0;i<test;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n],b[n];
	    for(int j=0;j<n;j++)
	        scanf("%d",&a[j]);
	   
	    int start,end,k;
	    k=0;
	    start =0;
	    end = n-1;
	    while(k<n)
	    {
	        b[k] = a[end];
	        b[k+1] = a[start];
	        k = k+2;
	        start++;
	        end--;
	    }
	    
	    for(int j=0;j<n;j++)
	        printf("%d ",b[j]);
	    printf("\n");
	}
	return 0;
}