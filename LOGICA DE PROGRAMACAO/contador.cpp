#include<stdio.h>

int i, cont;
float alt;

int main () {

for (i=0; i<108; i++){
printf("\nDigite a sua altura\n");
scanf("%f", &alt);

if (alt>1.60){
	cont++;
	}
}

printf("\nPessoas maiores que 1.60: %d\n",cont);
return 0;
}
