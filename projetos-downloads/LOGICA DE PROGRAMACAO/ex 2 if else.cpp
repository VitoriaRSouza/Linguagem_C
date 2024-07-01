#include<stdio.h>  // biblioteca

float v,d,nv; // variável

int main (){  // comando de entrada

printf("Qual o valor que voce deseja gastar?\n");
scanf("%f", &v);

// condição composta (2 possiveis respostas)
if(v>0){
if(v<=100){
	d=v*0.05;
	nv=v*0.95;
printf("\n O desconto sera de %.2f e o novo valor sera %.2f \n",d,nv);
} // fim if

else{  // se não
d=v*0.10;
nv=v*0.90;
printf("\n O desconto sera de %.2f e o novo valor sera %.2f \n",d,nv);
} // fim else
}

else{
	printf("\nEntrada invalida\n");
}

return 0;  // feedback
}  // fim
