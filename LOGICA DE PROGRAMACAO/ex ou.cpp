#include<stdio.h>  // biblioteca

int idade, tempo; // variável

int main (){  // comando de entrada

printf("Digite a sua idade\n");
scanf("%d", &idade);

printf("Digite o seu tempo de trabalho\n");
scanf("%d", &tempo);

// condição composta (2 possiveis respostas)
if(idade>=65||tempo>=30||(idade>=60&&tempo>=25)){
printf("\nRequer aposentadoria\n");
} // fim if

else{  // se não
printf("\nNao requer aposentadoria\n");
} // fim else

return 0;  // feedback
}  // fim
