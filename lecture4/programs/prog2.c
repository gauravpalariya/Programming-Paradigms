#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *lsearch(void *arr, int noOfElements, void *key, int sizeOfElement)
{
	for(int i = 0; i < noOfElements; ++i)
	{
		void *elementAddress = (char *)arr + i*sizeOfElement;
		if(memcmp(elementAddress, key, sizeOfElement) == 0) return elementAddress;
	}
	return NULL;
}

int main()
{
	long int array[] = {3453453,3543535,5757,8797,3453}; // array of 5 elements
	long int key = 9;
	int noOfElements = 5;
	long int *location = lsearch(array, noOfElements, &key, sizeof(long int));
	if(location) printf("The element %ld is located at location %p\n", *location, location);
	else printf("The element is not located in the array\n");
	return 0;
}
