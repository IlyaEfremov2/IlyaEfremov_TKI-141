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
* @param bayti - кол-во байтов
* @return Кол-во мегабайтов
*/
double MegaBayti(const double bayti);
/*
* @brief Рассчитывает кол-во гигабайтов
* @param bayti - кол-во байтов
* @return Кол-во гигабайтов
*/
double Gigabayti(const double bayti);
/*
* @brief вход в програsмму
* @return 0 в случае успеха
*/
int main(void)
{
	setlocale(LC_ALL, "RUSSIAN");
	printf("введите кол-во байтов:\n");
	double bayti = input();
	printf("мегабайты= %f\n", MegaBayti(bayti));
	printf("гигабайты= %f\n", Gigabayti(bayti));
	return 0;
}
double input(void)
{
	double value = 0.0;
	scanf_s("%lf", &value);
	return value;
}
double MegaBayti(const double bayti)
{
	return bayti / 1024.0 / 1024.0;
}
double Gigabayti(const double bayti)
{
	return bayti / 1024.0 / 1024.0 / 1024.0;
}