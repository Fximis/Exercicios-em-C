#include <stdio.h>
#include <stdlib.h>

int main(){
	int cont, fatorial = 1, i;
	
	printf ("Digite um valor inteiro e nao negativo: ");
	scanf ("%d", &cont);
	
	if (cont < 0){
		printf ("O valor deve ser maior ou igual a zero!  \n");
	}  
	else{
		for(i=1; i <= cont; i++){
			fatorial = fatorial * i;
		}	
		printf("O fatorial de %d eh: %d \n", cont, fatorial);
	}
	system ("pause");
		
	}
