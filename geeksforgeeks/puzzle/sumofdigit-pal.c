//SUM OF DIGITS IS PALINDROME OR NOT
/*
Write a program to check if the sum of digits of a given number N is a palindrome 
number or not.

Input:
The first line of the input contains T denoting the number of testcases. T testcases 
follow. Then each of the T lines contains single positive integer N denoting the value 
of number.

Output:
For each testcase, in a new line, output "YES" if pallindrome else "NO". (without the 
quotes)

Constraints:
1 <= T <= 200
1 <= N <= 1000

Example:
Input:
2
56
98
Output:
YES
*/
#include<stdio.h>
int main()
{
	//code
	int test,i;
	scanf("%d",&test);
	
	for(i=0;i<test;i++)
	{
	    int num,n;
	    int s = 0;
	    int sum = 0;
	    scanf("%d",&num);
	    while(num) //CODE FOR SUM OF DIGITS
	    {
	        int n = num%10;
	        sum +=n;
	        num = num/10;
	    }
	    int x = sum;
	    while(x)  //CODE FOR REVERSING DIGITS
	    {
	        n = x%10;
	        s = s*10 + n;
	        x = x/10;
	    }
	    if(sum == s)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
	return 0;
}