﻿#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <errno.h>
#include <stdlib.h> 
/**
*@brief Проверка введенных значений.
*@return Возвращает значение, если выполнено успешно, или ошибку, если иначе
*/
double input(void);
/**
* @brief Выводит какое сейчас время суток
* @param hours - количество часов
* @param minutes - количество минут
* @return время суток
*/
double get_function(const double hours, const double minutes);
/**
* @brief Точка входа в програsмму
* @return 0 в случае успеха
*/
int main(void)
{
	setlocale(LC_ALL, "Russian");
	puts("Сколько сейчас часов:");
	double hours = input();
	puts("Сколько сейчас минутой:");
	double minutes = input();
	if (get_function(hours, minutes) == 1)
	{
		printf("Доброй ночи");
	}
	if (get_function(hours, minutes) == 2)
	{
		printf("Доброе утро");
	}
	if (get_function(hours, minutes) == 3)
	{
		printf("Доброе день");
	}
	if (get_function(hours, minutes) == 4)
	{
		printf("Доброе вечер");
	}
	if (get_function(hours, minutes) == 5)
	{
		printf("Невозможное время");
	}
	return 0;
}
double input(void)
{
	double value = 0.0;
	int result = scanf("%lf", &value);
	if (result != 1)
	{
		errno = EIO;
		perror("Не удается посчитать значение");
		exit(EXIT_FAILURE);
	}
	return value;
}
double get_function(const double hours, const double minutes)
{
	double value = 0.0;
	if (((hours >= 0) && (hours < 6)) && ((minutes >= 0) && (minutes < 60)))
	{
		return 1;
	}
	if (((hours >= 6) && (hours < 12)) && ((minutes >= 0) && (minutes < 60)))
	{
		return 2;
	}
	if (((hours >= 12) && (hours < 18)) && ((minutes >= 0) && (minutes < 60)))
	{
		return 3;
	}
	if (((hours >= 18) && (hours < 24)) && ((minutes >= 0) && (minutes < 60)))
	{
		return 4;
	}
	else
		return 5;
}