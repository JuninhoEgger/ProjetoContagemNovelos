#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");

    int blusas;
    int novelos;
    int quantidadeDeNovelos;

    printf("QUANTAS BLUSAS A F�BRICA PRODUZ? ");
    scanf("%d", &blusas);
    printf("QUANTOS NOVELOS FORAM USADOS PARA FAZER ESSA QUANTIDADE DE BLUSAS? ");
    scanf("%d", &novelos);
    quantidadeDeNovelos = novelos/blusas;
    printf("A QUANTIDADE DE NOVELOS �: %d", quantidadeDeNovelos);
    return 0;
}
