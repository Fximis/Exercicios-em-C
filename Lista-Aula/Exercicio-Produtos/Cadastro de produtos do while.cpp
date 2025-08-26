#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");	
	
	char nomeProduto [50], continuar = 'n';
	float valorProduto, media, valorTotal;
	int contador =1;
	
	do{
		printf ("Qual o nome do produto %d:", contador);
		scanf ("%s", &nomeProduto);
		
		printf ("Qual o valor do produto:");
		scanf ("%f", &valorProduto);
		
		printf ("Deseja continuar?");
		scanf ("%s", &continuar);
			
		valorTotal = valorTotal + valorProduto;
		media = valorTotal / contador;
		
		contador ++;
		
	}while (continuar == 's');
	
	printf (" O valor total dos produtos foi de R$ %f \n O total de produtos cadastrados foi de %d\n A média foi de %f", valorTotal, contador-1, media);
	
}
