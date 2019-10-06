//SORT ELEMENTS BY FREQUENCY
/*
Given an array A[] of integers, sort the array according to frequency of elements. That is elements that have higher frequency come first. If frequencies of two elements are same, then smaller number comes first.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
For each testcase, in a new line, print each sorted array in a seperate line. For each array its numbers should be seperated by space.

Constraints:
1 ≤ T ≤ 70
30 ≤ N ≤ 130
1 ≤ Ai ≤ 60 

Example:
Input:
2
5
5 5 4 6 4
5
9 9 9 2 5

Output:
4 4 5 5 6
9 9 9 2 5

Explanation:
Testcase1: The highest frequency here is 2. Both 5 and 4 have that frequency. Now since the frequencies are same then smaller element comes first. So 4 4 comes first then comes 5 5. Finally comes 6.
The output is 4 4 5 5 6.

Testcase2: The highest frequency here is 3. The element 9 has the highest frequency. So 9 9 9 comes first. Now both 2 and 5 have same frequency. So we print smaller element first.
The output is 9 9 9 2 5.

Use a sorting algorithm to sort the elements O(nlogn)
Scan the sorted array and construct a 2D array of element and count O(n).
Sort the 2D array according to count O(nlogn).
Example:

  Input 2 5 2 8 5 6 8 8

  After sorting we get
  2 2 5 5 6 8 8 8

  Now construct the 2D array as
  2, 2
  5, 2
  6, 1
  8, 3

  Sort by count
  8, 3
  2, 2
  5, 2
  6, 1
How to maintain the order of elements if the frequency is the same?:
The above approach doesn’t make sure order of elements if the frequency is the same. To handle this, we should use indexes in step 3, if two counts are same then we should first process(or print) the element with a lower index. In step 1, we should store the indexes instead of elements.

  Input 5  2  2  8  5  6  8  8

  After sorting we get
  Element 2 2 5 5 6 8 8 8
  Index   1 2 0 4 5 3 6 7

  Now construct the 2D array as
  Index, Count
  1,      2
  0,      2
  5,      1
  3,      3

  Sort by count (consider indexes in case of tie)
  3, 3
  0, 2
  1, 2
  5, 1
  
  Print the elements using indexes in the above 2D array.
*/
#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

// Used for sorting 
struct ele { 
    int count, index, val; 
}; 
  
// Used for sorting by value 
bool mycomp(struct ele a, struct ele b) 
{ 
    return (a.val < b.val); 
} 
  
// Used for sorting by frequency. And if frequency is same, 
// then by appearance 
bool mycomp2(struct ele a, struct ele b) 
{ 
    if (a.count != b.count) 
        return (a.count < b.count); 
    else
        return a.index > b.index; 
} 
  
void sortByFrequency(int arr[], int n) 
{ 
    struct ele element[n]; 
    for (int i = 0; i < n; i++) { 
  
        // Fill Indexes  
        element[i].index = i;  
        // Initialize counts as 0 
        element[i].count = 0;  
  
        // Fill values in structure 
        // elements  
        element[i].val = arr[i];  
    } 
  
    /* Sort the structure elements according to value, 
       we used stable sort so relative order is maintained. */
    stable_sort(element, element + n, mycomp); 
  
    /* initialize count of first element as 1 */
    element[0].count = 1; 
  
    /* Count occurrences of remaining elements */
    for (int i = 1; i < n; i++) { 
        if (element[i].val == element[i - 1].val) { 
            element[i].count += element[i - 1].count + 1; 
  
            /* Set count of previous element as -1, we are 
               doing this because we'll again sort on the 
               basis of counts (if counts are equal than on 
               the basis of index)*/
            element[i - 1].count = -1; 
  
            /* Retain the first index (Remember first index 
               is always present in the first duplicate we 
               used stable sort. */
            element[i].index = element[i - 1].index; 
        } 
  
        /* Else If previous element is not equal to current 
          so set the count to 1 */
        else
            element[i].count = 1; 
    } 
  
    /* Now we have counts and first index for each element so now 
       sort on the basis of count and in case of tie use index 
       to sort.*/
    stable_sort(element, element + n, mycomp2); 
    for (int i = n - 1, index = 0; i >= 0; i--) 
        if (element[i].count != -1) 
            for (int j = 0; j < element[i].count; j++) 
                arr[index++] = element[i].val; 
} 

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
	        scanf("%d ",&a[j]);
	    
	    sortByFrequency(a,n);
	    
	    for(int j=0;j<n;j++)
	        printf("%d ",a[j]);
	    
	    printf("\n");
	}
	return 0;
}