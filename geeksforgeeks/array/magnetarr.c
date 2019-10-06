//MAGNET ARRAY PROBLEM
/*
Given n Magnets which are placed linearly, with each magnet to be considered as of point object. Each magnet suffers force from its left sided magnets such that they repel it 
to the right and vice versa. All forces are repulsive. The force being equal to the distance (1/d , d being the distance). Now given the positions of the magnets, the task to 
find all the points along the linear line where net force is ZERO. 

Note: Distance have to be calculated with precision of 0.0000000000001.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. The second line of each test case contains an integer N. Then in the next line are N space separated values of the array M[], denoting the positions of the magnet.

Output:
For each test case in a new line print the space separated points having net force zero till precised two decimal places.

Constraints:
1<=T<=100
1<=N<=100
1<=M[]<=1000

Example:
Input:
2
2
1 2
4
0 10 20 30
Output:
1.50
3.82 15.00 26.18
*/
#include<stdio.h>
int main()
{
	int t,n,i,j,k;
	double s,s1,l,u,e=0.0000000000001;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%d",&n);
	    int a[n];
	    for(j=0;j<n;j++)
	    scanf("%d",&a[j]);
	    for(j=0;j<n-1;j++)
	    {l=a[j];
	    u=a[j+1];
	        s=(a[j]+a[j+1])/2.0;
	        while(1)
	        {s1=0;
	            for(k=0;k<n;k++)
	            s1+=1.0/(s-a[k]);
	               if((s1>(-e))&&(s1<e))
	           { printf("%.2lf ",s);break;}
	            else if(s1>0)
	            {l=s;s=(l+u)/2.0;}
	            else if(s1<0)
	            {u=s;s=(u+l)/2.0;}
	           
	            
	        }
	        
	    }
	    printf("\n");
	}
	return 0;
}