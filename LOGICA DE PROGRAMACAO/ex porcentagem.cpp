#include<stdio.h>  // biblioteca

float sal, nsal; // variavel com n real

int main (){  // comando de entrada

printf("Digite seu salario:\n");  // imprimir frase
scanf("%f",&sal);  // gravar dado na RAM

nsal= sal+(sal*0.25); // ou nsal=sal*1.25;

printf("\n Seu novo salario: %.2f\n",nsal);  // comando de saída

return 0;  // feedback
}  // fim
