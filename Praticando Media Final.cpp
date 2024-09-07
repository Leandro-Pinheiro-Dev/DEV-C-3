#include<stdio.h>
main()
{
	float Mf, N1, N2;
	printf("Digite Nota 1 =");
	scanf("%f",&N1);
	printf("Digite Nota 2 =");
	scanf("%f",&N2);
	N1= N1*0.60;
	N2= N2*0.40;
	Mf=N1+N2;
	printf("Media Final = %f",Mf);
}
