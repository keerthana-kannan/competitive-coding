/*LONGEST DISTINCT CHARACTERS IN STRING
Given a string S, find length of the longest substring with all distinct characters.  For example, for input "abca", the output is 3 as "abc" is the longest substring with all 
distinct characters.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is String str.

Output:
Print length of smallest substring with maximum number of distinct characters.
Note: The output substring should have all distinct characters.

Constraints:
1 ≤ T ≤ 100
1 ≤ size of str ≤ 10000

Example:
Input:
2
abababcdefababcdab
geeksforgeeks

Output:
6
7
*/
#include <stdio.h>
#include <string.h>


int main() {
	//code
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
	    char str[10000];
	    scanf("%s",str);
	    int n=strlen(str);
	   // printf("%d-",n);
	    int max=0;
	    int start=0;
	    for(int j=1;j<n;j++){
	        int count=0;
	        for(int k=start;k<j;k++)
			{
	            if(str[j] == str[k]){
	                start=k+1;
	                count=0;
	                break;
	            }
	            else{
	                count++;
	            }
	            
	            if(max<count){
	                max=count;
	            }
	            
	        }
	       // printf("%d-%d\n",cnt,j);
	    }
	    printf("%d\n",max+1);
	}
	return 0;
}