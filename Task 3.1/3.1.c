
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <errno.h>
#include <stdlib.h> 
/**
*@brief Проверка на то, чтобы конец отрезка был меньше начала
*@return Продолжает решение, если выполнено успешно, или ошибку, если иначе
*/
double examination(const double x_start, const double x_finish, const double x_step);
/**
*@brief Проверка введенных значений.
*@return Возвращает значение, если выполнено успешно, или ошибку, если иначе
*/
double input(void);
/**
* @brief Считает значение в промежутке
* @param x_start - начальное значение
* @param x_finish - конечное значение
* @return значение при опрееленном x_start
*/
double get_function(const double x_start, const double x_finish);
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
	if ((examination(x_start, x_finish,x_step)) == 1)
	{
		perror("Конечное значение не может быть больше начального");
		exit(EXIT_FAILURE);
	}
	if ((examination(x_start, x_finish, x_step)) == 0)
	{ 
		while (x_start <= (x_finish))
		{
			printf("при x равном %f", x_start);
			printf(" решение %f\n", get_function(x_start, x_finish));
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
double get_function(const double x_start, const double x_finish)
{
	return (0.1 * pow(x_start, 2) - x_start*log(x_start)) ;
}
double examination(const double x_start, const double x_finish,const double x_step)
{
	if (x_finish>=x_start+x_step)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}