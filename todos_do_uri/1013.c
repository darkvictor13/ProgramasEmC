#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c, maxab, max;
	scanf("%d %d %d", &a, &b, &c);
	maxab = (a + b + abs(a - b)) / 2;
	printf("%d eh o maior\n", (maxab + c + abs(maxab - c)) / 2);
	return 0;
}
