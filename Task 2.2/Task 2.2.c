#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <errno.h>
#include <stdlib.h>
/**
*@brief Проверка введенных значений.
*@return Возвращает значение, если выполнено успешно, или ошибку, если иначе
*/
double input(void);
/**
* @brief Рассчитывает значение функции
* @param a - константное значение
* @param x - вводимое значение
* @return Значение функции
*/
double get_function(const double a, const double x);
/**
* @brief Точка входа в програsмму
* @return 0 в случае успеха
*/
int main(void)
{
	setlocale(LC_ALL, "Russian");
	const double a = 0.9;
	puts("Введите х: ");
	double x = input();
	printf("y = %lf", get_function(a, x));
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
double get_function(const double a, const double x)
{
	if (x > 1) 
	{
		return a*log10(x)+pow(fabs(x),0.5);
	}
	else
	{
		return 2 * a * cos(x) + 3 * pow(x, 2.0);
	}
}
