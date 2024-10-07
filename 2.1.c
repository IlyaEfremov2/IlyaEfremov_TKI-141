#define _USE_MATH_DEFINES 
#include <stdio.h> 
#include <locale.h>
#include <math.h> 
#include <stdlib.h> 


/**
*@brief Проверка введенных значений.
*@return Возвращает значение, если выполнено успешно, или ошибку, если иначе
*/
double input(void);
/**
* @brief Рассчитывает объём
* @param dlina - длина
* @param shirina - ширина
* @param visota - высота
* @return объем
*/
double obiom(const double dlina, const double shirina, const double visota);
/**
* @brief Рассчитывает площадь поверхности
* @param dlina - длина
* @param shirina - ширина
* @param visota - высота
* @return площадь поверхности
*/
double ploshad_povrxnosti(const double dlina, const double shirina, const double visota);
/**
* @brief Точка входа в програsмму
* @return 0 в случае успеха
*/
int main(void)
{
	setlocale(LC_ALL, "RUSSIAN");
	printf("введите длину:\n");
	double dlina = input();
	printf("введите ширину:\n");
	double shirina = input();
	printf("введите высоту:\n");
	double visota = input();
	printf("объем= %f\n", obiom(dlina, shirina, visota));
	printf("площадь поверхноии= %f\n", ploshad_povrxnosti(dlina, shirina, visota));
	return 0;
}
double input(void)
{
	double input;
	if (scanf_s("%lf", &input) != 1 || (input <= 0))
	{
		printf("input error");
		exit(EXIT_FAILURE);
	}
	return input;
}
double obiom(const double dlina, const double shirina, const double visota)
{
	return dlina * shirina * visota;
}
double ploshad_povrxnosti(const double dlina, const double shirina, const double visota)
{
	return (dlina * shirina) * 2.0 + (dlina * visota) * 2.0 + (shirina * visota) * 2.0;
}
