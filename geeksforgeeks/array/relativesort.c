//RELATIVE SORTING
/*
Given two arrays A1[] and A2[] of size N and M respectively. The task is to sort A1 in such a way that the relative order among the elements will be same as those in A2. For the elements not present in A2, append them at last in sorted order. It is also given that the number of elements in A2[] are smaller than or equal to number of elements in A1[] and A2[] has all distinct elements.

Note: Expected time complexity is O(N log(N)).

Input:
First line of input contains number of testcases. For each testcase, first line of input contains length of arrays N and M and next two line contains N and M elements respectively.

Output:
Print the relatively sorted array.

Constraints:
1 ≤ T ≤ 100
1 ≤ N,M  ≤ 106
1 ≤ A1[], A2[] <= 106

Example:
Input:
1
11 4
2 1 2 5 7 1 9 3 6 8 8
2 1 8 3

Output:
2 2 1 1 8 8 3 5 6 7 9

Explanation:
Testcase 1: Array elements of A1[] are sorted according to A1[].
*/
/*
1.
Step 1. Loop through A1[], store the count of every number in a HashMap (key: number, value: count of number) .
Step 2. Loop through A2[], check if it is present in HashMap, if so, put in output array that many times and remove the number from HashMap.
Step 3. Sort the rest of the numbers present in HashMap and put in output array.

The steps 1 and 2 on average take O(m+n) time under the assumption that we have a good hashing function that takes O(1) time for insertion and search on average. The third step takes O(pLogp) time where p is the number of elements remained after considering elements of A2[]..
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
	    int n1,n2;
	    scanf("%d%d",&n1,&n2);
	    int a1[n1];
	    int a2[n2];
	    int *hash=(int*)malloc(sizeof(int)*1000000);
	    for(int i=0;i<1000000;i++)
	    hash[i]=0;
	    for(int i=0;i<n1;i++)
	    {
	        scanf("%d",&a1[i]);
	        hash[a1[i]]+=1;
	    }
	    for(int i=0;i<n2;i++)
	    {
	        scanf("%d",&a2[i]);
	        if(hash[a2[i]]>0)
	        {
	            for(int j=0;j<hash[a2[i]];j++)
	            printf("%d ",a2[i]);
	            hash[a2[i]]=0;
	        }
	    }
	    for(int i=0;i<1000000;i++)
	    {
	        if(hash[i]>0)
	        {
	            for(int j=0;j<hash[i];j++)
	            printf("%d ",i);
	        }
	    }
	    printf("\n");
	}
	return 0;
}