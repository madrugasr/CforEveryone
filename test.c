

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int *pc, c = 5, d = -15;

	pc = &c;
	printf("%d", *pc);
	printf("\n%d", &c);
	printf("\n%p", &c);

	printf("\n");
	pc = &d;
	printf("\n%d", *pc);
	printf("\n%d", &d);
	printf("\n%p", &d);

	printf("\n");
	*pc = 10;
	printf("\n%d", *pc);
	printf("\n%d", d);


	
	return 0;
}
