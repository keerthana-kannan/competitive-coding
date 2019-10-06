//SWAP 2 NIBBLES IN A BYTE

#include <stdio.h>
int main() {
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    unsigned int num;
	    unsigned int ans;
	    scanf("%u",&num);
	    unsigned int a,b;
	    a = (num & 0x0F);
	    b = (num & 0xF0);
	    ans = a<<4 | b>>4;
	    printf("%u\n",ans);
	}
	return 0;
}