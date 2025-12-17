#include <stdio.h>  // Bibliotecas 
#include <string.h>

    struct territorio{
        char nome[30];
        char cor[10];
        int tropas;

    };
    
    int main(){
        // Declaração de vetor 

        struct territorio territorios[5];  // A declaração do vetor limita a quantidade de territorios cadastraveis a 5
        
        printf("====================================================================\n");
        printf("----- Vamos cadastrar os 5 territorios iniciais do nosso mundo -----\n");

        //loop para o cadastro dos territorios
        for (int i = 0; i < 5; i++){

            printf("--- cadastrar territorio %d ---\n", i + 1);// Cadastro do nome do territorio
            printf("Nome do territorio: \n");
            fgets(territorios[i].nome, 30, stdin);

            printf("Cor do Exercito: \n"); // Cadastro da cor do exercito
            fgets(territorios[i].cor, 10, stdin);

            printf("Número de tropas: \n"); // Cadastro do numero de tropas
            scanf("%d", &territorios[i].tropas);
            getchar(); //Limpa o buffer de entrada apos o scanf

        }

        // Exibição dos territorios cadastrados
        printf("======================\n");
        printf("----- Mapa Mundo -----\n");
        printf("======================\n");
        for (int i = 0; i < 5; i++){
            printf("TERRITORIO %d:\n", i + 1);
            printf(" -Nome: %s", territorios[i].nome);
            printf(" -Dominado por: exercito %s", territorios[i].cor);
            printf(" -Tropas: %d\n\n", territorios[i].tropas);
            printf("======================\n");

        }

        return 0;




    }