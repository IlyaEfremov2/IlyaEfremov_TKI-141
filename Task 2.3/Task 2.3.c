
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <errno.h>
#include <stdlib.h> 
/**
*@brief �������� ��������� ��������.
*@return ���������� ��������, ���� ��������� �������, ��� ������, ���� �����
*/
double input(void);
/**
* @brief ������� ����� ������ ����� �����
* @param hours - ���������� �����
* @param minutes - ���������� �����
* @return ����� �����
*/
double get_function(const double hours, const double minutes);
/**
* @brief ����� ����� � ������s���
* @return 0 � ������ ������
*/
int main(void)
{
	setlocale(LC_ALL, "Russian");
	puts("������� ������ �����:");
	double hours = input();
	puts("������� ������ �������:");
	double minutes = input();
	if (get_function(hours, minutes) == 1.0)
	{
		printf("������ ����");
	}
	if (get_function(hours, minutes) == 2.0)
	{
		printf("������ ����");
	}
	if (get_function(hours, minutes) == 3.0)
	{
		printf("������ ����");
	}
	if (get_function(hours, minutes) == 4.0)
	{
		printf("������ �����");
	}
	if (get_function(hours, minutes) == 5.0)
	{
		printf("����������� �����");
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
		perror("�� ������� ��������� ��������");
		exit(EXIT_FAILURE);
	}
	return value;
}
double get_function(const double hours, const double minutes)
{
	double value = 0.0;
	if (((hours >= 0) && (hours < 6)) && ((minutes >= 0) && (minutes < 60)))
	{
		value += 1.0;
		return value;
	}
	if (((hours >= 6) && (hours < 12)) && ((minutes >= 0) && (minutes < 60)))
	{
		value += 2.0;
		return value;
	}
	if (((hours >= 12) && (hours < 18)) && ((minutes >= 0) && (minutes < 60)))
	{
		value += 3.0;
		return value;
	}
	if (((hours >= 18) && (hours < 24)) && ((minutes >= 0) && (minutes < 60)))
	{
		value += 4.0;
		return value;
	}
	else
		value += 5.0;
		return value;
}
