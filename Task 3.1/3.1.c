﻿#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <errno.h>
#include <stdlib.h> 
#include <float.h>
#include <stdbool.h>
/**
*@brief Проверка введенных значений на вход по ОФФ
* * @param x_start - начальное значение
*@return Выводит ошибку, если не входит в ООФ, или ответ, если иначе
*/bool examination(float x_start);
/**
*@brief Проверка введенных значений.
*@return Возвращает значение, если выполнено успешно, или ошибку, если иначе
*/double input(void);
/**
* @param x_start - начальное значение
* @param x_finish - конечное значение
* @return значение при опрееленном x_start
*/double get_function(const double x_start);
/**
* @brief Точка входа в програsмму
* @return 0 в случае успеха
*/
int main(void)
{
	setlocale(LC_ALL, "Russian");
	puts("Начальное значение:");
	double x_start = input();
	puts("Конечное значение:");
	double x_finish = input();
	puts("Шаг:");
	double x_step = input();
	while (x_start <= x_finish + DBL_EPSILON)
	{
		if (examination(x_start))
		{
			printf("при x равном %f", x_start);
			printf("решение %f\n", get_function(x_start));
			x_start = x_start + x_step;
		}
		else
		{
			printf("при x равном %f", x_start);
			printf("решение  отсутствует\n");
			x_start = x_start + x_step;
		}
	}
	return 0;
}
double input(void)
{
	double value = 0.0;
	int result = scanf("%lf", &value);
	if (result != 1)
	{
		errno = EIO;
		perror("Не удается посчитать значение");
		exit(EXIT_FAILURE);
	}
	return value;
}
double get_function(const double x_start)
{
	return (0.1 * pow(x_start, 2) - x_start*log(x_start)) ;
}
bool examination(float x_start)
{
	return x_start > 0;
}