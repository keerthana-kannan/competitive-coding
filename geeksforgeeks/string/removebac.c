//Remove “b” and “ac” from a given string
/*
Given a string, eliminate all “b” and “ac” in the string, replace them in-place and iterate over the string once.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.
Each test case contains a string of length N.

Output:
Print the resultant substring after removing 'b' and 'ac' from string.

Constraints:
1 ≤ T ≤ 200
1 ≤ N ≤ 200

Example:
Input:
2
acbac
aababc

Output:

aaac
*/
#include<stdio.h>
int main()
{
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    char s[100];
	    scanf("%s",s);
	    int len = strlen(s);
	    int i = -1; //previous character
	    int j=0; //current character
	    while(j<len)
	    {
	        if(s[j] == 'b')
	        {
	            j++;
	        }
	        else if(j<len-1 && s[j] == 'a' && s[j+1] == 'c')
	        {
	            j=j+2;
	        }
	        else
	            s[++i] = s[j++]; //copy current character to the output string
	    }
	    s[++i] = '\0';
	    printf("%s\n",s);
	}
	return 0;
}