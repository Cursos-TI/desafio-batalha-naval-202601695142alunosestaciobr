#include <stdio.h>

/*Variaveis universais para utilização em qualquer função*/
/*Contabiliza a quantidade de loops para realizar a quebra de linha */
int linha, coluna;

/*Função que retorna as letras d o tabuleiro*/
void horizontal_tabuleiro(){

    /*Declaração da Variavel letra para receber os valores definidos do tabuleiro*/
    char letras[1][10] = {
        {'A','B','C','D','E','F','G','H','I','J'}
    };

    /*Loop que acionado apenas uma vez faz varedura todas colunas preservando linhas*/
    for (size_t i = 0; i < 10; i++)
    {
        printf("\t%c", letras[0][i]);
    }

    printf("\n\n");

}

/*Função que indica a numeração do tabuleiro*/
void vertical_tabuleiro(){

    /*Variavel que traz os valores numericos das linhas*/
    int number[1][10] = {
        {1,2,3,4,5,6,7,8,9,10}
    };

    /*Loop responsável varredura das linhas impressão em tela*/
    for (size_t i = 0; i < 1; i++){

        printf("%d ->>", number[0][coluna]);

    }

}

/*Função que traz o mar representado por 0 barco representado por 3*/
void mar(){

    /*Variavel que traz todos os números representa o mar*/
    int mares[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,3,3,3,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,3,0,0,0,0},
        {0,0,0,0,0,3,0,0,0,0},
        {0,0,0,0,0,3,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}        
    };

    /*Loopa ninhado responsável varrer linhas "Linha" Colunas "i"*/
    for (size_t index = 0; index < 1; index++)
    {
        for (size_t i = 0; i < 10; i++)
    {
        printf("\t%d", mares[linha][i]);
    }
        printf("\n\n");
    }
    
}

int main(){

    coluna = 0;
    linha = 0;

    horizontal_tabuleiro();//Chama a função que tráz o cabeçalho.

    /*Loop que intercala as funções acionando para representação no terminal*/
    for (size_t i = 0; i < 10; i++)
    {
        vertical_tabuleiro();
        mar();
        
        /*incrementa o valor na variavel para pular entre linhas e colunas.*/
        coluna++;
        linha++;
    }
    
    printf("\n");

    return 0;
}