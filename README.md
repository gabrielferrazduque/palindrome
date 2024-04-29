# palindrome
palindrome
#include <stdio.h>
#include <string.h> 
#include <stdio.h>
#include <string.h> 
#include<stdio.h> 
#include<palindrome.h>  
#include<math.h>
#defina tal =20 

// Opção 1: Usando funções 

 int main("digital palindrome");   
 char ("que digital palindrome");  
 while(sqrlar( palindrome)); 
{} 
int  palindromesqrlar (static main )
 int palindromesqllar (while (default DIGITEL palindrome();  
 
def palindroma_v2(frase):
    frase_sem_espacos = frase.replace(" ", "")
    tamanho = len(frase_sem_espacos)
    for i in range(tamanho // 2):
        if frase_sem_espacos[i] != frase_sem_espacos[tamanho - i - 1]:
            return False
    return True

frase = "subi no onibus"
print(palindroma_v2(frase))

ef remove_espacos(frase):
    return frase.replace(" ", "")

def palindroma_v1(frase):
    frase_sem_espacos = remove_espacos(frase)
    return frase_sem_espacos == frase_sem_espacos[::-1]

frase = "subi no onibus"
print(palindroma_v1(frase))

// Função para remover espaços em branco
void removerEspacosEmBranco(char *frase) {
  int i, j;
  for (i = 0, j = 0; frase[i] != '\0'; i++) {
    if (frase[i] != ' ') {
      frase[j++] = frase[i];
    }
  }
  frase[j] = '\0';
}

// Função para reverter string
void reverterString(char *frase) {
  int i, j;
  for (i = 0, j = strlen(frase) - 1; i < j; i++, j--) {
    char temp = frase[i];
    frase[i] = frase[j];
    frase[j] = temp;
  }
}

int verificarPalindromoComFuncoes(char *frase) {
  // Remover espaços em branco
  removerEspacosEmBranco(frase);

  // Converter para minúsculo
  for (int i = 0; frase[i] != '\0'; i++) {
    frase[i] = tolower(frase[i]);
  }

  // Reverter string
  char fraseRevertida[strlen(frase) + 1];
  strcpy(fraseRevertida, frase);
  reverterString(fraseRevertida);

  // Comparar strings
  return strcmp(frase, fraseRevertida) == 0;
}

// Opção 2: Lógica otimizada

int verificarPalindromoOtimizado(char *frase) {
  // Converter para minúsculo
  for (int i = 0; frase[i] != '\0'; i++) {
    frase[i] = tolower(frase[i]);
  }

  int i = 0, j = strlen(frase) - 1;
  while (i < j) {
    if (frase[i] != frase[j]) {
      return 0;
    }
    i++;
    j--;
  }
  return 1;
}

int main() {
  char frase[100];

  printf("Digite uma frase: ");
  fgets(frase, sizeof(frase), stdin);

  // Remover a quebra de linha da entrada
  frase[strcspn(frase, "\n")] = '\0';

  // Verificar se a frase é um palíndromo
  int resultado;

  // Selecione a opção desejada:
  // 1 para usar funções
  // 2 para lógica otimizada
  int opcao = 1;

  if (opcao == 1) {
    resultado = verificarPalindromoComFuncoes(frase);
  } else if (opcao == 2) {
    resultado = verificarPalindromo


// Opção 1: Usando funções

// Função para remover espaços em branco
void removerEspacosEmBranco(char *frase) {
  int i, j;
  for (i = 0, j = 0; frase[i] != '\0'; i++) {
    if (frase[i] != ' ') {
      frase[j++] = frase[i];
    }
  }
  frase[j] = '\0';
}

// Função para reverter string
void reverterString(char *frase) {
  int i, j;
  for (i = 0, j = strlen(frase) - 1; i < j; i++, j--) {
    char temp = frase[i];
    frase[i] = frase[j];
    frase[j] = temp;
  }
}

int verificarPalindromoComFuncoes(char *frase) {
  // Remover espaços em branco
  removerEspacosEmBranco(frase);

  // Converter para minúsculo
  for (int i = 0; frase[i] != '\0'; i++) {
    frase[i] = tolower(frase[i]);
  }

  // Reverter string
  char fraseRevertida[strlen(frase) + 1];
  strcpy(fraseRevertida, frase);
  reverterString(fraseRevertida);

  // Comparar strings
  return strcmp(frase, fraseRevertida) == 0;
}

// Opção 2: Lógica otimizada

int verificarPalindromoOtimizado(char *frase) {
  // Converter para minúsculo
  for (int i = 0; frase[i] != '\0'; i++) {
    frase[i] = tolower(frase[i]);
  }

  int i = 0, j = strlen(frase) - 1;
  while (i < j) {
    if (frase[i] != frase[j]) {
      return 0;
    }
    i++;
    j--;
  }
  return 1;
}

int main() {
  char frase[100];

  printf("Digite uma frase: ");
  fgets(frase, sizeof(frase), stdin);

  // Remover a quebra de linha da entrada
  frase[strcspn(frase, "\n")] = '\0';

  // Verificar se a frase é um palíndromo
  int resultado;

  // Selecione a opção desejada:
  // 1 para usar funções
  // 2 para lógica otimizada
  int opcao = 1;

  if (opcao == 1) {
    resultado = verificarPalindromoComFuncoes(frase);
  } else if (opcao == 2) {
    resultado = verificarPalindromo
return
