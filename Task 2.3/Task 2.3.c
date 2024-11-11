#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <errno.h>
#include <stdlib.h> 
#include <stdbool.h>

/**
*@brief Проверка введенных значений.
*@return Возвращает значение, если выполнено успешно, или ошибку, если иначе
*/
double input(void);

bool check_minutes(double minutes);

/**
* @brief Точка входа в програsмму
* @return 0 в случае успеха
*/
int main()
{
 puts("сколько часов\n");
 int hours = input();
  puts("сколько минут\n");
 int minutes = input();
 if (!check_minutes(minutes))
    {
         return 1;
    }
else
{
    if (((hours >= 0) && (hours < 6)))

     {
      printf("Доброй ночи");
     }
     else if (((hours >= 6) && (hours < 12)))
     {
      printf("Доброе утро");
     }
     else if (((hours >= 12) && (hours < 18)))
     {
      printf("Добрый день");
     }
     else if (((hours >= 18) && (hours < 24)))
     {
      printf("добрый вечер");
     }
     else 
     {
        return 1;
     }
    return 0;
 }
}
bool check_minutes(double minutes)
{
    return ((minutes >= 0) && (minutes< 60));
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
