/*Solicitar ao usu�rio a quantidade de vezes que ser� exibida na tela a palavra
 �teste�.*/
 #include<stdio.h>
 int main()
 {
 	int vezes=1,teste;
 	printf("Digite a quantidade de vezes que teste ira aparecer teste? ");
 	scanf("%d", &teste);
 	do{
 		printf("teste ");
 		vezes++;
	 }while(vezes<=teste);
 	
 }
