#include<stdio.h>
main()
{
	float QT, AP, LP, AT, LT, T, P;
	printf("Digite altura Parede = ");
	scanf("%f",&AP);
	printf("Digite Largura Parede = ");
	scanf("%f",&LP);
	printf("Digite altura tijolo = ");
	scanf("%f",&AT);
	printf("Digite Largura tijolo = ");
	scanf("%f",&LT);
	T = AT*LT;
	T = 1/T;
	P = AP*LP;
	QT= P*T;
	printf("Quantidade de tijolo = %f",QT);
}

