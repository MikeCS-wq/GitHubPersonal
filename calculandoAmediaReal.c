#include <stdio.h>

    int main(){
       
        int opcao;
        float nota1, nota2, nota3, media;

        printf("Menu de Gerenciamento de Estudantes\n");
        printf("1. Calcular a média\n");
        printf("2. Determinar Status\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");

        switch (opcao)
        {
        case 1:
            printf("Calcular a média\n");
            printf("Digite sua primeira nota:\n");
            scanf("%f", &nota1);
            printf("Digite sua segunda nota:\n");
            scanf("%f", &nota2);

            if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) ){
                
            }else {
                printf("Entrada com valores fora dos padrões aceitaveis\n");
            }
            break;
        case 2: 
            printf("Determinar Status\n");
            break;
        case 3:
        printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
        }
    }
