#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// now i am building a program for linear search for integers

int lsearch(int *addr, int n, int key)
{
	for(int i = 0; i < n; ++i)
		if(*(addr+i) == key) return i;
	return -1;
}

int main()
{
	int n, key;
	printf("Enter the number of elements\n");
	scanf("%d", &n);
	int array[n], index;
	for(int i = 0; i < n; ++i)
		scanf("%d", array + i);
	printf("The elements are: \n");
	for(int i = 0; i < n; ++i)
		printf("%d ", *(array + i));

	printf("Enter the key\n");
	scanf("%d", &key);
	
	index = lsearch(array, n, key);
	if(index >= 0) printf("The key is present at %d position\n", index+1);
	else printf("The key is not present in the array\n");

	return 0;
}
