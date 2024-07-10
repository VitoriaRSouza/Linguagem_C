#include<stdio.h>  // biblioteca

int n; // variável

int main (){  // comando de entrada

printf("Digite o numero: \n");
scanf("%d",&n);

switch(n){
	case -10 ... 0:
		printf("\nO numero %d esta contido no intevalo entre -10 e 0\n", n);
	break;
	case 1 ... 11:
		printf("\nO numero %d esta contido no intevalo entre 1 e 11\n", n);
	break;
	case 12 ... 24:
		printf("\nO numero %d esta contido no intevalo entre 12 e 24\n", n);
	break;
	case 25:
		printf("\nO numero %d e igual a 25 \n", n);
	break;
	default:
		printf("\nValor invalido\n");
}

return 0;  // feedback
}  // fim
