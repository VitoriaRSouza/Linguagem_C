#include<stdio.h>  // biblioteca

int n; // variável

int main (){  // comando de entrada

printf("Digite o numero\n");
scanf("%d", &n);

// condição composta (2 possiveis respostas)
if(n>=0){
printf("\n O numero %d e positivo \n",n);
} // fim if

else{  // se não
printf("\n O numero %d e negativo \n",n);
} // fim else

return 0;  // feedback
}  // fim
