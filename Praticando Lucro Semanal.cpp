#include<stdio.h>
main()
{
	double L, LD, LS, GD;
	printf("Digite o Lucro Diario = ");
	scanf("%d",&LD);
	printf("Digite o Gasto Diario = ");
	scanf("%d",&GD);
	L = LD-GD;
	LS= L*5;
	printf("Lucro Semanal = %d",LS);
	
}

