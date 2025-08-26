#include <stdio.h>
#include<stdlib.h>

int main (){
	int alunos, contador;
	float nota, notaTotal, media;
	
	printf ("digite a quantidade de alunos: ");
	scanf ("%d", &alunos);
	
	for (contador=1; contador <=alunos; contador++){
		printf ("digite a nota do aluno: ");
		scanf ("%f", &nota);
		
		notaTotal = notaTotal + nota;
	}
	
	media = notaTotal / alunos;
	
	printf ("A media da turma de %d alunos foi de %.2f", alunos, media);
}

