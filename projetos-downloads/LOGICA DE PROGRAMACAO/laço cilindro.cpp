#include<stdio.h>

int i, n, id;
float alt, raio, vol, maior;

int main () {
printf("Quantos alunos tem na sala?\n");
scanf("%d", &n);

for (i=1; i<=n; i++){
printf("\nDigite o raio do cilindro\n");
scanf("%f", &raio);
printf("\nDigite a altura do cilindro\n");
scanf("%f", &alt);

vol=3.141592*raio*raio*alt;

printf("\nO volume do cilindro e: %.2f\n", vol);

if (vol>maior){
	maior = vol; // valor do maior volume
	id=i;  // aluno com o maior vol de cilindro
	}
}

printf("\nO maior volume do cilindro e %.2f e pertence ao aluno %d\n",maior, id);
return 0;
}
