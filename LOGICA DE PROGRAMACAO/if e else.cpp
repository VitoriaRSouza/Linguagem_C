#include<stdio.h>  // biblioteca

int n; // vari�vel

int main (){  // comando de entrada

printf("Digite o numero\n");
scanf("%d", &n);

// condi��o composta (2 possiveis respostas)
if(n>=0){
printf("\n O numero %d e positivo \n",n);
} // fim if

else{  // se n�o
printf("\n O numero %d e negativo \n",n);
} // fim else

return 0;  // feedback
}  // fim
