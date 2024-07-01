#include<stdio.h>  // biblioteca

float sal, nsal, reaj, per; // variável

int main (){  // comando de entrada

printf("Qual o valor do seu salario?\n");
scanf("%f", &sal);

if (sal>0 && sal<=400.00){
reaj = sal*0.15;
nsal = sal*1.15;
printf("\n O reajuste foi de 15 por cento \n O valor de reajuste ganho foi de R$ %.2f \n E o novo salario: R$ %.2f", reaj, nsal);
}
	else if (sal>400.00 && sal<=800.00){
	reaj = sal*0.12;
	nsal = sal*1.12;
	printf("\n O reajuste foi de 12 por cento \n O valor de reajuste ganho foi de R$ %.2f \n E o novo salario: R$ %.2f", reaj, nsal);
	}
		else if (sal>800.00 && sal<=1200.00){
		reaj = sal*0.10;
		nsal = sal*1.10;
		printf("\n O reajuste foi de 10 por cento \n O valor de reajuste ganho foi de R$ %.2f \n E o novo salario: R$ %.2f", reaj, nsal);
		}
			else if (sal>1200.00 && sal<=2000.00){
			reaj = sal*0.07;
			nsal = sal*1.07;
			printf("\n O reajuste foi de 7 por cento \n O valor de reajuste ganho foi de R$ %.2f \n E o novo salario: R$ %.2f", reaj, nsal);
			}
				else if (sal>2000.00){
				reaj = sal*0.04;
				nsal = sal*1.04;
				printf("\n O reajuste foi de 4 por cento \n O valor de reajuste ganho foi de R$ %.2f \n E o novo salario: R$ %.2f", reaj, nsal);
				}
	else{
	printf("Valor invalido");
	} // fim if

return 0;  // feedback
}  // fim
