// Now we will see generic linear search

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int lsearch(void *addr, int n, int size, void *keyaddr)
{
	for(int i = 0; i < n; ++i)
	{
		void *elemaddr = (char *)addr + i*size;
		if(memcmp(elemaddr, keyaddr, size) == 0) return i;
	}
	return -1;
}

int main()
{
	int n, index;
	printf("Enter the size of collection\n");
	scanf("%d", &n);
	double array[n], key;
	printf("Enter the elements of collection\n");
	for(int i = 0; i <= n-1; ++i)
		scanf("%lf", array+i);
	printf("Enter the key\n");
	scanf("%lf", &key);
	
	index = lsearch(array, n, sizeof(double), &key);
	if(index >= 0) printf("The key is present at %d position\n", index+1);
	else printf("Oops, the key is not present\n");
	
	return 0;
}

