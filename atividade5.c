#include <stdio.h>

int main() {
    char reverseText[10];
    char newText[10];
    int tamanho = 0;

    printf("Digite uma palavra (até 9 caracteres): ");
    scanf("%9[^\n]", reverseText);

    // Calculando o tamanho da string
    while (reverseText[tamanho] != '\0' && tamanho < 9) {
        tamanho++;
    }

    // Invertendo a string
    for (int i = 0; i < tamanho; i++) {
        newText[i] = reverseText[tamanho - 1 - i];
    }
    newText[tamanho] = '\0';  // Adicionando o caractere nulo ao final da string invertida

    printf("Palavra digitada: %s\n", reverseText);
    printf("Palavra invertida: %s\n", newText);

    return 0;
}
