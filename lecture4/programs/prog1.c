// Generic swap function

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(void *a, void *b, int noOfBytes)
{
	char buffer[noOfBytes];
	memcpy(buffer, a, noOfBytes);
	memcpy(a, b, noOfBytes);
	memcpy(b, buffer, noOfBytes);
}

int main()
{
	long int a = 565, b = 4545;
	printf("Before swapping: a = %ld, b = %ld\n", a, b);
	swap(&a, &b, sizeof(long int));
	printf("After swapping: a = %ld, b = %ld\n", a, b);
	return 0;
}

