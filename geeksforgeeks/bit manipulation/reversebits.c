//REVERSE BITS IN A NUMBER
#include <stdio.h>
int main() {
	//code
	int test,i;
	
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    int num;
	    scanf("%d",&num);
	    unsigned int  NO_OF_BITS = sizeof(num) * 8; 
        unsigned int reverse_num = 0; 
        int i; 
        for (i = 0; i < NO_OF_BITS; i++) 
        { 
            if((num & (1 << i))) 
                reverse_num |= 1 << ((NO_OF_BITS - 1) - i);   
        } 
	    printf("%u\n",reverse_num);
	}
	return 0;
}