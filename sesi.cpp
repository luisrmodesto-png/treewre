#include <stdio.h>

int main() {
    float caixa = 500.00; 
    float valor;
    int opcao;

    do {
       
        printf("\n");
        printf("===== LOJA SESI =====\n");
        printf("1 - Consultar Caixa\n");
        printf("2 - Registrar Venda\n");
        printf("3 - Registrar Despesa\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

   
        switch (opcao) {
            case 1:
                printf("\nSaldo atual em caixa: R$ %.2f\n", caixa);
                break;

            case 2:
                printf("\nDigite o valor da venda: R$ ");
                scanf("%f", &valor);
                if (valor > 0) {
                    caixa += valor;
                    printf("Venda registrada com sucesso!\n");
                } else {
                    printf("Valor invalido!\n");
                }
                break;

            case 3:
                printf("\nDigite o valor da despesa: R$ ");
                scanf("%f", &valor);
                
            
                if (valor > 0) {
                    if (caixa - valor >= 0) {
                        caixa -= valor;
                        printf("Despesa registrada com sucesso!\n");
                    } else {
                        printf("Erro: Saldo insuficiente! O caixa nao pode ficar negativo.\n");
                    }
                } else {
                    printf("Valor invalido!\n");
                }
                break;

            case 4:
                printf("\nEncerrando o sistema. Ate logo!\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }

    } while (opcao != 4); 

    return 0;
}
