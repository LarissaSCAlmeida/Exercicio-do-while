/*Solicitar números ao usuário, somar os que estiverem entre 35 e 55. 
Digitar zero para finalizar a edição dos números e exibir o resultado.*/

#include<stdio.h>
int main ()
{
	float n, soma=0;
	do
	{
		
		printf(" ");
		scanf("%f", &n);
		if(n==0)
		{
			break;
		}
		if(n>=35 && n<=55)
		{
			soma=n+soma;
		}
		
	}while(1);
	printf("Total = %.2f", soma);
}
