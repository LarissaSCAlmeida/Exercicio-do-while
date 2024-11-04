/*Solicitar ao usuário dois números (o da tabuada e do multiplicador)
 e exibir a tabuada no formato escolar.*/
 #include<stdio.h>
 int main()
 {
 	int algo,n,multi=0,volta=0;
 	printf("Digite o numero que voce quer a tabuada: ");
 	scanf("%d", &n);
 	printf("Digite ate que numero vai multiplicar: ");
 	scanf("%d", &algo);//Determina a parada 
 	do 
	 {
 		multi=n*volta;
 		printf("%d X %d = %d\n", n,volta,multi);
 		volta++;
	 }while(volta<=algo);
 	
 }
