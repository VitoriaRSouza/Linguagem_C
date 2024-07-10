#include<stdio.h>  // biblioteca

float n1,n2; // variável
char op;

int main (){  // comando de entrada

printf("Digite o numero 1\n");
scanf("%f",&n1);

printf ("\nDigite o operador(+,-,*,-):");
scanf(" %c",&op);

printf ("\nDigite o numero 2\n");
scanf("%f",&n2);

switch(op){
	case'+':
		printf("\nO resultado da soma e %.2f\n", n1+n2);
	break;
	case '-':
		printf("\nO resultado da subtracao e %.2f\n", n1-n2);
	break;
	case '*':
		printf("\nO resultado da multiplicacao e %.2f\n", n1*n2);
	break;
	case '/':
		if(n2!=0){
			printf("\nO resultado da divisao e %.2f\n", n1/n2);
			}
		else{
			printf("\nNao existe divisao por zero\n");
		}
	break;
	default:
		printf("\nError\n");
}

return 0;  // feedback
}  // fim
