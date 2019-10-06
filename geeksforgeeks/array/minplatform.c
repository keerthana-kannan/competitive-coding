/*MINIMUM PLATFORMS
Given arrival and departure times of all trains that reach a railway station. Your task is to find the minimum number of platforms required for the railway station so that no train waits.

Note: Consider that all the trains arrive on the same day and leave on the same day. Also, arrival and departure times will not be same for a train, but we can have arrival time of one train equal to departure of the other.

In such cases, we need different platforms, i.e at any given instance of time, same platform can not be used for both departure of a train and arrival of another.

Input:
The first line of input contains T, the number of test cases. For each test case, first line will contain an integer N, the number of trains. Next two lines will consist of N space separated time intervals denoting arrival and departure times respectively.
Note: Time intervals are in the 24-hour format(hhmm),  of the for HHMM , where the first two charcters represent hour (between 00 to 23 ) and last two characters represent minutes (between 00 to 59).

Output:
For each test case, print the minimum number of platforms required for the trains to arrive and depart safely.

Constraints:
1 <= T <= 100
1 <= N <= 1000
1 <= A[i] < D[i] <= 2359

Example:
Input:
2
6 
0900  0940 0950  1100 1500 1800
0910 1200 1120 1130 1900 2000
3
0900 1100 1235
1000 1200 1240 

Output:
3
1
*/
#include <stdio.h>

int cmp(int *a,int *b)
{
    if(*a<*b)
        return -1;
    else if(*a == *b)
        return 0;
    return 1;
}

int main() {
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n],d[n];
	    for(int j=0;j<n;j++)
	        scanf("%d ",&a[j]);
	    for(int j=0;j<n;j++)
	        scanf("%d ",&d[j]);
	        
	    qsort(a,n,sizeof(int),cmp);
	    qsort(d,n,sizeof(int),cmp);
	    
	    int x=0,y=0,count = 0,max=0;
	    while(x<n && y<n)
	    {
	        if(a[x]<= d[y])
	        {
	            count++;
	            x++;
	            
	            if(count>max)
	                max = count;
	        }
	        else
	        {
	            count--;
	            y++;
	        }
	    }
	    printf("%d\n",max);
	}
	return 0;
}