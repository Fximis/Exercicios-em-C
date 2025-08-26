#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//programa de sistema de credenciamento

	int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char nome[50], empresa[20];

	printf ("Digite o seu nome:\n ");
	scanf ("%s", &nome);
	
	printf ("Digite a sua empresa:\n ");
	scanf ("%s", &empresa);
	
	system("cls");
		
	
	printf ("Cadastro realizado\n\n");
	printf ("Crachá gerado:\n\nNome: %s\nEmpresa: %s\n", nome, empresa);
	
	
	system ("pause");
		
	}
