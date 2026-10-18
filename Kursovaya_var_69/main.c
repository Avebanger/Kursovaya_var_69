#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
// Функция Рассчета Q 
// Контрольный пример X = 103,20 ; Q = 74,40 совпадает
double Q(double x)
{
	double q;
	if (x < 60)
	{
		q = 3 * log(x - 60 + 2) + 10;
	}
	if ((x >= 60) && (x<=120))
	{
		q = 2 * (x - 90) + 48;
	}
	if (x > 120)
	{
		q = 5 * sqrt(x - 120 + 1) + 58;
	}
	return q;
}

// Функция Оперативного контроля
int Control(double Q)
{
	int check = 0;
	return check;
}

// Функция Чтения входящих иксов
int read(double x)
{
	return x;
}

// ФУнкция Вывода состояния
void state(double Q)
{
}


double main()
{
	setlocale(LC_ALL,"RUS");
	double x;
	printf("Введите параметр X: ");
	scanf("%lf",&x);
	printf("Q(x) = %.2lf",Q(x));
	return 0;
}