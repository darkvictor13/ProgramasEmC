#include <stdio.h>

void ordem_certa (float *a, float *b, float *c){
  float temp;
if (*a < *b)
{
  temp = *a;
  *a = *b;
  *b = temp;
}
if (*b < *c)
{
  temp = *b;
  *b = *c;
  *c = temp;
}
if (*a < *b)
{
  temp = *a;
  *a = *b;
  *b = temp;
}
}

void calculos (float a, float b, float c){
  if (a >= (b + c))
	{
		printf("NAO FORMA TRIANGULO\n");
	}
	else if ((a * a) == (b * b) + (c * c))
	{
		printf("TRIANGULO RETANGULO\n");
	}
	else if ((a * a) > (b * b) + (c * c))
	{
		printf("TRIANGULO OBTUSANGULO\n");
	}
	else if ((a * a) < (b * b) + (c * c))
	{
		printf("TRIANGULO ACUTANGULO\n");
	}
	if ((a == b) && (b == c))
	{
		printf("TRIANGULO EQUILATERO\n");
	}
	else if (a == b || b == c)
	{
		printf("TRIANGULO ISOSCELES\n");
	}
}

int main () {
  float A,B,C;
  scanf("%f %f %f",&A,&B,&C);
  ordem_certa (&A,&B,&C);
  calculos (A,B,C);
  return 0;
}
