/*
Problem Statement:

For Peer to Peer WiFi systems, the adapter MAC address is often altered to differentiate between a peer to peer connection and a WLAN connection.
For example, if the MAC addressed used for WLAN is 00:01:02:03:04:06 , MAC address used for Peer to Peer wifi is 00:01:03:03:04:04

For a hypothetical implementation, let us assume that the mac address and Peer-2-Peer MAC address differ by 2, and only 2 bits, as in the example above.

Write a program, that takes a mac address as an input, and looks for its presence in a file.
This file is called a LEASE file and the entries in this file contain Peer to Peer MAC address. There is one entry per line.
The program returns TRUE if there is a Peer 2 Peer MAC address corresponding to the input WLAN mac address in the LEASE file.

For example,
input to program 00:01:02:03:04:06 

LEASE File entries: (':' shown below is just for representation, the MAC address is actually stored as an array of 6 bytes(chars) per line
0a:01:02:03:04:04
0d:ff:02:03:04:04
0c:01:ff:03:04:14
00:01:02:03:04:04
0b:01:02:03:04:34

This program should return false since entry number 4 contains a MAC address differing by only 1 bit instead of 2.

For you implementation, please assume that File Handling APIs are available:
You may name them as you like (FOPEN, FCLOSE, FREAD, FSEEK, FEOF etc.)

int fd = fopen();
if (fd != 0)
  // valid fd
  
int num
typedef struct mac{
// define
   char str[20];
} mac;

while (!feof(fd))

{
    num = fread(fd,mac &mac1, sizeof(mac); // reads one mac address at a time
    
}
*/

// Start writing here
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define DELIM ":"

typedef struct mac{
    char str[20];
}mac;

int main() {

    char x[20];
    scanf("%s",x);
    int count =0;
    int flag =1;
    while(!feof(fd))
    {
        num = fread(fd,mac &mac1, sizeof(mac));
        char *ptr1,*ptr2;
        ptr1 = strtok(x,DELIM);
        ptr2 = strtok(mac1.str,DELIM);
        
        while(ptr1 != '\0' && ptr2 != '\0')
        {
        
            if(ptr1 && ptr2)
            {
                int a,b;
                a = atox(ptr1);
                b = atox(ptr2);
                int c = a^b;
                /*
                int len = sizeof(c)*8;
                for(int i=0;i<len;i++)
                {
                    if((1<<i)&c)
                        count++;
                        if(count>2)
                            break;
                }*/
                while (c>=0)
                {
                   if(c&1 == 1)
                    count ++;
                   c=c>>1;
                }
                ptr1 = strtok(NULL,DELIM);
                ptr2 = strtok(NULL,DELIM);
            }
          
         }
         if(count != 2)
         {
             flag =0;
              break;
         } 

    }
    if(flag == 1)
         printf("TRUE");
     else
          printf("FALSE");  
}   