/*PERMUTATION OF A GIVEN STRING
Given a string S. The task is to print all permutations of a given string.

Input:
The first line of input contains an integer T, denoting the number of test cases. Each test case contains a single string S in capital letter.

Output:
For each test case, print all permutations of a given string S with single space and all permutations should be in lexicographically increasing order.

Constraints:
1 ≤ T ≤ 10
1 ≤ size of string ≤ 5

Example:
Input:
2
ABC
ABSG

Output:
ABC ACB BAC BCA CAB CBA 
ABGS ABSG AGBS AGSB ASBG ASGB BAGS BASG BGAS BGSA BSAG BSGA GABS GASB GBAS GBSA GSAB GSBA SABG SAGB SBAG SBGA SGAB SGBA
*/
#include<stdio.h>
#include <string.h>
void swap(char *a,char*b)
{
char temp;
temp=*a;
*a=*b;
*b=temp;
}

void permutation(char *a,int l,int r)
{
    int i;
    if(l==r)
    {
        printf("%s ",a);
    }
    else
    {
        for(i=l;i<=r;i++)
        {
            swap(a+l,a+i);
            permutation(a,l+1,r);
            swap(a+l,a+i);
		}
    }
}
int main() {
	//code
	int testcases;
	char *str;
	scanf("%d",&testcases);
	for(int i=0;i<testcases;i++)
	{
	    scanf("%s",str);
        permutation(str,0,strlen(str)-1);
        printf("\n");
	}
	return 0;
}