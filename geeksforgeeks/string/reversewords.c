/*REVERSE WORDS IN A STRING
Given a String of length S, reverse the whole string without reversing the individual words in it. Words are separated by dots.

Input:
The first line contains T denoting the number of testcases. T testcases follow. Each case contains a string S containing characters.

Output:
For each test case, in a new line, output a single line containing the reversed String.

Constraints:
1 <= T <= 100
1 <= |S| <= 2000

Example: 
Input:
2
i.like.this.program.very.much
pqr.mno
*/
#include <stdio.h>

void reverse(char* start,char* end)
{
    char temp;
    while(start<end)
    {
       temp = *start;
       *start = *end;
       *end = temp;
       start++;
       end--;
    }
}

void reverseword(char* s)
{
    char *temp = s;
    char *word = s;
    while(*temp)
    {
        *temp++;
        if(*temp == '\0')
        {
            reverse(word,temp-1);
        }
        else if(*temp == '.')
        {
            reverse(word,temp-1);
            word = temp+1;
        }
        
    }
    reverse(s,temp-1);
}


int main() {
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    char s[100000];
	    scanf("%s",s);
	    reverseword(s);
	    printf("%s",s);
	    printf("\n");
	}
	return 0;
}