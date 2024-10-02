#define _USE_MATH_DEFINES 
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 
/**
*@brief Проверка введенных значений.
*@return Возвращает значение, если выполнено успешно, или ошибку, если иначе
*/
double input(void);
/**
* @brief Рассчитывает объём
* @param x - длина
* @param y - ширина
* @param z - высота
* @return объем
*/
double get_a1(const double x, const double y, const double z);
/**
* @brief Рассчитывает площадь поверхности
* @param x - длина
* @param y - ширина
* @param z - высота
* @return площадь поверхности
*/
double get_b1(const double x, const double y, const double z);
/**
* @brief Точка входа в програsмму
* @return 0 в случае успеха
*/
int main(void)
{
	printf("введите длину:\n");
	double x = input();
	printf("введите ширину:\n");
	double y = input();
	printf("введите высоту:\n");
	double z = input();
	printf("объем= %f\n", get_a1(x, y, z));
	printf("площадь поверхноии= %f\n", get_b1(x, y, z));
	return 0;
}
double input(void)
{
	double input;
	if (scanf("%lf", &input) != 1 || (input <= 0))
	{
		printf("input error");
		exit(EXIT_FAILURE);
	}
	return input;
}
double get_a1(const double x, const double y, const double z)
{
	return x * y * z;
}
double get_b1(const double x, const double y, const double z)
{
	return (x * y) * 2.0 + (x * z) * 2.0 + (y * z) * 2.0;
}
