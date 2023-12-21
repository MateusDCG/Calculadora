#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	int menu;
	float result, n1, n2;
	
	do{
		printf("\n\n=-=-=-=-Calculadora=-=-=-=-\nRealize contas simples agora\n\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n\n[0 - SAIR]\n\nDigite sua opção:");	
		scanf("%d",&menu);
		
		switch(menu){
			case 0:
				break;	
				
			case 1:
				printf("\n    Somar...\n");
				printf("Digite um número:");
				scanf("%f",&n1);
				printf("Digite outro número:");
				scanf("%f",&n2);
				result = n1+n2;
	 			printf("______________________\n");
				printf("R: %.2f\n",result);	
				break;
				
			case 2:
				printf("\n    Subtrair...\n");	
				printf("Digite minuendo:");
				scanf("%f",&n1);
				printf("Digite subtraendo:");
				scanf("%f",&n2);
				result = n1-n2;
	 			printf("______________________\n");
				printf("R: %.2f\n",result);			
				break;
				
			case 3:
				printf("\n  Multiplicar...\n");
				printf("Digite um número:");
				scanf("%f",&n1);
				printf("Digite outro número:");
				scanf("%f",&n2);
				result = n1*n2;
	 			printf("______________________\n");
				printf("R: %.2f\n",result);
				break;
				
			case 4:
				printf("\n    Dividir...\n");
				printf("Digite dividendo:");
				scanf("%f",&n1);
				printf("Digite divisor:");
				scanf("%f",&n2);
				result = n1/n2;
	 			printf("______________________\n");
				printf("R: %.2f\n",result);
				break;	
				
			default:
				if(menu!=0){
					printf("**DIGITE UMA OPÇÃO VÁLIDA**");
				}
		};
	
	
	
	
	}while(menu!=0);
	
	return 0;
}




