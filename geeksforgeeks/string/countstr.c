//Count of strings that can be formed using a, b and c under given constraints
/*
Given a length n, count the number of strings of length n that can be made using ‘a’, 
‘b’ and ‘c’ with at-most one ‘b’ and two ‘c’s allowed.

Input:

The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The first line of each test case contains an integer N denoting the length of the string.


Output:

Output the count of the strings that can be formed under the given constraint.


Constraints:

1<= T <=100

1<= N <=1000


Example:

Input:

2

1

3

Output:

3

19
*/
/*SOLUTION:
String is only built with 'a', i.e., n 'a' forms the string.
Count of such string is: 1

String built with one 'b' & n-1 'a'
Count of such string is: (n/1)=n
One 'b' can be placed at any of n positions, that's why n number of such strings

String built with one 'b', one 'c' and (n-2) 'a'
Count of such string (n/2)*2=n*(n-1)
One 'b' and one 'c' can take any of two places out of n and any of 'b' & 'c' can comes first.

String built with one 'b', two 'c' and (n-3) 'a'
Count of such string (n/3)*3=n*(n-1)*(n-2)/2
One 'b' and two 'c' can take any of three places out of n and there are 3 combinations
 possible between one 'b' & two 'c'.

String built with two 'c' and (n-2) 'a'
Count of such string (n/2)=n*(n-1)/2
Two 'c' can take any two of n places.

String built with one 'c' and (n-1) 'a'
Count of such string (n/1)=n
One 'c' can take any of one places out of n.
*/
#include<stdio.h>
int main()
{
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int res = 0;
	    res = 1+n+n+(n*(n-1))+(n*(n-1)/2)+(n*(n-1)*(n-2)/2);
	    
	    printf("%d\n",res);
	}
	return 0;
}