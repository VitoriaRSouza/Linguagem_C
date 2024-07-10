#include<stdio.h>  // biblioteca

int qntd; // variável
float p;

int main (){  // comando de entrada

printf("Quantas macas foram compradas?\n");
scanf("%d",&qntd);

if(qntd>=12){
p=qntd*1.00;
printf("\nValor total da compra R$ %.2f\n",p);
} // fim if

else{  // se não
p=qntd*1.30;
printf("\nValor total da compra R$ %.2f\n",p);
} // fim else

return 0;  // feedback
}  // fim
