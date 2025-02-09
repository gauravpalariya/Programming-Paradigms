// so i am implementing a swap function to swap two integers

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int *a1, int *a2)
{
	int temp = *a1;
	*a1 = *a2;
	*a2 = temp;
}

int main()
{
	int a = 45, b = 35;
	printf("Values before: a = %d and b = %d\n", a, b);
	swap(&a, &b);
	printf("Values after: a = %d and b = %d\n", a, b);
	return 0;
}



