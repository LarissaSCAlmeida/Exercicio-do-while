/*Solicitar ao usu�rio dois n�meros 
e exibir na tela os n�meros do intervalo, incluindo os n�meros digitados.*/
#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite um numero: ");
	scanf("%d", &n2);
	if(n1<n2)
	{
		do{
			printf("%d ", n1);
			n1++;
		}while(n1<n2);
	} 
	else if(n1>n2)
	{
		do{
			printf("%d ", n2);
			n2++;
		}while(n1>n2);
	} 
	else 
	{
		printf("Os numeros sao iguais!!");
	}
}
