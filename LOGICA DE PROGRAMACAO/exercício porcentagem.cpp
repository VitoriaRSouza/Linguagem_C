#include<stdio.h>  // biblioteca

float cf, pf; // cf = custo de fabricação, pf = preço final

int main (){  // comando de entrada

printf("Digite o custo de fábrica do veiculo:\n");  // imprimir frase
scanf("%f",&cf);  // gravar dado na RAM

pf= cf+(cf*0.28)+(cf*0.45); //

printf("\n Custo final do veiculo: %.3f\n",pf);  // comando de saída

return 0;  // feedback
}  // fim
