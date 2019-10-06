/* TRAVERSING MATRIX SPIRALLY
Given a matrix mat[][] of size M*N. Traverse and print the matrix in spiral form.

Input: 
The first line of the input contains a single integer T, denoting the number of test cases. Then T test cases follow. Each testcase has 2 lines. First line contains M and N 
respectively separated by a space. Second line contains M*N values separated by spaces.

Output:
Elements when travelled in Spiral form, will be displayed in a single line.

Constraints:
1 <= T <= 100
2 <= M,N <= 10
0 <= Ai <= 100

Example:
Input:
2
4 4
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
3 4
1 2 3 4 5 6 7 8 9 10 11 12

Output:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
1 2 3 4 8 12 11 10 9 5 6 7
*/
#include <stdio.h>

void traverse (int m, int n, int a[m][n])
{
    int i,j;
    int k=0, l=0; //k=row,l=col
    
    while (k<m && l<n){
    for(i=l;i<n;i++)
        printf("%d ",a[k][i]);
    k++;
    
    for(i=k;i<m;i++)
        printf("%d ",a[i][n-1]);
    n--;
    
    if(k<m)
    {
        for(i=n-1;i>=l;i--)
            printf("%d ",a[m-1][i]);
        m--;
    }
    
    if(l<n)
    {
        for(i=m-1;i>=k;i--)
            printf("%d ",a[i][l]);
        l++;
    }
    }
}

int main() {
	//code
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
	    int m,n;
	    scanf("%d %d",&m,&n);
	    int a[m][n];
	    
	    for(int row=0;row<m;row++)
	        for(int col=0;col<n;col++)
	            scanf("%d ",&a[row][col]);
	            
	    traverse(m,n,a);
	    
	    printf("\n");
	}
	return 0;
}