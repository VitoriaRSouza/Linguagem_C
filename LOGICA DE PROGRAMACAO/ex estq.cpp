#include<stdio.h>  // biblioteca

int qatual, qmax, qmin; // variável
float qmed;

int main (){  // comando de entrada

printf("\nQual a quantidade atual de produtos no estoque?\n");
scanf("%d",&qatual);
printf("\nQual a quantidade maxima de produtos no seu estoque?\n");
scanf("%d",&qmax);
printf("\nQual a quantidade minima de produtos no seu estoque?\n");
scanf("%d",&qmin);

qmed=(qmax+qmin)/2;

if(qatual>=qmed){
printf("\nNao efetuar compra\n");
} // fim if

else{  // se não
printf("\nEfetuar compra!\n");
} // fim else

return 0;  // feedback
}  // fim
