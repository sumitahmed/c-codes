#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100], sen[100];
    
    scanf("%c", &ch);                // Read the single character
    scanf("\n");                      // Consuming the newline after the character input
    fgets(s, sizeof(s), stdin);       // Reading the word or string (Language)
    fgets(sen, sizeof(sen), stdin);   // Reading the full sentence (Welcome To C!!)
    
    printf("%c\n", ch);               // Print the single character followed by a newline
    printf("%s", s);                  // Print the string (fgets adds newline automatically)
    printf("%s", sen);                // Print the sentence
    
    return 0;
}
