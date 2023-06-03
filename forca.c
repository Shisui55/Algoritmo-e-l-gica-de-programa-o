#include<stdio.h>
#include<stdlib.h>

int main()
{
    // estrutura de dados
    char jogo[3][3];
    int l,c, linha, coluna,opcao;
    int jog, ganhou, jogadas;

    // Loop para iniciar o jogo
    do{
        jog = 1;
        jogadas = 0;
        ganhou = 0;
        
        // como inicialicializar
        for (l = 0; l < 3 ; l++)
        {
            for(c = 0; c < 3; c++)
            {
                jogo[l][c] = ' ';
            }
        }

        // Verifica se empatou
        do{
            // emprimi jogo
            printf("\n\t  0     1     2\n\n");
            for (l = 0; l < 3 ; l++)
            {
                for(c = 0; c < 3; c++)
                {
                    if(c == 0)
                    {
                        printf("\t");
                    }

                    //emprimi a barra
                    printf("  %c  ", jogo [l][c]);
                    if(c < 2)
                    {
                        printf("|");
                    }

                    //emprimi o indice da coluna
                    if(c == 2)
                    {
                        printf(" %d", l);
                    }

                }

                //emprimi a tabulação junto com a  linha
                if(l < 2)
                    {
                        printf("\n\t_________________\n");
                    }
                if(l == 2)
                    {
                        printf("\n");
                    }
                printf("\n");


            }

            // ler coordenadas
            //verifica se as coordenadas são validas
            do
            {
                printf("JOGADOR %d : Digite a linha e a coluna que deseja jogar: ", jog);
                scanf("%d %d",&linha, &coluna);
            } while (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 ||  jogo[linha][coluna] != ' ');
                
            // salvar coordenadas
            if(jog == 1)
            {
                jogo[linha][coluna] = 'O';
                jog++;
            }else
            {
                jogo[linha][coluna] = 'X';
                jog--;
            }
            jogadas ++;
        
            // ganhar por linha
            if(jogo[0][0]  == 'O' && jogo[0][1] == '0' && jogo[0][2] == 'O'
            || jogo[1][0]  == 'O' && jogo[1][1] == '0' && jogo[1][2] == 'O'
            || jogo[2][0]  == 'O' && jogo[2][1] == '0' && jogo[2][2] == 'O')
            {
                printf("\nParabens!! O jogador 1 venceu por linha\n");
                ganhou = 1;
            }

            if(jogo[0][0]  == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X'
            || jogo[1][0]  == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X'
            || jogo[2][0]  == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X')
            {
                printf("\nParabens!! O jogador 2 venceu por linha\n");
                ganhou = 1;
            }

            // ganhar por coluna
            if(jogo[0][0]  == 'O' && jogo[1][0] == 'O' && jogo[2][0] == 'O'
            || jogo[0][1]  == 'O' && jogo[1][1] == 'O' && jogo[2][1] == 'O'
            || jogo[0][2]  == 'O' && jogo[1][2] == 'O' && jogo[2][2] == 'O')
            {
                printf("\nParabens!! O jogador 1 venceu por coluna \n");
                ganhou = 1;
            }
            
            if(jogo[0][0]  == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X'
            || jogo[0][1]  == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X'
            || jogo[0][2]  == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X')
            {
                printf("\nParabens!! O jogador 2 venceu por coluna \n");
                ganhou = 1;
            }
            
            // ganhar por diagonal
            if(jogo[0][0]  == 'O' && jogo[1][1] == 'O' && jogo[2][2] == 'O'
            || jogo[2][0]  == 'O' && jogo[1][1] == 'O' && jogo[2][0] == 'O')
            {
                printf("\nParabens!! O jogador 1 venceu \n");
                ganhou = 1;
            }

            if(jogo[0][0]  == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X'
            || jogo[2][0]  == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X')
            {
                printf("\nParabens!! O jogador 2 venceu \n");
                ganhou = 1;
            }
        }while(ganhou == 0 && jogadas < 9);

        if(ganhou == 0)
        {
            printf("\nO jogo finalizou sem nenhum jogador\n");
        }

        // Verifica se o jogador  quer jogar novamente
        printf("\nDigite 1 para jogar novamente: \n");
        scanf("%d", &opcao);

    }while(opcao == 1);
    
    
    return 0;
}