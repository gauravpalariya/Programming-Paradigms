// Generic swap function to swap anything

#include <stdio.h>
#include <string.h>

void swap(void *p1, void *p2, int noBytes)
{
	char buffer[noBytes];
	memcpy(buffer, p1, noBytes);
	memcpy(p1, p2, noBytes);
	memcpy(p2, buffer, noBytes);
}


int main()
{
	char x, y;
	x = 'A', y = 'B';
	printf("Before swap, x = %c and y = %c\n", x, y);
	swap(&x, &y, sizeof(char));
	printf("After swap, x = %c and y = %c\n", x, y);
	return 0;
}
