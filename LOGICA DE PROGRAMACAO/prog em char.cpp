#include<stdio.h>

int idade; // guardar numero inteiro
float alt; //guardar numero decimal
char genero, nome[40], apelido[20]; // guardar caracteres, 40=quantidade de caracteres

int main(){
	
// comandos de entrada
printf("digite sua idade\n");
scanf("%d", &idade);

printf("digite sua altura\n");
scanf("%f", &alt);

printf("digite seu genero\n");
scanf(" %c", &genero); // %c = armazena 1 caractere

printf("digite seu nome\n");
scanf(" %[^\n]",&nome); // armazena 1 frase

printf("digite seu apelido\n");
scanf("%s", &apelido); // armazena 1 palavra

printf("\nNome: %s, apelido: %s, genero: %c, altura: %.2f, idade: %d\n",nome,apelido,genero,alt,idade);

return 0;
}
