/*Solicitar ao usuário dois números, correspondentes as extremidades de um intervalo,
e exibir na ordem (crescente ou decrescente) em que ele digitou.*/
#include<stdio.h>
int main ()
{
	int n,n1,volta=0;
	printf("Digite o primeiro numero: ");
	scanf("%d", &n);
	printf("Digite o segundo numero: ");
	scanf("%d", &n1);
	
	if (n<n1)
	{
		do
		{
			
			printf("%d ", n);
			n++;
		} while(n<=n1);
	} 
	else
	{
			do
		{
			
			printf("%d ", n);
			n--;
		} while(n1<=n);	
	}
}
