#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(void *vp1, void *vp2, int noOfBytes)
{
	char buffer[noOfBytes];
	memcpy(buffer, vp1, noOfBytes);
	memcpy(vp1, vp2, noOfBytes);
	memcpy(vp2, buffer, noOfBytes);
}

int main()
{
	char *husband = ("fred");
	char *wife = ("Wilma");
	printf("Before Swapping: husband = %s | wife = %s\n", husband, wife);
	swap(&husband, &wife, sizeof(char *));
	printf("After Swapping: husband = %s | wife = %s\n", husband, wife);
   return 0;
}
