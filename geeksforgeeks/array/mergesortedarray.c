/* MERGE TWO SORTED ARRAY

Input:
First line contains an integer T, denoting the number of test cases. First line of each test case contains two space separated integers X and Y, denoting the size of the two sorted arrays. Second line of each test case contains X space separated integers, denoting the first sorted array P. Third line of each test case contains Y space separated integers, denoting the second array Q.

Output:
For each test case, print (X + Y) space separated integer representing the merged array.

Constraints:
1 <= T <= 100
1 <= X, Y <= 5*104
0 <= arr1i, arr2i <= 109

Example:
Input:
2
4 5
1 3 5 7
0 2 6 8 9
2 3
10 12
5 18 20

Output:
0 1 2 3 5 6 7 8 9
5 10 12 18 20
*/

#include <stdio.h>

void sorted(int x[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
}

int main() {
	//code
	int test;
	scanf("%d",&test);
	for(int i=0;i<test;i++)
	{
	    int n1,n2;
	    scanf("%d %d",&n1,&n2);
	    int a[n1],b[n2],c[n1+n2];
	    for(int j=0;j<n1;j++)
	        scanf("%d",&a[j]);
	    for(int k=0;k<n2;k++)
	        scanf("%d",&b[k]);
	        
	    sorted(a,n1);
	    sorted(b,n2);
	    int u=0,v=0,m=0;
        while(u<n1 && v<n2)
	    {
	        if(a[u]<b[v])
	        {
	            c[m]=a[u];
	            u++;
	            m++;
	        }
	        else
	        {
	            c[m]=b[v];
	            v++;
	            m++;
	        }
	    }
	    while(u<n1)
	    {
	        c[m] = a[u];
	        u++;
	        m++;
	    }
	    while(v<n2)
	    {
	        c[m] = b[v];
	        v++;
	        m++;
	    }
	    
	    for(int x=0;x<n1+n2;x++)
	        printf("%d ",c[x]);
	        
	    printf("\n");
	    
	}
	return 0;
}
