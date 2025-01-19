#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 256

void countLetters(const char *str, int *letterCount) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        char c = str[i];
        if (isalpha(c)) {
            c = tolower(c);
            letterCount[c - 'a']++;
        }
    }
}

int main() {
    char inputString[MAX_LENGTH];
    int letterCount[26] = {0};

    printf("Digite uma string (max %d caracteres): ", MAX_LENGTH);
    fgets(inputString, sizeof(inputString), stdin);

    countLetters(inputString, letterCount);

    printf("Quantidade de cada letra:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'a' + i, letterCount[i]);
    }

    return 0;
}
