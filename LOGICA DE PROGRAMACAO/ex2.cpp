#include<stdio.h>  // biblioteca
#include<math.h>  // biblioteca matemática

float c,v;

int main (){  // comando de entrada
 printf("venda:",v);
 scanf("%f",&v);
if(v<=10000)
c=v*10;
if (v<=15000)
c=v*0.15;
if ((v>10001)&&(v<14999))
c=v*0.12;
printf("comissao: %.2f\n",c);

return 0;  // feedback
}  // fim
