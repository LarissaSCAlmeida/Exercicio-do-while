/*Solicitar ao usuário dez números e somar os números positivos.*/
#include<stdio.h>
int main()
{
	float n,contador=1,soma;
	do
	{
		printf("Digite o %.f ", contador);
		scanf("%f", &n);
		if(n>=0)
		{
			soma=n+soma;
		}
		contador++;
	}while(contador<=10);
	
	printf("Total = %.2f", soma);
}
