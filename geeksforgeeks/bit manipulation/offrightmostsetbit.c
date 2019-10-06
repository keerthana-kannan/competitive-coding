// TURN OFF THE RIGHTMOST SET BIT
/*
Write a program that unsets the rightmost set bit of an integer.
Examples :

Input:  12 (00...01100)
Output: 8 (00...01000)

Input:  7 (00...00111)
Output: 6 (00...00110)
Let the input number be n. n-1 would have all the bits flipped after the rightmost set 
bit (including the set bit). So, doing n&(n-1) would give us the required result.
*/        

#include<stdio.h>

int main()
{
    int n = 7;
    int m = 1;
    
    if(n & m == 0)
    {
        m<<=1;
    }
    n = n ^ m;
    printf("%d", n);
}