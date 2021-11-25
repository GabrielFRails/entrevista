#include <stdio.h>
#include <math.h>

int main() {
    int numero = 0, i = 0, j = 0, ordemNumero = 1, aux = 0;
    scanf("%d", &numero);
    aux = numero;
    for(i=10; ; i = i*10) {
        if (numero / i > 10) {
            ordemNumero++;
        } else {
            break;
        }
    }
    ordemNumero++;
    int controle = 0;
    int numbers[ordemNumero];

    for(i = 0; i < ordemNumero; i++) {
        numbers[i] = aux % 10;
        aux = aux / 10;
        if(aux == 0) {
            break;
        }
    }
    printf("\n");

    int soma = 0;
    for(j = 0; j < ordemNumero; j++) {
        soma += pow(numbers[j], ordemNumero);
    }

    if(soma == numero) {
        printf("o número %d é um número de Armstrong com ordem %d!", numero, ordemNumero);
    } else if (soma != numero) {
        printf("Esse número não é um número de Armstrong!"); 
    }

    printf("\n");

    return 0;
}