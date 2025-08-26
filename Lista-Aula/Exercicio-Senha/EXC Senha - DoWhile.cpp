#include <stdlib.h>
#include <stdio.h>

// do [...] while (condição verdadeora) -> entra pelo menos uma vez no laço de repetição (faça - enquanto)

int main (){
	
	int senhaV = 1234, senha, contador=1;  
	
	do{
		printf ("Digite a senha para prosseguir, tentativa n. %d ", contador);
		scanf ("%d", &senha);
		contador ++;
		system ("cls"); //limpa a tela após digitar errado 
		
		if (senha != senhaV){
			if (contador > 3){ // da pra tirar essa linha e colocar apenas "senha incorreta", acrescentando no while o (&& contador > 3 -> condição de parada)
				break;
			}
			else
			printf ("Senha incorreta, tente novamente \n");
		}
	}while (senha != senhaV);
	system ("cls");
	
	if (contador > 3 && senha != senhaV){
		printf ("Acesso negado por tentativas esgotadas \n");
	}
	else printf ("Acesso liberado \n");
	system ("pause");
	return 0;

}
