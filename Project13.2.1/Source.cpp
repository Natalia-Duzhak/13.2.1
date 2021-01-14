
#include <stdio.h>
#include <conio.h>
#include <math.h>

#include "1.h"

void main()
{

	puts("Lab 13.2.1");

	char ch;
	do
	{
		int x, y, w;
		// максимум з трьох чисел

		puts("Define maximum of two numbers");
		puts("Input 2 integer numbers");
		scanf_s("%d", &x);// введення числа
		PRINTI(x); // макрос виведення числа
		scanf_s("%d", &y);
		PRINTI(y);

#if z < 10 && z>=1
		w = POW(MAX((x + y), (x + z)), 2);

#else 
		w = MIN(POW(x, 2), 5 * (ABS(y - z)));
#endif
		PRINTI(w);
		puts("Repeat? y /n "); ch = _getch();
	} while (ch == 'y');
}
