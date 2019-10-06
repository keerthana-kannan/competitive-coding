//strcmp FUNCTION THAT IGNORE CASES
/*
Write a modified strcmp function which ignores cases and returns -1 if s1 < s2, 0 if s1 = s2, else returns 1. For example, your strcmp should consider "GeeksforGeeks" and "geeksforgeeks" as same string.
Source: Microsoft Interview Set 5

Following solution assumes that characters are represented using ASCII representation, i.e., codes for ‘a’, ‘b’, ‘c’, … ‘z’ are 97, 98, 99, … 122 respectively. And codes for ‘A’, “B”, ‘C’, … ‘Z’ are 65, 66, … 95 respectively.

Following are the detailed steps.
1) Iterate through every character of both strings and do following for each character.
…a) If str1[i] is same as str2[i], then continue.
…b) If inverting the 6th least significant bit of str1[i] makes it same as str2[i], then continue. For example, if str1[i] is 65, then inverting the 6th bit will make it 97. And if str1[i] is 97, then inverting the 6th bit will make it 65.
…c) If any of the above two conditions is not true, then break.
2) Compare the last (or first mismatching in case of not same) characters.
*/
int ic_strcmp(char *s1, char *s2) 
{ 
    int i; 
    for (i = 0; s1[i] && s2[i]; ++i) 
    { 
        /* If characters are same or inverting the  
           6th bit makes them same */
        if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i]) 
           continue; 
        else
           break; 
    } 
  
    /* Compare the last (or first mismatching in  
       case of not same) characters */
    if (s1[i] == s2[i]) 
        return 0; 
  
    // Set the 6th bit in both, then compare 
    if ((s1[i] | 32) < (s2[i] | 32))  
        return -1; 
    return 1; 
} 