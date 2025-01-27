#include <stdio.h>
#include <math.h>

int main()
{
	int arr[4];
	for(int i = 0; i < 4; ++i) arr[i] = 0;
	arr[2] = pow(2,30) + pow(2,18) + pow(2,10) + pow(2,5);
	
	printf("%d\n", arr[2]);

	printf("%d\n", ((char *)arr)[8]);
	printf("%d\n", ((char *)arr)[9]);
	printf("%d\n", ((char *)arr)[10]);
	printf("%d\n", ((char *)arr)[11]);
	return 0;
}
