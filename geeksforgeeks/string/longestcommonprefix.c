/*LONGEST COMMON PREFIX IN AN ARRAY
Given a array of N strings, find the longest common prefix among all strings present in the array.

Input:
The first line of the input contains an integer T which denotes the number of test cases to follow. Each test case contains an integer N. Next line has space separated N strings.

Output:
Print the longest common prefix as a string in the given array. If no such prefix exists print "-1"(without quotes).

Constraints:
1 <= T <= 103
1 <= N <= 103
1 <= |S| <= 103

Example:
Input:
2
4
geeksforgeeks geeks geek geezer
3
apple ape april

Output:
gee
ap
*/
#include <stdio.h>
#include <string.h>


int main()
{
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        int n;
        scanf("%d",&n);
        
        char str[n][1000];
        for(int j=0;j<n;j++)
         scanf("%s",str[j]);
         
        int count=0;
        int flag;
		for(int m=0;m<strlen(str[0]);m++)
		{
			flag=0;
			for(int k=0;k<n-1;k++)
			{
				if(str[k][count]!=str[k+1][count])
					flag=1;
				if(flag==1)
					break;
			}
        
        
			if(flag==0)
				count++;
			else
				break;
		}	
    
    
		if(count!=0)
		{
			for(int l=0;l<count;l++)
			{
				printf("%c",str[0][l]);
			}
		}
    
		else
			printf("%d",-1);
		printf("\n");
    }
	return 0;
}