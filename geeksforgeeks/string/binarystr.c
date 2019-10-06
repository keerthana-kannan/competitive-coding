//GENERATE BINARY STRING
/*
Given a string containing of ‘0’, ‘1’ and ‘?’ wildcard characters, generate all binary 
strings that can be formed by replacing each wildcard character by ‘0’ or ‘1’.

Input:
The first line of input contains a single integer T, denoting the number of test cases. Then T test cases follow. Each test case consist of one line. The first line of each test case consists of a string S.

Output:
Print all binary string that can be formed by replacing each wildcard character.

Constraints:
1 ≤ T ≤ 60
1 ≤ |S| ≤ 30

Example:
Input
1
1??0?101

Output
10000101 10001101 10100101 10101101 11000101 11001101 11100101 11101101

Explanation:
Testcase 1: There will be 8 such possible strings can be formed, they are 10000101 10001101 10100101 10101101 11000101 11001101 11100101 11101101.
*/
#include<stdio.h>
#include<string.h>

void print(char a[],int index)
{
    
    if(a[index] == '\0')
    {
        printf("%s ",a);
        return;
    }
    if(a[index] == '?')
    {
        a[index] = '0'; //replace with 0
        print(a,index+1);
         

        a[index] = '1'; //replace with 1
        print(a,index+1);
        a[index] = '?'; //backtrack as array is passed by reference
    }
    else
        print(a,index+1);
}

int main()
{
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    char a[100];
	    scanf("%s",a);
	    
	    print(a,0); //initialize the index to 0
	    printf("\n");
	}
	return 0;
}