/*Solicitar ao usu�rio n�meros, soma-los at� que seja digitado um numero negativo.
 O numero negativo n�o far� parte da conta.*/
 #include<stdio.h>
 int main()
 {
 	float n,soma=0;
 	printf(" ");
 	scanf("%f", &n);
 	do
	 {
	 	soma=n+soma;
	 	printf(" ");
	 	scanf("%f", &n);
	 }while(n>=0);
	 printf("soma = %.2f", soma);
 }
