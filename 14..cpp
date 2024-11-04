/*Solicitar dez números ao usuário, verificar e exibir o de maior valor.*/
#include<stdio.h>
int main()
{
	float n,maior,contador=1;
	do
	{
		printf("Digite o numero %.f ", contador); 
		scanf("%f", &n);
		if(n>maior)
		{
			maior=n;
		}
		contador++;
	}while(contador<=10);
	printf("Maior = %.2f", maior);
	
}
