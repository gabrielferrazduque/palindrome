#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remove_espacos(char *frase) {
    int i, j = 0;
    for (i = 0; frase[i]; i++) {
        if (!isspace(frase[i])) {
            frase[j++] = frase[i];
        }
    }
    frase[j] = '\0';
}

int palindroma_v1(char *frase) {
    char temp[100]; // Assumindo um limite de tamanho da frase
    int i, j;
    remove_espacos(frase);
    j = 0;
    for (i = strlen(frase) - 1; i >= 0; i--) {
        temp[j++] = frase[i];
    }
    temp[j] = '\0';
    return strcmp(frase, temp) == 0;
}

int main() {
    char frase[100]; // Assumindo um limite de tamanho da frase
    printf("Digite a frase: ");
    fgets(frase, 100, stdin);
    if (palindroma_v1(frase)) {
        printf("A frase é um palíndromo!\n");
    } else {
        printf("A frase não é um palíndromo!\n");
    }
    return 0;
}