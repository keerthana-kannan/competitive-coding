/* LARGEST NUMBER FORMED FROM AN ARRAY
Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.The result is going to be very large, hence return the result in the form of a string.

Input:
The first line of input consists number of the test cases. The description of T test cases is as follows:
The first line of each test case contains the size of the array, and the second line has the elements of the array.

Output:
In each separate line print the largest number formed by arranging the elements of the array in the form of a string.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 102
0 ≤ A[i] ≤ 103

Example:
Input:
2
5
3 30 34 5 9
4
54 546 548 60

Output:
9534330
6054854654
*/
#include <string.h>

int cmp(char * A, char * B){
    char A1[10], A2[10];
    strcpy(A1, A);
    strcat(A1, B);
    strcpy(A2, B);
    strcat(A2, A);
    if(strcmp(A1, A2)>0)
        return 1;
    else
        return 0;
}

int main() {
	int T, N;
	scanf("%d", &T);
	for(int t=0; t<T; t++){
	    scanf("%d", &N);
	    char A[N][5];
	    for(int i =0; i<N; i++){
	        scanf("%s", &A[i]);
	    }
	    qsort(A, N, sizeof(char[5]), cmp);
	    
	    for(int i =N-1; i>=0; i--){
	        printf("%s", A[i]);
	    }
	    printf("\n");
	}
	return 0;
}