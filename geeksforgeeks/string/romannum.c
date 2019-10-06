/*ROMAN NUMBER TO INTEGER
Given an string in roman no format (s)  your task is to convert it to integer .

Input:
The first line of each test case contains the no of test cases T. Then T test cases follow. Each test case contains a string s denoting the roman no.

Output:
For each test case in a new line print the integer representation of roman number s. 

Constraints:
1<=T<=100
1<=roman no range<4000

Example:
Input
2
V
III 
Output
5
3
*/
#include<string.h>

int value(char c)
{
    if(c == 'I')
        return 1;
    else if(c == 'V')
        return 5;
    else if(c == 'X')
        return 10;
    else if(c == 'L')
        return 50;
    else if(c == 'C')
        return 100;
    else if(c == 'D')
        return 500;
    else if(c == 'M')
        return 1000;
    return -1;
}
int getRoman(char s[])
{
    int n = strlen(s);
    int r = 0, x, y;
    for(int i=0; i<n; i++)
    {
        if(i == n-1)
        {
            x = value(s[i]);
            r += x;
            return r;
        }
        else
        {
            x = value(s[i]);
            y = value(s[i+1]);
            if(x >= y)
                r += x;
            else
                r -= x;
        } 
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1000];
        scanf("%s",s);
        printf("%d\n",getRoman(s));
    }
	return 0;
}