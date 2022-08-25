//FEITO POR MELQUE

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int sort, palp, achou, cont, max, min, op;

    printf("Deseja entrar no jogo? 0-(não) ou 1-(sim)"); scanf("%i", &op); fflush(stdin);

    while(op != 0){
        if(op == 1){

            achou = 0;
            min = 0;
            max = 101;
            srand(time(NULL));
            sort = 1 + (rand()%101);

            printf("Tentativa: 1\n");
            printf("Qual número que você acha que o pc sorteou: ");
            scanf("%i", &palp);
            cont = 1;
            printf("%i", sort);

            while(achou == 0 && cont < 11){
                if(palp < max && palp > min){
                    if(palp == sort){
                        printf("\nacertou");
                        achou = 1;
                    }
                    else{
                        if(sort > palp){
                            if(cont != 10){
                                min = palp;
                                printf("\nErrou, tente um número maior");
                                printf("\nTentativa: %i", cont + 1);
                                printf("\nQual número que você acha que o pc sorteou: ");
                                scanf("%i", &palp);
                                cont += 1;
                            }
                            else{
                                printf("Infelizmente você não conseguiu acertar o número!");
                                cont += 1;
                            }
                        }
                        else{
                            if(cont != 10){
                                max = palp;
                                printf("\nErrou, tente um número menor");
                                printf("\nTentativa: %i", cont + 1);
                                printf("\nQual número que você acha que o pc sorteou: ");
                                scanf("%i", &palp);
                                cont += 1;
                            }
                            else{
                                printf("Infelizmente você não conseguiu acertar o número %i!", sort);
                                cont += 1;
                            }
                        }
                    }
                }
                else{
                    //printf("Você foi desclassificado");
                    cont = 11;
                }
            }
            if(cont == 11){
                printf("Você foi desclassificado");
            }
            else{
                printf("\nVocê precisou de %i tentativas para acertar o número!", cont);
            }
        }
        if(op != 1){
            printf("Entrada Inválida, tente novamente: 0-(Não) ou 1-(Sim) "); scanf("%i", &op); fflush(stdin);
        }
        else{
            printf("\nDeseja Jogar novamente? 0-(Não) ou 1-(Sim) "); scanf("%i", &op); fflush(stdin);
        }
    }
    printf("Fim do programa!");

    return 0;
}
