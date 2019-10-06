/*STOCK BUY AND SELL
The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.

Input: 
First line contains number of test cases T. First line of each test case contains an integer value N denoting the number of days, followed by an array of stock prices of N days. 

Output:
For each testcase, output all the days with profit in a single line. And if there is no profit then print "No Profit".

Constraints:
1 <= T <= 100
2 <= N <= 103
0 <= Ai <= 104

Example
Input:
2
7
100 180 260 310 40 535 695
10
23 13 25 29 33 19 34 45 65 67

Output:
(0 3) (4 6)
(1 4) (5 9)
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i,n,start=0,last=0,flag=0;
	    scanf("%d",&n);
	    int *a=(int *)malloc(n*sizeof(int));
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    
	    for(i=1;i<n;i++)
	    {
	        if(a[i]>a[i-1])
	        {
	            last++;
	            if(i==n-1 && start!=last)
	            {
	                flag=1;
    	            printf("(%d %d)",start,last);
    	            break;
	            }
	        }
	        else{
	            if(start!=last)
	            {
	                printf("(%d %d) ",start,last);
	                flag=1;
	            }
	            last=i;
	            start=i;
	        }
	    }
	    if(flag==0)
	    {
	        printf("No Profit");
	    }
	    printf("\n");
	}    
	return 0;
}