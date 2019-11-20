#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char word[20];
char fork[20];
char errors[27];

#if defined(__MINGW32__) || defined(_MSC_VER)
#define cleanInput() fflush(stdin)
#define cleanScreen() system("cls")
#else
#define cleanInput() __fpurge(stdin)
#define cleanScreen() system("clear")
#endif

//This method cleans the chars buffer
void cleanBuffer(char *buf, int size) {
    int i = 0;
    for (i = 0; i < size; i++) {
        buf[i] = 0;
    }
}

void trimEnd(char *str) {
    int p;
    for (p = strlen(str); isspace(str[p]); p--) {
        str[p] = 0;
    }
}

int isChar(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

char upcase(char c) {
    return (c >= 'a' && c <= 'z') ? (c - 32) : c;
}

void start(void) {
    cleanBuffer(word, 20);
    cleanBuffer(fork, 20);
    cleanBuffer(errors, 27);

    printf("\nDigite uma palavra: ");
    fgets(word, 20, stdin);
    cleanInput();

    trimEnd(word);

    int i;
    for (i = 0; word[i] != 0; i++) {
        char c = word[i];
        fork[i] = isChar(c) ? '_' : c;
    }
}

int game(void) {
    char tries;
    int chances = 5;

    int words = 0;
    int i;
    for (i = 0; word[i] != 0; i++) {
        if (isChar(word[i])) words++;
    }

    while (chances > 0) {
        cleanScreen();
        printf("\nChances: %d - palavras tem %d palavras\n\n", chances, words);

        printf("%s", fork);
        if (strlen(errors) > 0) {
            printf("\nerrors: %s", errors);
        }

        printf("\n\nDigite uma letra: ");
        scanf("%c", &tries);
        cleanInput();

        if (!isChar(tries)) continue;

        int tried = 0;
        while(errors[i] != 0) {
            if (errors[i] == upcase(tries)) {
                tried = 1;
                break;
            }
            i++;
        }
        if (tried) continue;
        for (i = 0; fork[i] != 0; i++) {
            if (upcase(fork[i]) == upcase(tries)) {
                tried = 1;
                break;
            }
        }
        if (tried) continue;

        int win = 1;
        int found = 0;
        for (i = 0; word[i] != 0; i++) {
            if (!isChar(word[i])) continue;
            if (fork[i] == '_') {
                if (upcase(word[i]) == upcase(tries)) {
                    fork[i] = word[i];
                    found = 1;
                } else {
                    win = 0;
                }
            }
        }

        if (win) {
            return 1; 
        }

        if (!found) {
            chances--;
            errors[strlen(errors)] = upcase(tries);
        }
    }
    return 0;
}

void showResult(int result) {
    cleanInput();
    if (result == 0) {
        printf("\nVoce perdeu. \nA palavra era %s", word);
    } else {
        printf("\nParabens, voce acertou a palavra %s ", word);
    }
}

int main() {
    start();
    int result = game();
    showResult(result);
    return 0;
}