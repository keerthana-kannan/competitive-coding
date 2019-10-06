/*TRAPPING RAIN WATER
Given an array arr[] of N non-negative integers representing height of blocks at index i as Ai where the width of each block is 1. Compute how much water can be trapped in between blocks after raining.
Structure is like below:
|  |
|_|
We can trap 2 units of water in the middle gap.
Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. Each test case contains an integer N denoting the size of the array, followed by N space separated numbers to be stored in array.

Output:
Output the total unit of water trapped in between the blocks.

Constraints:
1 <= T <= 100
3 <= N <= 107
0 <= Ai <= 108

Example:
Input:
2
4
7 4 0 9
3
6 9 9

Output:
10
0
*/

#include<stdio.h>
int max(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}
int min(int a,int b){
    if(a<b)
        return a;
    else
        return b;
}
int main() {
	//code
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int n;
	    scanf("%d",&n);
	    int arr[n],water=0;
	    for(int j=0;j<n;j++)
	        scanf("%d",&arr[j]);
	        
	    int left[n],right[n];
	    left[0] = arr[0];
	    for(int j=1;j<n;j++)
	        left[j] = max(left[j-1],arr[j]);
	        
	    right[n-1]=arr[n-1];
	    for(int j=n-2;j>=0;j--)
	        right[j] = max(right[j+1],arr[j]);
	        
	    for(int j=0;j<n;j++)
	        water += min(left[j],right[j])-arr[j];
	    printf("%d\n",water);
	}
	return 0;
}