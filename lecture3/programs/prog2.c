#include <stdio.h>

struct fraction {
	int num;
	int denom;
};

int main()
{
	struct fraction pi;
	pi.num = 22;
	pi.denom = 7;
	printf("denom is %d\n", pi.denom);
	((struct fraction *)&pi.denom)->num = 45;
	printf("denom now is %d\n", pi.denom);

	return 0;
}
