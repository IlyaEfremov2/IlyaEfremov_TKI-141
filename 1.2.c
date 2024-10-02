#include <stdio.h>   
#include <math.h> 
/*
* @brief Считывает вещественное число.
* @return Вещественное число.
*/
double input(void);
/*
* @brief Рассчитывает кол-во мегабайтов
* @param x - кол-во байтов
* @return Кол-во мегабайтов
*/
double get_a1(const double x);
/*
* @brief Рассчитывает кол-во гигабайтов
* @param x - кол-во байтов
* @return Кол-во гигабайтов
*/
double get_b1(const double x);
/*
* @brief вход в програsмму
* @return 0 в случае успеха
*/
int main(void)
{
	printf("введите кол-во байтов:\n");
	double x = input();
	printf("мегабайты= %f\n", get_a1(x));
	printf("гигабайты= %f\n", get_b1(x));
	return 0;
}
double input(void)
{
	double value = 0.0;
	scanf("%lf", &value);
	return value;

}
double get_a1(const double x)
{
	return x / 1024.0 / 1024.0;
}
double get_b1(const double x)
{
	return x / 1024.0 / 1024.0 / 1024.0;
}