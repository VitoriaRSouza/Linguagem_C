#include<stdio.h>  // biblioteca

int n, mult, res; // n = numero, mult = multiplicaçao, res = resultado

int main (){

printf("Digite qual tabuada voce deseja: ");
scanf("%d", &n);

if (2<n && n<1000 ){
for (mult=1; mult<=10; mult++){
res = n*mult;
printf ("\n %d*%d = %d \n", n, mult, res);
}
}
else {
	printf("Numero invalido");
}

return 0;  // feedback
}  // fim
