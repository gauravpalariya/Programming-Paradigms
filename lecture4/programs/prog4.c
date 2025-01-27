// Implementing generic linear search

#include <stdio.h>
#include <string.h>

void *lsearch(void *arr, int n, void *key, int elementSize)
{
	for(int i = 0; i < n; ++i)
	{
		void *eleAddress = (char *)arr + elementSize*i;
		if(memcmp(eleAddress, key, elementSize) == 0) return eleAddress;
	}
	return NULL;
}

int main()
{
	float arr[] = {5.6,4.6,3.4,8.9,3.9}, key = 8.3;
	if(lsearch(arr, 5, &key, sizeof(float))) printf("Element found\n");
	else printf("Element not found\n");
	return 0;
}

