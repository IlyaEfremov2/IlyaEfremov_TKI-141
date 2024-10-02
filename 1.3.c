#include <stdio.h>  
#include <math.h> 
/*
* @brief Считывает вещественное число.
* @return Вещественное число.
*/
double input(void);
/*
* @brief Рассчитывает сопротивление сети
* @param x - сопротивление первого резистора
* @param y - сопротивление второго резистора
* @param z - сопротивление третьего резистора
* @return Сопротивление сети
*/
double get_a(const double x, const double y, const double z);
/*
* @brief вход в програsмму
* @return 0 в случае успеха
*/
int main(void)
{
	printf("введите сопротивление первого резистора:\n");
	double x = input();
	printf("введите сопротивление второго резистора:\n");
	double y = input();
	printf("введите сопротивление третьего резистора:\n");
	double z = input();
	printf("Cопротивление соединения= %f\n", get_a(x, y, z));
	return 0;
}
double input(void)
{
	double value = 0.0;
	scanf("%lf", &value);
	return value;
}
double get_a(const double x, const double y, const double z)
{
	return x + y + z;
}
