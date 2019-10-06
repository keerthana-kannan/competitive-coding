/* CHOCOLATE DISTRIBUTION PROBLEM
Given an array A of positive integers of size N, where each value represents number of chocolates in a packet. Each packet can have variable number of chocolates. There are M students,
 the task is to distribute chocolate packets such that :
1. Each student gets one packet.
2. The difference between the number of chocolates given to the students having packet with maximum chocolates and student having packet with minimum chocolates is minimum.

Input:
The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. Each test case consists of three lines. The first line of each test case 
contains an integer N denoting the number of packets. Then next line contains N space separated values of the array A denoting the values of each packet. The third line of each test 
case contains an integer m denoting the no of students.

Output:
For each test case in a new line print the minimum difference.

Constraints:
1 <= T <= 100
1 <=N<= 107
1 <= Ai <= 1018
1 <= M <= N

Example:
Input:
2
8
3 4 1 9 56 7 9 12
5
7
7 3 2 4 9 12 56
3

Output:
6
2
*/
#include <stdio.h>
#include <limits.h>

int cmp(int *a,int*b)
{
    if(*a < *b)
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
	    int a[n];
	    for(int j=0;j<n;j++)
	        scanf("%d ",&a[j]);
	    int m;
	    scanf("%d",&m);
	    
	    qsort(a,n,sizeof(int),cmp);
	    
	    int end = m-1;
	    int min = INT_MAX;

	    for(int j=0;j<n-m;j++)
	    {
	        int dif = a[j+end]-a[j];
	        if(dif < min)
	        {
	            min = dif;
	        }
	            
	    }
	    
	    printf("%d\n",min);
	    
	}
	return 0;
}