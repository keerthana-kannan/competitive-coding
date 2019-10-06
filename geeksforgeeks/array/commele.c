//COMMON ELEMENTS
/*
Given three increasingly sorted arrays A, B, C of sizes N1, N2, and N3 respectively, you need to print all common elements in these arrays.

Note: Please avoid printing the same common element more than once.

Input:
First line contains a single integer T denoting the total number of test cases. T testcases follow. Each testcase contains four lines of input. First line consists of 3 integers N1, N2 and N3, denoting the sizes of arrays A, B, C respectively. The second line contains N1 elements of A array. The third lines contains N2 elements of B array. The fourth lines contains N3 elements of C array.

Output:
For each testcase, print the common elements of array. If not possible then print -1.

Constraints:
1 <= T <= 100
1 <= N1, N2, N3 <= 107
1 <= Ai, Bi, Ci <= 1018

Example:
Input:
1
6 5 8
1 5 10 20 40 80
6 7 20 80 100
3 4 15 20 30 70 80 120
Output:
20 80

Explanation:
Testcase1:  20 and 80 are the only common elements
*/
#include<stdio.h>
int main()
{
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    long int n1,n2,n3;
	    scanf("%ld %ld %ld",&n1,&n2,&n3);
	    long int a[n1],b[n2],c[n3];
	    for(int j=0;j<n1;j++)
	        scanf("%ld",&a[j]);
	    
	    for(int j=0;j<n2;j++)
	        scanf("%ld",&b[j]);
	    
	    for(int j=0;j<n3;j++)
	        scanf("%ld",&c[j]);
	        
	    long int x=0,y=0,z=0;
	    int flag = 0;
	    int prev = -1;
	    while(x<n1 && y<n2 && z<n3)
	    {
	        if(a[x] == b[y] && b[y]==c[z] && b[y] != prev)
	        {
	            
	            printf("%ld ",b[y]);
	            flag = 1;
	            prev = b[y];
	            x++;
	            y++;
	            z++;
	        }
	        
	        else if(a[x]<b[y])
	            x++;
	        else if(b[y]<c[z])
	            y++;
	        else // We reach here when x > y and z < y, i.e., z is smallest
	            z++;
	    }
	    
	    if(flag == 0)
	        printf("-1");
	    printf("\n");
	}
	return 0;
}