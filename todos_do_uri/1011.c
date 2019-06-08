#include<stdio.h>
int main() {
	double R,n,VOLUME;
	scanf ("%lf" , &R);
	n = 3.14159;
	VOLUME = (4.0/3) * (n) * (R*R*R);
	printf ("VOLUME = %.3lf\n", VOLUME);
	return 0;
	}
