#include<stdio.h>  // biblioteca

float p,pe,multa; // variável

int main (){  // comando de entrada

printf("Qual o peso de peixes?\n");
scanf("%f", &p);

// condição composta (2 possiveis respostas)
if(p>50){
	pe=p-50;
	multa=4.00*pe;
printf("\n Peso excedente: %.2f Kg\n",pe);
printf("\n Valor da multa: R$%.2f \n",multa);
} // fim if

return 0;  // feedback
}  // fim
