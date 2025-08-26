#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//programa cadastro completo

	int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char nome[50];
	int idade;
	float altura;
	
	
	printf ("Digite o seu nome:\n ");
	scanf ("%s", &nome);
	
	printf ("Digite a sua idade:\n ");
	scanf ("%d", &idade);
	
	printf ("Digite a sua altura:\n ");
	scanf ("%f", &altura);
		
	
	printf ("Cadastro realizado.\nNome: %s.\nIdade: %d\nAltura: %.2f ", nome, idade, altura);
	
	system ("pause");
		
	}
