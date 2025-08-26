#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char nome[20];
	
	printf ("Digite o seu nome: \n");
	scanf ("%s", &nome);	
	
	printf ("Olá, %s", nome);
		
	}
