#include <stdio.h>

/*Define o tamanho da matriz*/
#define LINHA 10
#define COLUNA 10

/*Variaveis universais para utilização em qualquer função*/
/*Contabiliza a quantidade de loops para realizar a quebra de linha */
int coluna_cont;

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

        printf("%d ->>", number[0][coluna_cont]);

    }

}

/*Função que traz o mar representado por 0 barco representado por 3*/
void mar(){

    /*Variavel que traz todos os números representa o mar*/
    int mares[LINHA][COLUNA];

    /*Loopa ninhado responsável varrer linhas "Linha" "i"*/
    for (size_t i = 0; i < LINHA; i++)
    {
        vertical_tabuleiro();//Chama a função para impressão do cabeçalho lateral numeros
    
        /*Loopa ninhado responsável varrer linhas "Linha" "i"*/
        for (size_t j = 0; j < COLUNA; j++)
        {       
                /*Simbolo da Cruz*/
            if ((j == 1 && i >= 0 && i < 5) || 
                (i == 2 && j >= 0 && j < 3) || 
                /*Simbolo Piramide*/
                (j == 4 && i == 6)          ||
                (j >= 3 && j <= 5 && i == 7)|| 
                (j >= 2 && j <= 6 && i == 8)|| 
                (j >= 1 && j <= 7 && i == 9)||
                /*Sombolo Losango*/
                (j == 7 && i == 0)          ||
                (j >= 6 && j <= 8 && i == 1)||
                (j >= 5 && j <= 9 && i == 2)||
                (j >= 6 && j <= 8 && i == 3)||
                (j == 7 && i == 4))
            {
                printf("\t-");
            }
            else
            {
                printf("\t0");
            }
                
        }
        coluna_cont++;//incrementa o valor para avançar nas posições das linhas
        printf("\n\n");
    }
    
}

int main(){

    horizontal_tabuleiro();//Chama a função que tráz o cabeçalho superior letras.
    mar();
    
    printf("\n");

    return 0;
}