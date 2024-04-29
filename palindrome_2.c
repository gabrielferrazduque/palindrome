#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindroma_v2(char *frase) {
    int i, j;
    char frase_sem_espacos[100]; // Assumindo um limite de tamanho da frase
    j = 0;
    for (i = 0; frase[i]; i++) {
        if (!isspace(frase[i])) {
            frase_sem_espacos[j++] = frase[i];
        }
    }
    frase_sem_espacos[j] = '\0';
    int tamanho = strlen(frase_sem_espacos);
    for (i = 0; i < tamanho / 2; i++) {
        if (frase_sem_espacos[i] != frase_sem_espacos[tamanho - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char frase[100]; // Assumindo um limite de tamanho da frase
    printf("Digite a frase: ");
    fgets(frase, 100, stdin);
    if (palindroma_v2(frase)) {
        printf("A frase é um palíndromo!\n");
    } else {
        printf("A frase não é um palíndromo!\n");
    }
    return 0;
}
