/*CHECK IF STRING IS ROTATED BY 2 PLACES
Given two strings a and b. The task is to find if a string 'a' can be obtained by rotating another string 'b' by 2 places.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. In the next two line are two string a and b.

Output:
For each test case in a new line print 1 if the string 'a' can be obtained by rotating string 'b' by two places else print 0.

Constraints:
1 <= T <= 50
1 <= length of a, b < 100

Example:
Input:
2
amazon
azonam
geeksforgeeks
geeksgeeksfor

Output:
1
0
*/
#include <string.h>

int main() {
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    char s[10000],s1[10000];
	    scanf("%s",s);
	    scanf("%s",s1);
	    int n = strlen(s);
	    
	    if((s[0]==s1[n-2]&&s[1]==s1[n-1])||(s1[0]==s[n-2] &&s1[1]==s[n-1]))
            printf("1");
        else
            printf("0");
        printf("\n");
	    
	}
	return 0;
}