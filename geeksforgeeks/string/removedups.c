/*REMOVE DUPLICATES
Given a string, the task is to remove duplicates from it. Expected time complexity O(n) where n is length of input string and extra space O(1) under the assumption that there are 
total 256 possible characters in a string.

Note: that original order of characters must be kept same. 

Input: 
First line of the input is the number of test cases T. And first line of test case contains a string.

Output:  
Modified string without duplicates and same order of characters.

Constraints: 
1 <= T <= 15
1 <= |string|<= 1000

Example:
Input:
2
geeksforgeeks
geeks for geeks

Output:
geksfor
geks for
*/
#include <stdlib.h>
#include <string.h>

int main() 
{
	int test,i;
	scanf("%d",&test);
	for(i=1;i<=test;i++)
	{
	    getchar();
	    char full_str[10000];
        scanf("%[^\n]s",full_str); 
	    //printf("%s\n",full_str);
	    int freq[256]={0};
	    char new_str[10000];
	    int k=0;
	    int len=0;
	    while(full_str[k]!='\0')
	    {
	        freq[full_str[k]] +=1;
	        
	        if(freq[full_str[k]] == 1)
	        {
	            new_str[len] = full_str[k];
	            len++;
	        }
	        
	        k++;
	    }
	    new_str[len] = '\0';
	    printf("%s\n",new_str);
	    
	}   
	return 0;
}