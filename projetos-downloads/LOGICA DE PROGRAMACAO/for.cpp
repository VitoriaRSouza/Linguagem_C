#include<stdio.h>

int f;
float c;
 
int main(){
	
for(f=50;f<=65;f++){
	c=0.56*(f-32);
	printf("\n %d F = %.2f C\n",f,c);	
}
return 0;
}

