#include<stdio.h>
#include<math.h>
 
int main() {
float a, b, c, delta, x1, x2;
 	
printf("Digite o coeficiente a: ");
scanf("%f", &a);
printf("Digite o coeficiente b: ");
scanf("%f", &b);
printf("Digite o coeficiente c: ");
scanf("%f", &c);
 	
if (a!=0) {
	delta = (b*b)-(4*a*c);
	if (delta == 0) {
	x1 = (-b+sqrt(delta))/(2*a);
	printf("Delta igual a 0 \n");
	printf("x1 e x2=%.2f", x1);	
	}
	else if (delta > 0) {
	x1 = (-b+sqrt(delta))/(2*a);
	x2 = (-b-sqrt(delta))/(2*a);
	printf("Delta maior que 0 \n");
	printf("x1=%.2f \n", x1);
	printf("x2=%.2f \n", x2);
	}
	else {
	printf("Delta menor que 0, nao existe raiz real!\n");
	}
}
else
printf("\n Impossivel calcular, pois o coeficiente 'a' deve ser diferente de 0 \n");	
}
