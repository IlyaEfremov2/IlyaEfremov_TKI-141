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
* @param perviy_rezistor - сопротивление первого резистора
* @param vtoroy_resistor - сопротивление второго резистора
* @param tretiy_resistor - сопротивление третьего резистора
* @return Сопротивление сети
*/
double soprotivlenie(const double perviy_rezistor, const double vtoroy_resistor, const double tretiy_resistor);
/*
* @brief вход в програsмму
* @return 0 в случае успеха
*/
int main(void)
{
	setlocale(LC_ALL, "RUSSIAN");
	printf("введите сопротивление первого резистора:\n");
	double perviy_rezistor = input();
	printf("введите сопротивление второго резистора:\n");
	double vtoroy_resistor = input();
	printf("введите сопротивление третьего резистора:\n");
	double tretiy_resistor = input();
	printf("Cопротивление соединения= %f\n", soprotivlenie(perviy_rezistor, vtoroy_resistor, tretiy_resistor));
	return 0;
}
double input(void)
{
	double value = 0.0;
	scanf_s("%lf", &value);
	return value;
}
double soprotivlenie(const double perviy_rezistor, const double vtoroy_resistor, const double tretiy_resistor)
{
	return perviy_rezistor + vtoroy_resistor + tretiy_resistor;
}
