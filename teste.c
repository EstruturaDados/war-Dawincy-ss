// Pratica: Sistema de biblioteca 
// parte 01


#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para scrcspn()

// Constantes Globais:
#define MAX_LIVROS 50
#define TAM_STRING 100

// Definição da estrutura:

struct Livro{
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;  
};

// Função para limpar o buffer de entrada 

void limparBufferEntrada(){
    int c;
    while ((c = getchar()) !='\n' && c != EOF);  
}

// Função Principal (main):

int main(){
    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

    // Laço principal do menu
    do {

        // Exibe as opcoes do menu
        printf("==============================\n");
        printf("   BIBLIOTECA - PARTE 1\n");
        printf("==============================\n");
        printf("1 - Cadastra novo livro\n");
        printf("2 - Listar todos os livros\n");
        printf("0 - Sair\n");
        printf("--------------------------------\n");
        printf("Escolha uma opção:  ");

        // Lê a opção do usuario
        scanf("%i", &opcao);
        limparBufferEntrada(); // limpa o '\n' deixado pelo scanf

        // Processamento do opção:
        switch (opcao){
            case 1: //cadastro do livro
                printf("--- Cadastro de um novo Livro ---\n\n");

                if (totalLivros < MAX_LIVROS) { 
                    printf("Digite o nome do livro: ");
                    fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);
                    
                    printf("Digite o autor: ");
                    fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);

                    printf("Digite a Editora: ");
                    fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);

                    biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] = '\0';
                    biblioteca[totalLivros].autor[strcspn(biblioteca[totalLivros].autor, "\n")] = '\0';
                    biblioteca[totalLivros].editora[strcspn(biblioteca[totalLivros].editora, "\n")] = '\0';

                    printf("Digite a Edição: ");
                    scanf("%d", &biblioteca[totalLivros].edicao);
                    limparBufferEntrada();

                    totalLivros++;
                    //totalLivros = totalLivros +1; Mesma função da anterior

                    printf("\nLivro cadastrado com sucesso!\n");
                    
                } else{
                    printf("Biblioteca cheia! Não é possivel cadastra mais livros.\n");
                }

                printf("\nPressione ENTER para continuar...");
                getchar(); // Pausa para o usuario ler a mensagem antes de voltar ao menu.
                break;

                case 2: // Listagem de livros
                printf("--- Lista de livros cadastrados ---\n\n");


                if (totalLivros == 0) {
                    printf("Nenhum livro cadastrado ainda.\n");
                } else{
                    for (int i = 0; i < totalLivros; i++) {
                        printf("------------------------------------\n");
                        printf("LIVRO %d\n", i + 1);
                        printf("Nome: %s\n", biblioteca[i].nome);
                        printf("Autor: %s\n", biblioteca[i].autor);
                        printf("Editora: %s\n", biblioteca[i].editora);
                        printf("Edição: %d\n", biblioteca[i].edicao);
                        }
                        printf("------------------------------------\n");

                        // A pausa é importente para que o usuario veja a lista antes
                        // do proximo loop limpar a tela.

                        printf("\n Pressione ENTER para continuar...");
                        getchar();
                        break;

                        case 0: // Saída
                        printf("\nSaindo do sistema...\n");
                        break;

                        default: // Opção inválida
                        printf("\nOpção inválida! Tente Novamente.\n");
                        printf("\nPrecione ENTER para continuar...");
                        getchar();
                        break;
                }

            }





        }while (opcao != 0);

            return 0; //Fim do progama
            
        
        








    
    




    }