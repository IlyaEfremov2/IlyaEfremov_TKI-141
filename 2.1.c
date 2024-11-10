#include <stdio.h> 
#include <locale.h>
#include <math.h> 
#include <stdlib.h> 
#include <errno.h> 

/**
*@brief Проверка введенных значений на то, ментше ли они нуля.
*@return Возвращает значение, если выполнено успешно, или ошибку, если иначе
*/
double get_above_zero(void);

/**
*@brief Проверка введенных значений.
*@return Возвращает значение, если выполнено успешно, или ошибку, если иначе
*/
double input(void);

/**
* @brief Рассчитывает объём
* @param length - длина
* @param Width - ширина
* @param Height - высота
* @return объем
*/
double volume(const double length, const double width, const double height);

/**
* @brief Рассчитывает площадь поверхности
* @param length - длина
* @param Width - ширина
* @param Height - высота
* @return площадь поверхности
*/
double surface_area(const double length, const double width, const double height);

/**
* @brief Точка входа в програsмму
* @return 0 в случае успеха
*/
int main(void)
{
	setlocale(LC_ALL, "RUSSIAN");
	puts("введите длину:");
	double length =  get_above_zero();
	puts("введите ширину:");
	double width =  get_above_zero();
	puts("введите высоту:");
	double height =  get_above_zero();
	printf("объем= %f\n", volume(length, width, height));
	printf("площадь поверхноии= %f\n", surface_area(length, width, height));
	return 0;
}
double get_above_zero()
{
    double input1=input();
    if (input1 <= 0)
	{
        errno = EIO;
		printf("input error");
		exit(EXIT_FAILURE); 
	 }
	 return input1;
}
double input(void)
{
	double value = 0.0;
	int result = scanf("%lf", &value);
	if (result != 1)
	{
	    errno = EIO;
		printf("input error");
		exit(EXIT_FAILURE);
	}
	return value;
}
double volume(const double length, const double width, const double height)
{
	return length * width * height;
}
double surface_area(const double length, const double width, const double height)
{
	return (length * width) * 2.0 + (length * height) * 2.0 + (width * height) * 2.0;
}
