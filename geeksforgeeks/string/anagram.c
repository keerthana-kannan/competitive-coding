/*ANAGRAMS
Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are anagram of each other or not. An anagram of a string is another string
that contains same characters, only the order of characters can be different. For example, “act” and “tac” are anagram of each other.

Input: 
The first line of input contains an integer T denoting the number of test cases. Each test case consist of two strings in 'lowercase' only, in a single line.

Output:
Print "YES" without quotes if the two strings are anagram else print "NO".

Constraints:
1 ≤ T ≤ 300
1 ≤ |s| ≤ 1016

Example:
Input:
2
geeksforgeeks forgeeksgeeks
allergy allergic

Output:
YES
NO
*/
#include<stdio.h>

int check_anagram(char [], char []);
 
int main()
{
  char a[100000], b[100000];
  int t;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s %s",a,b);
    if(check_anagram(a, b)==1) printf("YES");
    else printf("NO");
    printf("\n");
 
  }
  
  
  return 0;
}
 
int check_anagram(char a[], char b[])
{
  int first[26] = {0}, second[26] = {0}, c=0;
 
  // Calculating frequency of characters of first string
 
  while (a[c] != '\0')
  {
    first[a[c]-'a']++;
    c++;
  }
 
  c = 0;
 
  while (b[c] != '\0')
  {
    second[b[c]-'a']++;
    c++;
  }
 
  // Comparing frequency of characters
 
  for (c = 0; c < 26; c++)
  {
    if (first[c] != second[c])
      return 0;
  }
 
  return 1;
}