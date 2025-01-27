#include <stdio.h>
#include <string.h>

void printArray(int *arr, int size)
{
	for(int i = 0; i < 2*size; ++i)
		printf("%d\n",	((short *)arr)[i]);
}

int main()
{
	int arr1[] = {5,4,7,3,9};
	int arr2[5];
	memcpy(arr2, arr1, sizeof(arr1));
	printArray(arr2, 5);
	return 0;
}
