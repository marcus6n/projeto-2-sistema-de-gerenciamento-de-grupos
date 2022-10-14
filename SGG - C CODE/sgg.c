#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;
    int contPers;
    char cod;
    char nome1[50];
    char nome2[50];
    char nome3[50];
    char nome4[50];
    char nome5[50];
    cod = 'C';

    printf("+==================================================================+\n");
    printf("+                                                                   \n");
    printf("+   SEJA BEM VINDO(A) AO NOSSO SISTEMA DE GERENCIAMENTO DE GRUPOS   \n");
    printf("+                                                                   \n");
    printf("+==================================================================+\n\n");

    printf("| Digite a quantidade de grupos desejados: ");
    scanf("%d", &cont);

    while (cont != 'F'){

        printf("\n");
        printf("| Digite o nome do aluno(a): ");
        scanf("%s", &nome1);
        printf("| Digite o nome do aluno(a): ");
        scanf("%s", &nome2);
        printf("| Digite o nome do aluno(a): ");
        scanf("%s", &nome3);
        printf("| Digite o nome do aluno(a): ");
        scanf("%s", &nome4);
        printf("| Digite o nome do aluno(a): ");
        scanf("%s", &nome5);
        
        printf("\n");
        printf("+==============================+\n");
        printf("|          INTEGRANTES          \n");
        printf("+==============================+\n");
        printf("| Aluno(a): %s                  \n", nome1);
        printf("| Aluno(a): %s                  \n", nome2);
        printf("| Aluno(a): %s                  \n", nome3);
        printf("| Aluno(a): %s                  \n", nome4);
        printf("| Aluno(a): %s                  \n", nome5);
        printf("+==============================+\n");

        printf("Adicionar proximo grupo! Aperte ENTER\n\nPara finalizar o programa aperte SHIFT F\n\n\n");
        cont = getche();
    }

    return 0;
    
}