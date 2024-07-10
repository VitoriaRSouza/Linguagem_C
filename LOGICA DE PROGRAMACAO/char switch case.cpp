#include<stdio.h>  // biblioteca
#include <ctype.h>

char letra; // variável

int main (){  // comando de entrada

printf("Digite uma letra minuscula: \n");
scanf(" %c",&letra);
letra=tolower (letra);

if (isalpha(letra))

switch(letra){
	case 'a':
		case 'e':
			case 'i':
				case 'o':
					case 'u':
						printf("\nA letra %c e uma vogal\n", letra);
						break;
	default:
		printf("\n A letra %c e uma consoante\n", letra);
}

return 0;  // feedback
}  // fim
