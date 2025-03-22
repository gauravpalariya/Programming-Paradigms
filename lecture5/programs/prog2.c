// searching a string in a array of string using Generic Linear search

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int StrCmp(void *p1, void *p2)
{
	char *s1 = *(char **)p1;
	char *s2 = *(char **)p2;
	return strcmp(s1,s2);
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
	char *nums[] = {"gaurav", "aman", "hitesh", "deepak", "karan"};
	char *key = "hitesh";
	int n = 5, elemSize = sizeof(char *);
	char **found = lsearch(&key, nums, n, elemSize, StrCmp);
	if(found) printf("The key %s is found at address %p\n", *found, found);
	else printf("The key is not found\n");
	return 0;
}
