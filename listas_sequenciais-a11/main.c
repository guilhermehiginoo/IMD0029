#include <stdio.h>
#include "alunos.h"

void exibir_menu() {
    printf("\nMenu de Operações:\n");
    printf("1. Cadastrar aluno\n");
    printf("2. Remover aluno\n");
    printf("3. Exibir lista de alunos\n");
    printf("4. Buscar aluno\n");
    printf("5. Reinicializar lista\n");
    printf("0. Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    Lista lista;
    inicializa_lista(&lista);

    int opcao;
    do {
        exibir_menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar_aluno(&lista);
                break;
            case 2:
                remover_aluno(&lista);
                break;
            case 3:
                exibir_alunos(&lista);
                break;
            case 4:
                buscar_aluno(&lista);
                break;
            case 5:
                reinicializa_lista(&lista);
                printf("Lista reinicializada com sucesso!\n");
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}