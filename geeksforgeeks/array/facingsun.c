//FACING THE SUN
/*
Monu lives in a society which is having high rise buildings. This is the time of sunrise and monu wants see the buildings receiving the sunlight. Help him in counting the number of buildings recieving the sunlight.
Given an array H representing heights of buildings. You have to count the buildings which will see the sunrise (Assume : Sun rise on the side of array starting point).

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, N is the number of buildings. The second line of each test case contains N input H[i], height of ith building.

Output:
Print the total number of buildings which will see the sunset.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106
1 ≤ Hi ≤ 108

Example:
Input:
2
5
7 4 8 2 9
4
2 3 4 5

Output:
3
4

Explanation:
Testcase 1: Building with height 7, 8 and 9 will recieve the sunlight during sunrise.
*/
#include<stdio.h>
int main()
{
	//code
	int test,i;
	scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++)
            scanf("%d",&a[j]);
        
        int count = 1,tall = a[0];
        for(int j=1;j<n;j++)
        {
            if(a[j]>tall)
            {
                count++;
                tall = a[j];
            }
        }
        printf("%d\n",count);
    }
	return 0;
}