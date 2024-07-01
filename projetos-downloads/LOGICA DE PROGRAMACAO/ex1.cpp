#include<stdio.h>  // biblioteca
#include<math.h>  // biblioteca matemática

float n;

int main (){  // comando de entrada

printf("Digite um numero\n");
scanf("%f", &n);

if (n>0)
	printf("\nA raiz do n e %.2f\n", sqrt (n));
else
printf("\nO numero elevado e %.2f\n", pow(n,4));

return 0;  // feedback
}  // fim
