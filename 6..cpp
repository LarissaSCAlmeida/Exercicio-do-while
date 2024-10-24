/*Solicitar ao usuário dois números e exibir na tela os números do intervalo, 
excluindo os números digitados.*/
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
			n1++;	
		do{
				printf("%d ", n1);
			
			n1++;	
		}while(n1<n2);
	} 
	
	else if(n2<n1)
		
	{
	 n2++;
		do{
			printf("%d ", n2);
			n2++;
		}while(n2<n1);
	} 
	else 
	{
		printf("Numeros iguais!!");
	}

}
