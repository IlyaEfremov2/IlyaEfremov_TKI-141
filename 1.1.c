#include <stdio.h> 
#include <math.h> 

/*
* @brief ������������ ���������� � �� �������� �������
* @param x - �������� ��������� �
* @param y - �������� ��������� y
* @param z - �������� ��������� z
* @return ������������ ��������
*/

double get_a(const double x, const double y, const double z);

/*
* @brief ������������ ���������� b �� �������� �������
* @param x - �������� ��������� �
* @param y - �������� ��������� y
* @param z - �������� ��������� z
* @return ������������ ��������
*/

double get_b(const double x, const double y, const double z);

/*
* @brief ���� � ������s���
* @return 0 � ������ ������
*/

int main()
{
    const double y = 0.7;
    const double x = 2;
    const double z = -1;

    printf("a= %f \n", get_a(x, y, z)); // ����� a 
    printf("b= %f \n", get_b(x, y, z)); // ����� b 

    return 0;
}
double get_a(const double x, const double y, const double z)
{
    return cbrt((x * y * z + (fabs(z * sin(y)))));
}
double get_b(const double x, const double y, const double z)
{
    return (y * cos(x * z * sin(y))) + 3;
}