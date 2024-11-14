/*Eleição:
Em uma cidade haverá uma eleição. Existem 3 candidatos:
1 – Huguinho
2 – Zezinho
3 – Luizinho
Diversos eleitores votarão; por não sabermos a quantidade a eleição será encerrada com 
a digitação de 0(zero) no voto. Considere as seguintes rotinas neste Algoritmo:
a) Ler os votos e acumular os votos de cada candidato.
b) Caso seja digitado um voto inválido (diferente de 0, 1, 2 e 3) 
acumular o voto como nulo.
c) Sabendo-se o total de votos, calcular a porcentagem atingida por cada candidator.
d) Ao finalizar o algoritmo, exibir os candidatos – e as informações respectivas
 da apuração*/
 
#include<stdio.h>
int main ()
{
	float total,ht=0,zt=0,lt=0,voto,nt=0,np=0,hp=0,zp=0,lp=0;
	do
	{
		printf("Digite seu voto: ");
		scanf("%f", &voto);
		
		if(voto==1)
		{
			ht++;	
		} 
		else if(voto==2)
		{
			zt++;
		}
		else if (voto==3)
		{
			lt++;
		}
		else if (voto!=1 && voto!=2 && voto!=3 && voto!=0)
		{
			nt++;
		}
	}while(voto!=0);
	
	total=lt+nt+zt+ht;
	hp=(ht/total)*100;
	zp=(zt/total)*100;
	lp=(lt/total)*100;
	np=(nt/total)*100;
	
	
	printf("Total de votos: %.f\n", total);
	printf("Total de votos de huguinho %.f com %.2f  de porcentagem\n", ht,hp);
	printf("Total de votos de zezinho %.f com %.2f  de porcentagem\n", zt,zp);
	printf("Total de votos de luizinho %.f com %.2f  de porcentagem\n", lt,lp);
	printf("Total de votos de nulos %.f com %.2f  de porcentagem\n", nt,np);

}
