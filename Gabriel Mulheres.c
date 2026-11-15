#include <stdio.h>
#include <string.h>

#define TAM_NOME 100

int main(void) {
    const char *nomes_alvo[] = {"bracao", "bracinho", "zmcastro"};
    const size_t total_alvos = sizeof(nomes_alvo) / sizeof(nomes_alvo[0]);

    int contador = 0;
    char nome[TAM_NOME];

    printf("Digite os nomes (ou digite 'sair' para encerrar):\n");

    while (1) {
        printf("Fale o nome da nega Dih: ");

        if (scanf("%99s", nome) != 1) {
            break; 
        }

        if (strcmp(nome, "sair") == 0) {
            break;
        }

        for (size_t i = 0; i < total_alvos; i++) {
            if (strcmp(nome, nomes_alvo[i]) == 0) {
                contador++;
                break; 
            }
        }
    }

    printf("O número de mulheres que nego Dih foi feito de otário foi: %d\n", contador);

    return 0;
}