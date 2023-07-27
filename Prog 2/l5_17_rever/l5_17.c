#include <stdio.h>

#define MAX_WORDS 500
#define MAX_WORD_LENGTH 500

int main(void) {
    char words[MAX_WORDS][MAX_WORD_LENGTH];
    int word_count = 0;

    // Leitura das palavras do texto
    while (scanf("%s", words[word_count]) == 1) {
        word_count++;
    }

    // Impressão do texto de trás para frente
    for (int i = word_count - 1; i >= 0; i--) {
        for (int j = 0; words[i][j]; j++) {
            if (isalpha(words[i][j])) {
                printf("%c", words[i][j]);
            }
        }
        if (i > 0) {
            printf(" ");
        }
    }
  

    return 0;
}
