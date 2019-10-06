//FIND THE LONGEST WORD IN DICTIONARY
/*
Giving a dictionary and a string ‘str’, your task is to find the longest string in 
dictionary of size x which can be formed by deleting some characters of the given ‘str’.

Examples:

Input : dict = {"ale", "apple", "monkey", "plea"}   
        str = "abpcplea"  
Output : apple

Input  : dict = {"pintu", "geeksfor", "geeksgeeks", 
                                        " forgeek"} 
         str = "geeksforgeeks"
Output : geeksgeeks


Input:
The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. Each test case contains an integer x denoting the no of words in the dictionary. Then in the next line are x space separated strings denoting the contents of the dictionary.  Then in the next line is a string 'str'.

Output:
For each test case in a new line print the required output.

Constraints:
1<=T<=100
1<=x, length of str<=1000

Example:
Input:
2
4
ale apple monkey plea
abpcplea
4
pintu geeksfor geeksgeeks forgeek
geeksforgeeks
Output:
apple
geeksgeeks
*/
#include<stdio.h>
#include<string.h>

void longest_word(char a[][50],char *b,int n)
{
    int i,j,k,len1,len2;
    int max = 0;
    int ans = 0;
    len2 = strlen(b);
    for(i=0;i<n;i++)
    {
        len1 = strlen(a[i]);
        for(j=0,k=0;j<len1 && k<len2 && max<len1;k++)
        {
            if(a[i][j] == b[k]) //if the dict word matches the string then increment the word
                j++;
            
            if(j == len1) //if the length of the word in dict and string match
            {
                max = len1;  //max is set as the length of this word
                ans = i;     //ans is that word in the dict
            }
        }
    }
    printf("%s\n",a[ans]);
}

int main()
{
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    int n;
	    scanf("%d",&n);
	    char a[n][50];
	    char b[100];
	    
	    for(int j=0;j<n;j++)
	        scanf("%s",a[j]);
	        
	    scanf("%s",b);
	    
	    longest_word(a,b,n);
	}
	return 0;
}