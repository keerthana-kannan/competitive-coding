/*IMPLEMENT strstr
Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and  locates the occurrence of the string x in the string s. The function returns and integer denoting the first occurrence of the string x in s.

Input Format:
The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. The first line of each test case contains two strings s and x.

Output Format:
For each test case, in a new line, output will be an integer denoting the first occurrence of the x in the string s. Return -1 if no match found.

Your Task:
Since this is a function problem, you don't have to take any input. Just complete the strstr() function. The function returns -1 if no match if found else it returns an integer denoting the first occurrence of the x in the string s.

Constraints:
1 <= T <= 200
1<= |s|,|x| <= 1000

Example:
Input
2
GeeksForGeeks Fr
GeeksForGeeks For
Output
-1
5
*/
#include<stdio.h>
 
int fStrStr(char* str, char* strSub)
{
    int i=0, j=0;
    int nTemp = i;
    int nStrLen = strlen(str);
    int nStrSubLen = strlen(strSub);
    for(i=0; i<nStrLen-nStrSubLen; i++)
    {
        nTemp = i;
        for(j=0; j<nStrSubLen; j++)
        {
             
            if(str[nTemp]==strSub[j])
            {
                if(j==nStrSubLen-1)
                    return 1;
                nTemp++;
            }
            else
                break;
        }
    }
    return 0;
}
 
 
int main()
{
    char str[] = "CSEStack";
    char strSub[] = "SES";
 
    if(fStrStr(str, strSub))
        printf("Sub-string found.");
    else
        printf("Sub-string not found.");
 
         
}