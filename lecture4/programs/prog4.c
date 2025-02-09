// This is a generic swap function to swap any data type

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(void *a1, void *a2, int bytes)
{
	char buffer[bytes];
	memcpy(buffer, a1, bytes);
	memcpy(a1, a2, bytes);
	memcpy(a2, buffer, bytes);
}

int main()
{
	// lets see if swappig two string works !!

	char *s1 = "gaurav", *s2 = "aman";
	printf("Before swapping: s1 = %s and s2 = %s\n", s1, s2);	
	swap(&s1, &s2, sizeof(s1));
	printf("After swapping: s1 = %s and s2 = %s\n", s1, s2);

	// technically, those two addresses are swapped and not actual content, and it's not possible to swap
	// the actual words with this function because they can be of varying length.
	return 0;
}


