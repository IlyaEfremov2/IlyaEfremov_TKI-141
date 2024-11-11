#include <stdio.h> 
#include <stdlib.h> 
#include <errno.h> 
#include <math.h> 
#include <float.h> 
#include <locale.h> 

/**
*@brief Проверка введенных значений.
*@return Возвращает значение, если выполнено успешно, или ошибку, если иначе
*/
int get_int(void);

/**
*@brief Проверка введенных значений на то, что они больше 0.
*@return Возвращает значение, если выполнено успешно, или ошибку, если иначе
*/
int get_negative_int(void);

/**
*@brief считает сумму последовательности.
*@param count - кол-во членов последовательности
*@return Возвращает сумму.
*/
double get_sum(const int count);

/**
*@brief считает член последовательности
*@param К - изменный парамаетр в функции
*@return Возвращает член последовательности.
*/
double get_reccurent(const int k);

/**
*@brief Проверка введенных значений.
*@return Возвращает значение, если выполнено успешно, или ошибку, если иначе
*/
double get_double(void);

/**
*@brief Проверка введенных значений на то, что они больше 0.
*@return Возвращает значение, если выполнено успешно, или ошибку, если иначе
*/
double get_epsilon(void);

/**
*@brief Проверка на то, что 0<е<1.
*@param epsilone - число e
*/
void check_epsilon(const double epsilon);

/**
* @brief Считает сумму членов последоватльности
* @param epsilone - число e
* @return возращает сумму членов последовательности
*/
double get_sum_epsilon(const double epsilon);

/**
* @brief Точка входа в програsмму
* @return 0 в случае успеха
*/
int main(void) {
	setlocale(LC_ALL, "Russian");
	puts("Количество членов последовательности:");
	int count = get_negative_int();
	printf("Сумма последовательности из %d элементов = %.10f\n", count, get_sum(count));
	puts("Введите точность вычисления:");
	double epsilon = get_epsilon();
	printf("Сумма последовательности с точностью %lf равна %.10lf\n", epsilon, get_sum_epsilon(epsilon));
	return EXIT_SUCCESS;
}

int get_int(void) 
{
	int value = 0;
	int result = scanf("%d", &value);
	if (result != 1)
	{
		errno = EDOM;
		perror("Неверное введеное значение");
		exit(EXIT_FAILURE);
	}
	return value;
}

int get_negative_int(void) 
{
	int value = get_int();
	if (value <= 0) 
	{
		errno = EDOM;
		perror("Неверное введеное значение");
		exit(EXIT_FAILURE);
	}
	return value;
}

double get_sum(int count) 
{
	double current = -1/6.0;
	double summ = current;
	for (int i = 1; i < count; ++i)
	{
		current *= get_reccurent(i);
		summ += current;
	}
	return summ;
}
double get_reccurent(int k) 
{
	return -1.0 / (4*pow(k,2)+2*k);
}
double get_epsilon(void) 
{
	double epsilon = get_double();
	if (epsilon <= 0.0) 
	{
		puts("ошибка ввода");
		exit(EXIT_FAILURE);
	};
	return epsilon;
}
void check_epsilon(const double epsilon) 
{
	if (epsilon >= 1 && epsilon <= 0) 
	{
		puts("Невозможное значение e");
		exit(EXIT_FAILURE);
	}
}
double get_double(void) 
{
	double value = 0.0;
	int result = scanf("%lf", &value);
	if (result != 1) {
		errno = EIO;
		perror("Неверное введеное значение!");
		exit(EXIT_FAILURE);
	}
	return value;
}
double get_sum_epsilon(const double epsilon) 
{
	double current = -1 / 6.0;
	double summ = current;
	for (int i = 1; i < epsilon + DBL_EPSILON; ++i) 
	{
		current *= get_reccurent(i);
		summ += current;
	}
	return summ;
}