#include <stdio.h> 
#include <locale.h>
#include <math.h> 
#include <stdlib.h> 
#include <errno.h> 
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
double Volume(const double length, const double Width, const double Height);
/**
* @brief Рассчитывает площадь поверхности
* @param length - длина
* @param Width - ширина
* @param Height - высота
* @return площадь поверхности
*/
double Surface_Area(const double length, const double Width, const double Height);
/**
* @brief Точка входа в програsмму
* @return 0 в случае успеха
*/
int main(void)
{
	setlocale(LC_ALL, "RUSSIAN");
	puts("введите длину:");
	double length = input();
	puts("введите ширину:");
	double Width = input();
	puts("введите высоту:");
	double Height = input();
	printf("объем= %f\n", Volume(length, Width, Height));
	printf("площадь поверхноии= %f\n", Surface_Area(length, Width, Height));
	return 0;
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
	if (value <= 0)
	{
        errno = EIO;
		printf("input error");
		exit(EXIT_FAILURE); 
	 }
	 else
	 {
	     return value;
	 }
}
double Volume(const double length, const double Width, const double Height)
{
	return length * Width * Height;
}
double Surface_Area(const double length, const double Width, const double Height)
{
	return (length * Width) * 2.0 + (length * Height) * 2.0 + (Width * Height) * 2.0;
}
