#include<stdlib.h>
#include<stdio.h>
//Descrição
//Crie um sistema para controlar a quantidade de produtos em estoque.
//Estoque inicial
//100 unidades
//Menu
//===== ESTOQUE =====
//1 - Consultar Estoque
//2 - Entrada de Produtos
//3 - Saída de Produtos
//4 - Sair
//Regras
//• Entrada aumenta a quantidade.
//• Saída diminui a quantidade.
//• Não permitir retirada maior que o estoque disponível.

int main(){
	
int estoque = 100;
int entrada,escolha,total,compra,op;

do{

printf("\n--- estoque ---\n");
printf("---1 consultar  \n");
printf("--- 2-entrada de produtos --- \n");
printf("---3-saída de produtos--- \n");
printf("---4-sair ---\n");
scanf("%d",&op);

switch(op){
	case 1:
		printf("o  estoque de videogame  é:%d ",estoque);
		break;
    case 2:
    	printf("digite a sua entrada de videogame:");
    	scanf("%d",&entrada);
    	total = entrada + estoque;
    	printf("o novo estoque é: %d",total);
    	break;
    case 3:
	 printf("digite a sua compra por favor:");
	 scanf("%d",&compra);
	 total = estoque - compra;
	 if (total >= estoque){
	 	printf("você pode retirar %d",total);
	 }else{
	 	printf("ERRO!!!!!!!!!!\n");
	 }
	 break;
	case 4: 	
	printf("saindo do sistema!!");
	break;

}

}
while (op != 4 );

		
}