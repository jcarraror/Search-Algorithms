#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        //printf("\n[%d] ", k);

        for (j = 0; j < n - 1; j++) {
            //printf("%d, ", j);

            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}



int buscaBin(int vet[], int a, int b, int c)
{
    if (b >= a)
    {
        int meio = a + (b - a) / 2;

        // Caso o valor esteja no meio
        if (vet[meio] == c)
            return meio;

        // Caso o valor for menor que o elemento central
        if (vet[meio] > c)
            return buscaBin(vet, a, meio - 1, c);

        // Senão

        else
        return buscaBin(vet, meio + 1, b, c);
    }

    // Caso elemento não estiver no vetor
    return -1;
}

int main(void)
{
    int A[MAX], i;
    int n = sizeof(A) / sizeof(A[0]);
    int inf;
    //printf("Digite o numero a ser pesquisado:\n");
    scanf("%d", &inf);

    //printf("Digite 10 numeros para o vetor:\n");
    for (i = 0; i < MAX; i++)
    {
        //printf("%d:", i);
        scanf("%d", &A[i]);
    }

    bubble_sort (A,n);
    int result = buscaBin(A, 0, n - 1, inf);
    (result == -1) ? printf("-1")
                   : printf("O valor esta na posicao %d",
                            result);
    return 0;
}
