#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//programa para fazer m�dia de notas

	int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float nota1=0, nota2=0, notaTotal=0;
	
	printf ("Digite a primeira nota: \n");
	scanf ("%f", &nota1);
	
	printf ("Digite a segunda nota: \n");
	scanf ("%f", &nota2);	
	
	printf ("A m�dia entre as notas %.2f e %.2f � %.2f", nota1, nota2, (nota1+nota2)/2);
		
	}
