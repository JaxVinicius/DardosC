#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int x, y;
    printf("Digite os valores x e y das coordenadas, considerando 0, 0 como o centro. ");
    scanf("%d %d", &x, &y);
    if (((x <= 1) && (x >= -1)) && ((y <= 1) && (y >= -1)))
        printf("Sua pontua��o foi de 10 pontos! Parab�ns. ");
    else
        if (((x <= 5) && (x >= -5)) && ((y <= 5) && (y >= -5)))
            printf("Sua pontua��o foi de 5 pontos, boa. ");
        else
            if (((x <= 10) && (x >= -10)) && ((y <= 10) && (y >= -10)))
                printf("Sua pontua��o foi de 1 ponto, mais sorte na pr�xima. ");
            else
                printf("Ent�o... que vergonha. 0 pontos.");
    return 0;
}
