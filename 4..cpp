/*Solicitar ao usu�rio at� qual numero ser� exibido na tela (iniciar a partir do 1).
se eu quisesser decresente era colocar n-- e o n no printf*/
#include<stdio.h>
int main()
{
	int vezes=1,n;
	printf("Ate qual numero sera exibido: ");
	scanf("%d", &n);
	do{
		printf("%d ",vezes);
		vezes++;
	}while(vezes<=n);
}
