/**
*@file СoncoleApplication1.cpp
*@date 19 червня 2020 год
*@author Фещук Д.Ю.
*@brief Навчальна практика №1
*
**/
#include <stdio.h>
#include <locale.h>
#include <math.h>
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

int intersection_of_segments(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4, float d)
{
	float Ua, Ub;
	if (d == 0)  return 0;
	Ua = ((x4 - x3) * (y1 - y3) - (y4 - y3) * (x1 - x3)) / d;
	Ub = ((x2 - x1) * (y1 - y3) - (y2 - y1) * (x1 - x3)) / d;
	if (Ua >= 0 && Ua <= 1 && Ub >= 0 && Ub <= 1) return 1; //Условие пересечения

	else return 0;
}
