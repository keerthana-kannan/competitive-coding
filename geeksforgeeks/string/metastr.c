//META STRINGS
/*
Given two strings, the task is to check whether these strings are meta strings or not. 
Meta strings are the strings which can be made equal by exactly one swap in any of the 
strings. Equal string are not considered here as Meta strings.

Examples:

Input : A = "geeks" 
        B = "keegs"
Output : 1
By just swapping 'k' and 'g' in any of string, 
both will become same.

Input : A = "rsting"
        B = "string
Output : 0


Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains two lines. The first line denoting string A and the second line denoting string B.

Output:
For each test case in a new line print 1 if A and B are meta strings, else print 0.

Constraints:
1<=T<=100
1<=Length of strings<=1000

Example:
Input:
2
geeks
keegs
geeks
geeks

Output:
1
0
*/
#include<stdio.h>
#include<string.h>

int isMeta(char *a, char *b)
{
    int len1 = strlen(a);
    int len2 = strlen(b);
    
    if(len1 != len2)
        return 0;
    
    int prev = 0, curr=0,count=0;
    for(int i=0;i<len1;i++)
    {
        if(a[i] != b[i])
        {
            count++;
        
            if(count>2)
                return 0;
            
            //store the unmatched characters
            prev = curr;
            curr = i;
        }
    }
    
    return(count == 2 && a[prev] == b[curr] && b[prev] == a[curr]);
}

int main()
{
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    char a[100],b[100];
	    scanf("%s",a);
	    scanf("%s",b);
	    
	    if(isMeta(a,b))
	        printf("1\n");
	    else
	        printf("0\n");
	}
	return 0;
}