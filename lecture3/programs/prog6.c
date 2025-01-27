#include <stdio.h>

void swap(int *pa, int *pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main()
{
	int x = 7, y = 117;
	printf("Before Swapping: a = %d and b = %d\n", x, y);
	swap(&x, &y);
	printf("Before Swapping: a = %d and b = %d\n", x, y);
	return 0;
}
	
