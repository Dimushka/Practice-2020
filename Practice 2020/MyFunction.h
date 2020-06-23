#include "MyFunc.h"
int intersection_of_segments(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4, float d)
{
	float Ua, Ub;
	if (d == 0)  return 0;
	Ua = ((x4 - x3) * (y1 - y3) - (y4 - y3) * (x1 - x3)) / d;
	Ub = ((x2 - x1) * (y1 - y3) - (y2 - y1) * (x1 - x3)) / d;
	if (Ua >= 0 && Ua <= 1 && Ub >= 0 && Ub <= 1) return 1; //Условие пересечения

	else return 0;
}
