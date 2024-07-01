#include<stdio.h>  // biblioteca

float nota1, nota2, media; // variavel com n real
int main (){  // comando de entrada

printf("Digite sua primeira nota:\n");  // imprimir frase
scanf("%f",&nota1);  // gravar dado na RAM

printf("Digite sua segunda nota:\n");  // imprimir frase
scanf("%f",&nota2);  // gravar dado na RAM

media=(nota1+nota2) / 2;

printf("\n Sua media: %.2f\n",media);  // comando de saída

// condição composta (2 possiveis respostas)
if(media>=6){
printf("\n Aprovado :) \n");
} // fim if

else{  // se não
printf("\n Reprovado :( \n");
} // fim else

return 0;  // feedback
}  // fim
