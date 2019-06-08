#include <stdio.h>
int main () {
	int cod1,cod2,quant1,quant2;float valA,valB,TOTAL;
	scanf ("%d %d %f %d %d %f" ,&cod1,&quant1,&valA,&cod2,&quant2, &valB);
	TOTAL = (quant1*valA) + (quant2*valB);
	printf ("VALOR A PAGAR: R$ %.2f\n" ,TOTAL);
	return 0;
}
