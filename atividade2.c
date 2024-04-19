//Esse link levara para minha página no Replit com mais códigos
//https://replit.com/@JanioWarlem

#include <stdio.h>
#define TRUE 0
#define FALSE 1

int fib(int n) {
    int penultimo = 0, ultimo = 1, aux;

    if (n == 1 || n == 2) {
        return TRUE;
    }

    for (int i = 3;; i++) {
        aux = penultimo + ultimo;
        printf(" %d ", aux);
        if(n == aux){
            return TRUE;
        }else if(aux > n){
            return FALSE;
        }
        penultimo = ultimo;
        ultimo = aux;
    }

}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%i", &num);

    if(fib(num) == TRUE){
        printf("\nO número digitado exite na saquencia");
    }else{
        printf("\nO número digitado NÃO exitena saquencia");
    }

    return 0;
}
