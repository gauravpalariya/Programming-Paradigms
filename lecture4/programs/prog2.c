#include <stdio.h>
#include <string.h>

void swap(void *vp1, void *vp2, int noOfBytes)
{
	char buffer[noOfBytes];
	memcpy(buffer, vp1, noOfBytes);
	memcpy(vp1, vp2, noOfBytes);
	memcpy(vp2, buffer, noOfBytes);
}

void printArray(int *p, int size)
{
	for(int i = 0; i < size; ++i) 
		printf("%d ", p[i]);
	printf("\n");
}

int main()
{

	int arr1[5] = {10,20,30,40,50}, num1;
	int arr2[5] = {60,70,80,90,100}, num2;
	printf("before swapping\n");
	printf("Array 1: "); printArray(arr1, 5);
	printf("Array 2: "); printArray(arr2, 5);
	swap(arr1, arr2, sizeof(arr1));
	printf("Array 1: "); printArray(arr1, 5);
	printf("Array 2: "); printArray(arr2, 5);

	
	return 0;
}
