/*Solicitar ao usuário um número e exibir a tabuada no formato escolar.*/
#include<stdio.h>
int main ()
{
	int n,multi,alga=0;
	printf("Digite um numero: ");
	scanf("%d", &n);
	do
	{
		multi=n*alga;
		printf("%d X %d = %d \n", n,alga,multi);
		alga++;
	}while(alga<=10);
	
}
