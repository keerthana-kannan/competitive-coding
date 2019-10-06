/*COUNT THE TRIPLETS
Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case
contains an Integer N denoting size of array and the second line contains N space separated elements.

Output:
For each test case, print the count of all triplets, in new line. If no such triplets can form, print "-1".

Constraints:
1 <= T <= 100
3 <= N <= 105
1 <= A[i] <= 106

Example:
Input:
2
4
1 5 3 2
3
3 2 7
Output:
2
-1
*/
#include <stdio.h>

int main() {
	//code
	int test,n,i,j,sum,start,end;
	int count; 
	scanf("%d",&test);
	for(i =0;i<test;i++)
	{
	    scanf("%d",&n);
	    int a[n];
	    for(j=0;j<n;j++)
	        scanf("%d",&a[j]);
	    for (i = 0; i < n;++i) 
        {
            int temp;
            for (j = i + 1; j < n;++j)
            {
 
                if (a[i] > a[j]) 
                {
 
                    temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
 
            }
        }
        //sorting done
        count =0;
        for(i=n-1;i>1;i--)
        {
            sum=a[i]; //last element
            start=0;
            end=i-1;
            while(start<end) 
            {
                if(a[start]+a[end]==sum)
                {
                    count++;
                    start++;
                    end--;
                    
                }
                else if(a[start]+a[end]>sum)
                    end--;
                else if(a[start]+a[end]<sum) 
                    start++;
                
            }
            
        }
        if(count>0)
                printf("%d\n",count);
        else
                printf("-1 \n");

	   
	}
	
	return 0;
}