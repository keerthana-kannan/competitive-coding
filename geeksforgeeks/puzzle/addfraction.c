//ADD 2 FRACTIONS
/*
You are given four numbers num1, den1, num2, and den2. You need to find 
(num1/den1)+(num2/den2) and output the result in the form of (numx/denx).

Input Format:
The first line of input contains an integer T denoting the number of test cases . 
Then T test cases follow . Each test case contains four integers num1, den1, num2, 
den2 respectively .

Output Format:
For each test case, in a new line,  output will be the fraction in the form a/b where 
the fraction denotes the sum of the two given fractions in reduced form.

Your Task:
Since this is a function problem, you don't need to worry about the testcases. Your 
task is to complete the function addFraction  which adds the two fractions and prints 
the resulting fraction. The function takes four arguments num1, den1, num2, den2 where 
num1, num2 denotes the numerators of two fractions and den1, den2 denotes their 
denominators.

Constraints:
1 <= T <= 100
1 <= den1,den2,num1,num2 <= 1000

Example:
Input
1
1 500 2 500
Output
3/500

Explanation:
In above test case 1/500+2/500=3/500

Algorithm to add two fractions

Find a common denominator by finding the LCM (Least Common Multiple) of the two 
denominators.
Change the fractions to have the same denominator and add both terms.
Reduce the final fraction obtained into its simpler form by dividing both numerator 
and denominator by there largest common factor.

*/
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 
  
// Function to convert the obtained fraction 
// into it's simplest form 
void lowest(int &den3, int &num3) 
{ 
    // Finding gcd of both terms 
    int common_factor = gcd(num3,den3); 
  
    // Converting both terms into simpler  
    // terms by dividing them by common factor  
    den3 = den3/common_factor; 
    num3 = num3/common_factor; 
} 
  
//Function to add two fractions 
void addFraction(int num1, int den1, int num2,  
                 int den2, int &num3, int &den3) 
{ 
    // Finding gcd of den1 and den2 
    den3 = gcd(den1,den2); 
  
    // Denominator of final fraction obtained 
    // finding LCM of den1 and den2 
    // LCM * GCD = a * b  
    den3 = (den1*den2) / den3; 
  
    // Changing the fractions to have same denominator 
    // Numerator of the final fraction obtained 
    num3 = (num1)*(den3/den1) + (num2)*(den3/den2); 
  
    // Calling function to convert final fraction 
    // into it's simplest form 
    lowest(den3,num3); 
} 