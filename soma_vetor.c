#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int v[10], i, soma = 0;
    for(i = 0; i < 10; i++){
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &v[i]);
        soma += v[i];
    }
    printf("A soma dos n�meros do vertor �: %d", soma);
    /*for(i = 0; i < 10; i++){
        printf("%d \n", vet[i]);
    }*/
	return 0;
}
