#include <stdio.h>

int saldo, anos, meses, dias;

int main (){
	
printf("\nDigite a sua idade em dias\n");
scanf("%d", &saldo);

anos = saldo/365;
meses = (saldo%365)/30;
dias = (saldo%365)%30;

printf ("\nanos: %d \nmeses: %d \ndias: %d", anos, meses, dias);
	
return 0;
}
