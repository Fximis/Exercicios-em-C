#include <stdlib.h>
#include <stdio.h>

// do [...] while (condi��o verdadeora) -> entra pelo menos uma vez no la�o de repeti��o (fa�a - enquanto)

int main (){
	
	int senhaV = 1234, senha, contador=1;  
	
	do{
		printf ("Digite a senha para prosseguir, tentativa n. %d ", contador);
		scanf ("%d", &senha);
		contador ++;
		system ("cls"); //limpa a tela ap�s digitar errado 
		
		if (senha != senhaV){
			if (contador > 3){ // da pra tirar essa linha e colocar apenas "senha incorreta", acrescentando no while o (&& contador > 3 -> condi��o de parada)
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
