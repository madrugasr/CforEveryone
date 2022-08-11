

#include <stdio.h>
#include <math.h>

long double cube(long double num)
{
	return pow(num, 100);
	// return num * num * num;
}

int main(int argc, char const *argv[])
{
	long double a = cube(10);
	printf("%lf\n", a);
	return 0;
}
