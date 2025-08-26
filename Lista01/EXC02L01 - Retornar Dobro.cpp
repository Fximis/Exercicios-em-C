#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//programa para solicitar um valor e retornar o dobro

	int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int valor;
	
	printf ("Digite um valor: \n");
	scanf ("%d", &valor);	
	
	printf ("O dobro de %d é %d", valor, valor*2);
		
	}
