#include <stdio.h>   
#include <math.h> 
#include <locale.h>
/*
* @brief Считывает вещественное число.
* @return Вещественное число.
*/
double input(void);
/*
* @brief Рассчитывает кол-во мегабайтов
* @param bytes - кол-во байтов
* @return Кол-во мегабайтов
*/
double MegaBytes(const double bytes);
/*
* @brief Рассчитывает кол-во гигабайтов
* @param bytes - кол-во байтов
* @return Кол-во гигабайтов
*/
double GigaBytes(const double bytes);
/*
* @brief вход в програsмму
* @return 0 в случае успеха
*/
int main(void)
{
	setlocale(LC_ALL, "RUSSIAN");
	printf("введите кол-во байтов:\n");
	double bytes = input();
	printf("мегабайты= %f\n", MegaBytes(bytes));
	printf("гигабайты= %f\n", GigaBytes(bytes));
	return 0;
}
double input(void)
{
	double value = 0.0;
	scanf_s("%lf", &value);
	return value;
}
double MegaBytes(const double bytes)
{
	return bytes / pow(1024.0,2.0);
}
double GigaBytes(const double bytes)
{
	return bytes / pow(1024.0,3.0);
}
