#include<stdio.h>

int i, n;

int main(){
printf ("Digite um numero positivo:");
scanf("%d",&n);
 
if (n>0){
	for(i=n;i>=0;i--){
	printf("\n %d \n",i);
}
}
else
	printf("Valor invalido");
return 0;
}
