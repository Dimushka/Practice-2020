#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "MyFunc.h"
int main(void)
{
	setlocale(LC_CTYPE, "rus");
	int Ax, Bx, Cx, Dx, Ay, By, Cy, Dy;
	float det;
	printf(" Кооринаты А для отрезка AB: ");//Ввод координат
	scanf_s("%d %d", &Ax, &Ay);
	printf("Кооринаты В для отрезка AB: ");
	scanf_s("%d %d", &Bx, &By);
	printf("Кооринаты С для отрезка CD: ");
	scanf_s("%d %d", &Cx, &Cy);
	printf("Кооринаты D для отрезка AB:: ");
	scanf_s("%d %d", &Dx, &Dy);
	det = (Dy - Cy) * (Bx - Ax) - (Dx - Cx) * (By - Ay); //нахождение определителя
	if (intersection_of_segments(Ax, Bx, Cx, Dx, Ay, By, Cy, Dy, det)) printf("Отрезки пересекаются!\n");
	else printf("Отрезки не пересекаются!\n");
	return 0;
}
