//BINARY TO DECIMAL
/*
Given a Binary Number B, Print its decimal equivalent.

Input:
The first line of input contains an integer T denoting the number of test cases. The 
description of T test cases follow. Each test case contains a single Binary number B. 

Output: 
For each testcase, in a new line, print each Decimal number in new line.

Constraints:
1 <= T <= 100
1 <= Digits in Binary <= 16

Example:
Input:
2
10001000
101100
Output:
136
44
*/
#include<stdio.h>
int main()
{
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    long long int num;
	    long long int last;
	    long long int val = 0;
	    long long int base = 1;
	    scanf("%lld",&num);
	    while(num)
	    {
	        last = num %10;
	        val = val + last*base;
	        num = num/10;
	        base = base*2;
	    }
	    printf("%lld\n",val);
	}
	return 0;
}