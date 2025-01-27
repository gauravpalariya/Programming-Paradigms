#include <stdio.h>
#include <string.h>

int main()
{
	long int number = 3458943892342984;
	for(int i = 0; i < 8; ++i)
		printf("%c\n", *(((char *)&number) + i));
	return 0;
}
