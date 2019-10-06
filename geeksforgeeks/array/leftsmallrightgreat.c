/*ELEMENTS WITH LEFT SIDE SMALLER AND RIGHT SIDE GREATER
Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller and all right elements to it are greater than it.

Note: Left and right side elements can be equal to required element. And extreme elements cannot be required element.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated array elements.

Output:
For each test case, in a new line print the required element. If no such element present in array then print -1.

Constraints:
1 <= T <= 100
3 <= N <= 106
1 <= A[i] <= 106

Example:
Input:
3
4
4 2 5 7
3
11 9 12
6
4 3 2 7 8 9

Output:
5
-1
7
*/
#include <stdio.h>
#include <limits.h>

int main() {
	//code
	int test,i,k;
	scanf("%d",&test);
	for(k=0;k<test;k++)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int j=0;j<n;j++)
	        scanf("%d ",&a[j]);
	        
	    int smaller[n],greater[n];
	    
	    smaller[0]=a[0];
	    for(i=1;i<n;i++){
			//smaller[i] = max(a[i],smaller[i-1]);
	        if(a[i]>smaller[i-1])
	        {
	            smaller[i]=a[i];
	        }
	        else 
	            smaller[i]=smaller[i-1];
	    }
	    
	    greater[n-1]=a[n-1];
	    for(i=n-2;i>=0;i--)
	    {
	 		//greater[i] = min(a[i],greater[i+1]);
	        if(a[i]<greater[i+1])
	        {
	            greater[i]=a[i];
	        }
	        else 
	            greater[i]=greater[i+1];
	    }
	    
	    int flag=0;
	    for(i=1;i<n-1;i++)
	    {
	        if(a[i]>=smaller[i-1] && a[i]<=greater[i+1])
	        {
	            printf("%d\n",a[i]);
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	        printf("-1\n");
	
	}
	return 0;
}