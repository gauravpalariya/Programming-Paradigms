#include <stdio.h>
#include <math.h>

int main()
{
	float f = 2;
	short s = *(short *)&f;
	printf("%d\n", s);
	return 0;
}
