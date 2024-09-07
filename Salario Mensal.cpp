#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	float Sal,VH,VHE;
	int ND,HE,QHM;
	const int HD=8;
	printf("\nDias trabalhados = ");
	scanf("%d",&ND);	
	printf("\nValor da Hora = ");
	scanf("%f",&VH);
	QHM = ND*HD;
	Sal = QHM*VH;	
	printf("\nQuantidade de hora extras = ");
	scanf("%d",&HE);
	VHE=HE*VH*1.2;
	Sal=Sal+VHE;
	printf("\nSalario final = %0.2f",Sal);
	}
