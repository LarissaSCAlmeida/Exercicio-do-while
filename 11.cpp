/*Solicitar ao usu�rio dez n�meros e contar quantos deles � par.*/
#include<stdio.h>
int main()
{
	int n,par,contador=1;
	do
	{
	printf("Digite o numero %d: ", contador);
	scanf("%d", &n);
	if(n%2==0)
	{
		par++;
	}
	contador++;
	
	} while (contador<=10);
	printf("Total de numeros pares digitado = %.d", par);
	
}
