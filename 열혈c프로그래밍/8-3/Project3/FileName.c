#include <stdio.h>
double CelToFah(double c);
double FahToCel(double f);
int main(void) {
	double c,f;
	printf("¼·¾¾¿Âµµ¸¦ ÀÔ·Â:");
	scanf("%lf", &c);
	printf("È­¾¾¿Âµµ¸¦ ÀÔ·Â:");
	scanf("%lf", &f);
	printf("%f c->%f f\n", c, CelToFah(c));
	printf("%f f->%f c\n", f, FahToCel(f));
	return 0;
}
double CelToFah(double c) {
	return 1.8 * c + 32;
}
double FahToCel(double f) {
	return (f - 32) / 1.8;
}