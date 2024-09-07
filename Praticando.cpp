#include<stdio.h>
main()
{
		float N1, N2, N3,M;
		printf("Digite a nota 1 = ");
		scanf("%f", &N1);
		printf("Digite a nota 2 = ");
		scanf("%f", &N2);
		printf("Digite a nota 3 = ");
		scanf("%f", &N3);
		N1=N1*0.2;
		N2=N2*0.35;
		N3=N3*0.45;
		M=N1+N2+N3;
		printf("Valor da Media = %f",M);
}

