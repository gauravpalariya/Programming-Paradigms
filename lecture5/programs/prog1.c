// Generic Linear search by passing "compare" function as argument

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int intcmp(void *p1, void *p2)
{
	/*
	int *ip1 = p1;
	int *ip2 = p2;
	return *ip1 - *ip2;
	*/

	return *(int *)p1 - *(int *)p2;
}


void *lsearch(void *key, void *base, int n, int elemSize, int (*cmpfn)(void *, void *))
{
	for(int i = 0; i < n; ++i)
	{	
		void *elemAddress = (char *)base + i*elemSize;
		if(cmpfn(key, elemAddress) == 0) return elemAddress;
	}
	return NULL;
}


int main()
{
	int array[] = {6,2,9,53,89,26}; // array of 6 integers
	int n = 6, key = 8;
	int *found = lsearch(&key, array, n, sizeof(int), intcmp);
	if(found) printf("The key %d is at address %p\n", *found, found);
	else printf("The key is not present in the list\n" );
	return 0;
}

