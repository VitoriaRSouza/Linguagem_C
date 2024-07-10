#include<stdio.h>  // biblioteca

int n; // variável

int main (){  // comando de entrada

printf("Digite o numero inteiro\n");
scanf("%d", &n);

// condição composta (2 possiveis respostas)
if(n>=5&&n<=100){
printf("\nO numero %d está dentro do intervalo\n",n);
} // fim if

else{  // se não
printf("\n O numero esta fora do intervalo\n",n);
} // fim else

return 0;  // feedback
}  // fim
