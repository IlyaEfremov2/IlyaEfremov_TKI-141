#include <stdio.h>  
#include <math.h> 
#include <locale.h>
/*
* @brief Считывает вещественное число.
* @return Вещественное число.
*/
double input(void);
/*
* @brief Рассчитывает сопротивление сети
* @param first_resistor - сопротивление первого резистора
* @param second_resistor - сопротивление второго резистора
* @param third_resistor - сопротивление третьего резистора
* @return Сопротивление сети
*/
double Resist(const double first_resistor, const double second_resistor, const double third_resistor);
/*
* @brief вход в програsмму
* @return 0 в случае успеха
*/
int main(void)
{
	setlocale(LC_ALL, "RUSSIAN");
	printf("введите сопротивление первого резистора:\n");
	double first_resistor = input();
	printf("введите сопротивление второго резистора:\n");
	double second_resistor = input();
	printf("введите сопротивление третьего резистора:\n");
	double third_resistor = input();
	printf("Cопротивление соединения= %f\n", Resist(first_resistor, second_resistor, third_resistor));
	return 0;
}
double input(void)
{
	double value = 0.0;
	scanf_s("%lf", &value);
	return value;
}
double Resist(const double first_resistor, const double second_resistor, const double third_resistor)
{
	return first_resistor + second_resistor + third_resistor;
}
