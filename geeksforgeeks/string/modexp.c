//MODULAR EXPONENTATION FOR LARGE NUMBERS
/*
Implement pow(A, B) % C.

In other words, given A, B and C, find (AB)%C.
 

Input:

The first line of input consists number of the test cases.

 The following T lines consist of 3 numbers each separated by a space and in the following order:

A B C

'A' being the base number, 'B' the exponent (power to the base number) and 'C' the modular.

 

Output:

In each separate line print the modular exponent of the given numbers in the test case.


Constraints:

1 ≤ T ≤ 70

1 ≤ A ≤ 10^5

1 ≤ B ≤ 10^5

1 ≤ C ≤ 10^5


Example:

Input:

3
3 2 4
10 9 6
450 768 517

Output:

1
4
34
*/
/*
SOLUTION:
(ab) mod p = ( (a mod p) (b mod p) ) mod p 

For example a = 50,  b = 100, p = 13
50  mod 13  = 11
100 mod 13  = 9

(50 * 100) mod 13 = ( (50 mod 13) * (100 mod 13) ) mod 13 
or (5000) mod 13 = ( 11 * 9 ) mod 13
or 8 = 8
Time Complexity is O(Log y).
*/
#include<stdio.h>

int power(int a,unsigned int b,int c)
{
    int result = 1;
    a = a%c; //ab mod c = ((a%c)(b%c)) % c
    
    while(b>0)
    {
        if(b & 1) //if the value is 1 in the binary representation of b
            result = (result*a) % c; 
        
        b = b>>1; //b = b/2, b is reduced by 1/2 as a is squared in the next line
        a = (a*a)%c;
    }
    return result;
}

int main()
{
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    int a,c;
	    unsigned int b;
	    scanf("%d %u %d",&a,&b,&c);
	    
	    printf("%d\n",power(a,b,c));
	}
	return 0;
}