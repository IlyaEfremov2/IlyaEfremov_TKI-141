#include <stdio.h>
#include <math.h>
double get_a(const double x, const double y, const double z);
double get_b(const double x, const double y, const double z);
int main()
{
    const double y = 0.7;
    const double x = 2;
    const double z = -1;
    printf("a= %f \n", get_a(x, y, z));
    printf("b= %f \n", get_b(x, y, z));
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