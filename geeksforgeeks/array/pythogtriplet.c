/*PYTHAGOREAN TRIPLET
Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.

Input:
The first line contains T, denoting the number of testcases. Then follows description of testcases. Each case begins with a single positive integer N denoting the size of array. 
The second line contains the N space separated positive integers denoting the elements of array A.

Output:
For each testcase, print "Yes" or  "No" whether it is Pythagorean Triplet or not (without quotes).

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= A[i] <= 1000

Example:
Input:
1
5
3 2 4 6 5

Output:
Yes
*/
#include <stdio.h>

void cmp(int *x,int *y)
{
    if(*x<*y)
        return -1;
    else if(*x == *y)
        return 0;
    return 1;
}

int triplet(int a[],int n)
{
	    
	    for(int k=0;k<n;k++){
	        for(int l=n-1;l>=0;l--){
	            for(int m=n-2;m>=0;m--){
	                int x = a[k]*a[k];
	                int y = a[l]*a[l];
	                int z = a[m]*a[m];
	                
	                if((x+y==z) || (y+z==x) || (x+z==y))
	                {
	                    return 1;
	                }
	            }
	        }
	    }   
	    return 0;
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
	       
	    qsort(a,n,sizeof(int),cmp);
	    
	    if(triplet(a,n))
	        printf("Yes\n");
	    else
	        printf("No\n");
	}
	return 0;
}