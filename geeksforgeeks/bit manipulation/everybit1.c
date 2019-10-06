//TO CHECK IF EVERY BIT IS 1

#include<stdio.h>

int main()
{
		int N;
		scanf("%d",&N);
		int flag=1;

	    while(N!=0)
        {
            if(N&1)
            {
                flag=1;
                N=N>>1;
            }
            else
            {
                flag=0;
                break;
            }
        }
	    if(flag == 1)
	        printf("YES\n");
	    else
	        printf("NO\n");
		
		return 0;
}