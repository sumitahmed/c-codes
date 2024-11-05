#include <stdio.h>
#include <string.h>

int main() {
    char s[1024];
    int i = 0;
    gets(s);

    while (s[i] != '\0') {
        if (s[i] == ' ') {
            printf("\n");
        } else {
            printf("%c", s[i]);
        }
        i++;
    }
    
    printf("\n");
    return 0;
}
