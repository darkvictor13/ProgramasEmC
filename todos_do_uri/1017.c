#include <stdio.h>
#define quilometroslitro 12.0

int main () {
	int t,s,vm; float total;
	scanf ("%d %d" ,&t,&vm);
	s = t * vm;
	total = s / quilometroslitro;
	printf ("%.3f\n" ,total);
    return 0;
}
