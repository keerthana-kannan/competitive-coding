//SUBSEQUENCE MATCHING
int main() {
	//code
	int T,i;
    scanf("%d",&T);
    int found[T];
    char* c = (char*)calloc(100000,sizeof(char));
    for(i=0;i<T;i++)
        {
            scanf("%s",c);
            int match =1;
            char* temp = c;
            while(*temp)
                {
                    char ch0 = temp[0];
                    char ch1 = temp[1];
                    char ch2 = temp[2];
                    if((ch0 == 'R') && (ch1 == 'Y') && (ch2 == 'Y') )
                        {
                          temp = temp+3;
                        }
                    else if( (ch0 == 'R') && (ch1 == 'Y'))
                        {
                          temp = temp+2;
                        }
                    else if((ch0 == 'R'))
                        {

                          temp = temp+1;
                        }
                    else
                        {
                            match =0;
                            break;
                        }

                }
                found[i] = match;
        }

        for(i=0;i<T;i++)
            {
                if(found[i] == 1)
                    {
                        printf("YES\n");
                    }
                else
                    {
                       printf("NO\n");
                    }
            }
        free(c);
	return 0;
}