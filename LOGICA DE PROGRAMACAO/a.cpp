#include<stdio.h>  // biblioteca

int n; // vari�vel

int main (){  // comando de entrada

printf("Digite o numero inteiro\n");
scanf("%d",&n);

// condi��o composta (2 possiveis respostas)
if(n=n%2==0){  // %= resto da divis�o
printf("\n O numero %d e par\n",n);
} // fim if

else{  // se n�o
printf("\n O numero %d e impar\n",n);
} // fim else

return 0;  // feedback
}  // fim
