#include<stdio.h>  // biblioteca

int f, c; // variavel com n real

int main (){  // comando de entrada

printf("Qual a temperatura em Fahrenheit:\n");  // imprimir frase
scanf("%d",&f);  // gravar dado na RAM

c= ((f-32)*5)/9;

printf("\nA temperatura em Celcius e: %d\n",c);  // comando de saída

return 0;  // feedback
}  // fim
