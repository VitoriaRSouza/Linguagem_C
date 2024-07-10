#include<stdio.h>  // biblioteca
#include<math.h>  // biblioteca matemática

float n, pqua, pcubo, rqua, rcubo,r;

int main (){  // comando de entrada

printf("Digite um numero\n");
scanf("%f", &n);

pqua=pow (n,2); //calcula potencia do n ao quadrado
pcubo=pow (n,3); // calcula potencia do n ao cubo
rqua=sqrt (n); // calcula raiz quadrada
rcubo=cbrt (n); // calcula raiz cubica
r=pow(n,1.0/3.0); // calcula raiz cubica, n decimal

//comando de saída
printf("Resultado do numero %.2f elevado ao quadrado: %.2f\n",n,pqua);
printf("Resultado do numero %.2f elevado ao cubo: %.2f\n",n,pcubo);
printf("Resultado da raiz quadrada do numero %.2f: %.2f\n",n,rqua);
printf("Resultado da raiz cubica do numero %.2f: %.2f\n",n,rcubo);
printf("Resultado da raiz cubica do numero %.2f: %.2f\n",n,r);

return 0;  // feedback
}  // fim
