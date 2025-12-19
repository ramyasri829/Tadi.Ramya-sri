Objective: 
#include <stdio.h> 
#include <ctype.h> 
 
int main()  
{ 
    char s[100]; 
    int lowercase = 0, uppercase = 0, vowels = 0, consonants = 0, digits = 0; 
     
    printf("Enter a string: "); 
    gets(s);   
    for (int i = 0; s[i] != '\0'; i++)  
   { 
        if (isalpha(s[i]))  
            { 
                if (islower(s[i]))  
                     { 
                         lowercase++; 
 
                            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||    
                               s[i] ==  'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')  
                                   { 
                                          vowels++; 
                                    }  
                             else  
                                    { 
                                          consonants++; 
                                     } 
                             }  
                    else if (isupper(s[i])) 
                          { 
                                uppercase++; 
                         if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')  
                                { 
                                     vowels++; 
                                 }  
                         else  
                                 { 
                                     consonants++; 
                                  } 
                           } 
        }  
             else if (isdigit(s[i]))  
               { 
                    digits++; 
               } 
    } 
 
    printf("Lowercase letters: %d\n", lowercase); 
    printf("Uppercase letters: %d\n", uppercase); 
    printf("Vowels: %d\n", vowels); 
    printf("Consonants: %d\n", consonants); 
    printf("Digits: %d\n", digits); 
 
    return 0; 
} 


