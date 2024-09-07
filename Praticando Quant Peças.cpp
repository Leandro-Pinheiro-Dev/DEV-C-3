#include<stdio.h>
main()
{
	float P1, P2, A1, A2, QP1, QP2;
	printf("Digite quantidade P1=");
	scanf("%f",&P1);
	printf("Digite quantidade P2=");
	scanf("%f",&P2);
	A1 = P1*0.17;
	A2 = P2*0.26;
	QP1 = P1+A1;
	QP2 = P2+A2;
	printf("Quantidade Produzida P1 = %f",QP1);
	printf("Quantidade Produzida P2 = %f",QP2);
}

