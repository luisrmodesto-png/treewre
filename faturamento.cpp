//Atividade 2 – Cantina Escolar
//Descrição
//Crie um sistema de vendas para uma cantina.
//Saldo inicial
//R$ 0,00
//Menu
//===== CANTINA =====
//1 - Vender Salgado (R$ 8)
//2 - Vender Refrigerante (R$ 6)
//3 - Consultar Faturamento
//4 - Sair
//Regras
//• Cada venda soma ao faturamento.
//• Exibir o total arrecadado.

#include<stdlib.h>
#include<stdio.h>

int main(){
	
	int op;
	float Saldo_Inicial = 0.00;
	do{
	printf("==== cantina ==== \n");
	printf( "---1 vender salgado --- \n");
	printf( "---2 vender refri --- \n");
	printf( "---3 consultar o Faturamento --- \n");
	printf( "---sair ---\n");
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("você vendeu um salgado!");
		Saldo_Inicial = Saldo_Inicial + 8.00;
		 printf("o novo saldo é:%f",Saldo_Inicial);
        break;
		 case 2:
			printf("você vendeu um refri!!");
		Saldo_Inicial = Saldo_Inicial + 6.00;
			 printf("o novo saldo é:%f",Saldo_Inicial);
		break;		
        case 3:
			printf("%f",Saldo_Inicial);		
         break;
		 case 4:
		 printf("obrigado por usar!");
		 break;	
	}			
	
	}
    while(op != 4);
}