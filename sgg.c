#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int nav = 0;
    char cad = "";

    printf("                  +===========================================================+\n");
    printf("                  |                                                           |\n");
    printf("                  |          SGG - SISTEMA DE GERENCIAMENTO DE GRUPOS         |\n");
    printf("                  |                                                           |\n");
    printf("                  |                 || SEJA BEM VINDO(A) ||                   |\n");
    printf("                  |                                                           |\n");
    printf("                  |===========================================================|\n");
    printf("                  |                                                           |\n");
    printf("                  | 1 - Sou Professor                                         |\n");
    printf("                  |                                                           |\n");
    printf("                  | 2 - Sou Aluno                                             |\n");
    printf("                  |                                                           |\n");
    printf("                  +===========================================================+\n\n");


    printf("Selecione uma opcao: ");
    scanf("%d", &nav);
    fflush(stdin);

    if ( nav == 1 )
    {
        printf("\n\nOla Professor\n\n");
        
        printf("Possui Cadastro? S/N : ");
        scanf("%s", &cad);
        fflush(stdin);

        if (cad == 'S')
        {
            char email1[50];
            char senha1[50];
            int nav2 = 0;

            printf("\n---------------------------------------");

            printf("\n\n         Efetue o Login          \n\n");

            printf("E-mail: ");
            scanf("%s", email1);
            fflush(stdin);

            printf("Senha: ");
            scanf("%s", senha1);
            fflush(stdin);

            printf("LOGADO COM SUCESSO!\n\n");

            printf("\n---------------------------------------\n\n\n");

            printf("            1 - Criar nova sala                \n");
            printf("        2 - Gerenciar sala existente           \n\n");

            printf("Digite a opcao desejada: ");
            scanf("%d", &nav2);

            if (nav2 == 1)
            {
                char nomeProjeto[100];
                char nomeProfessor[100];
                int qntdAlunos = 0;
                int qntdGrupos = 0;


                printf("\nInsira o nome do Projeto: ");
                scanf("%s", &nomeProjeto);
                fflush(stdin);

                printf("\nProfessor Responsavel: ");
                scanf("%s", &nomeProfessor);
                fflush(stdin);

                printf("\nGrupos necessarios: ");
                scanf("%d", &qntdGrupos);
                fflush(stdin);

                printf("\nAlunos totais da turma: ");
                scanf("%d", &qntdAlunos);
                fflush(stdin);

                int divisaoDeAlunosPorGrupo;

                divisaoDeAlunosPorGrupo = qntdAlunos/qntdGrupos;

                srand(time(0));

                int codSala = rand() % 998 + 1;

                printf("Projeto: %s\n\n", nomeProjeto);
                printf("Professor(a): %s\n\n", nomeProfessor);
                printf("Grupos: %d\n\n", qntdGrupos);
                printf("Codigo da Sala: %d\n\n", codSala);

                printf("Serao %d grupos com %d alunos em cada um!\n\n\n", qntdGrupos, divisaoDeAlunosPorGrupo);
            }
            
        }
        else if (cad == 'N')
        {
            char nome1[50];
            char email1[50];
            char cpf[50];
            char instituicao[50];
            char senha1[50];

            printf("\n---------------------------------------");

            printf("\n\n         Efetue o Cadastro          \n\n");

            printf("Nome: ");
            scanf("%s", &nome1);
            fflush(stdin);

            printf("E-mail: ");
            scanf("%s", &email1);
            fflush(stdin);
            
            printf("Digite seu CPF: ");
            scanf("%s", &cpf);
            fflush(stdin);
            
            printf("Digite sua Instituição: ");
            scanf("%s", &instituicao);
            fflush(stdin);

            printf("Senha: ");
            scanf("%s", &senha1);
            fflush(stdin);

            printf("Confirmar Senha: ");
            scanf("%s", &senha1);
            fflush(stdin);

            printf("\n\n      CADASTRADO COM SUCESSO!           ");

            printf("\n---------------------------------------\n\n");
        }
    }
    else if (nav == 2)
    {
        printf("\n\n\nOla Aluno!\n\n\n");

        printf("Possui Cadastro? S/N : ");
        scanf("%s", &cad);

        if (cad == 'S')
        {
            char email2[50];
            char senha2[50];

            int codProjeto = 0;

            printf("\n---------------------------------------");

            printf("\n\n         Efetue o Login          \n\n");

            printf("E-mail: ");
            scanf("%s", &email2);
            fflush(stdin);

            printf("Senha: ");
            scanf("%s", &senha2);
            fflush(stdin);

            printf("---------------------------------------\n\n");

            printf("Digite o codigo do projeto que deseja participar: ");
            scanf("%d", &codProjeto);

            printf("\n\nAcao Realizada com sucesso!\n\n");
            printf("Aguarde as instrucoes de seu professor ou gestor!\n\n");

        }
        else if (cad == 'N')
        {
            char nome2[50];
            char email2[50];
            char senha2[50];
            char instituicao2[50];
            int matricula[50];

            printf("\n---------------------------------------");

            printf("\n\n         Efetue o Cadastro          \n\n");

            printf("Nome: ");
            scanf("%s", &nome2);
            fflush(stdin);

            printf("E-mail: ");
            scanf("%s", &email2);
            fflush(stdin);
            
            printf("Matricula: ");
            scanf("%s", &email2);
            fflush(stdin);

            printf("Instituição: ");
            scanf("%s", &instituicao2);
            fflush(stdin);

            printf("Senha: ");
            scanf("%s", &senha2);
            fflush(stdin);

            printf("Confirmar Senha: ");
            scanf("%s", &senha2);
            

            printf("\n---------------------------------------\n\n");

        }
        
    }

    system("pause");

    return 0;

}