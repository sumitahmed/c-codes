#include <stdio.h>

int main() {
    char input[1024];
    int frequency[10] = {0};
    int i = 0;
    gets(input);

    while (input[i] != '\0') {
        if (input[i] >= '0' && input[i] <= '9') {
            int digit = input[i] - '0';
            frequency[digit]++;
        }
        i++;
    }

    for (i = 0; i < 10; i++) {
        printf("%d", frequency[i]);
        if (i < 9) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
