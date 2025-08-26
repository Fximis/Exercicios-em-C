#include <stdio.h>
#include<stdlib.h>

int main (){
	int limite, contador, contadorTotal;
	
	printf ("digite ate qual numero quer somar: ");
	scanf ("%d", &limite);
	contadorTotal = 0;
	
	for (contador=2; contador <=limite; contador=contador+2){
		
		contadorTotal = contadorTotal + contador;
	//printf("contador %d \n", contador);
	//printf("soma %d \n", contadorTotal);
	}
	printf ("a soma dos numeros pares de 0 a %d = %d: ", limite, contadorTotal);	
	
}

