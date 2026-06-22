#include <stdio.h>
#include <stdlib.h>

int main() {
    float combustivel = 0.0;
    float capacidade_maxima = 50.0;
    float litros_abastecer, km_viagem, litros_necessarios;
    int opcao;

    do {
        printf("\n====== MENU CARRO ======\n");
        printf("1 - Ver Combustivel\n");
        printf("2 - Abastecer\n");
        printf("3 - Viajar\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\nCombustivel atual: %.2f litros\n", combustivel);
                break;

            case 2:
                printf("\nDigite quantos litros deseja abastecer: ");
                scanf("%f", &litros_abastecer);

                if (litros_abastecer <= 0) {
                    printf("Quantidade invalida!\n");
                } else if (combustivel + litros_abastecer > capacidade_maxima) {
                    printf("Erro: Capacidade maxima de 50 litros seria ultrapassada!\n");
                } else {
                    combustivel += litros_abastecer;
                    printf("Abastecimento realizado com sucesso! Total: %.2f litros\n", combustivel);
                }
                break;

            case 3:
                printf("\nDigite a distancia da viagem (em km): ");
                scanf("%f", &km_viagem);

                if (km_viagem <= 0) {
                    printf("Distancia invalida!\n");
                } else {
                    
                    litros_necessarios = km_viagem / 10.0; 

                    if (litros_necessarios > combustivel) {
                        printf("Combustivel insuficiente para esta viagem!\n");
                        printf("Voce precisa de %.2f litros, mas tem apenas %.2f litros.\n", litros_necessarios, combustivel);
                    } else {
                        combustivel -= litros_necessarios;
                        printf("Viagem realizada com sucesso!\n");
                        printf("Combustivel restante: %.2f litros\n", combustivel);
                    }
                }
                break;

            case 4:
                printf("\nSaindo do programa...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
