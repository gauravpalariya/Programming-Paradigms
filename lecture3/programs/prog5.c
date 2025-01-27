#include <stdio.h>
#include <string.h>

struct student {
	
	char *name;
	char suid[8];
	int numUnits;
};

int main()
{
	struct student pupils[4];
	pupils[0].numUnits = 21;
	pupils[2].name = strdup("Adam");
	pupils[1].numUnits = 0;
	strcpy(pupils[1].suid, "40415xx98");
	printf("%s\n", pupils[1].suid);
	printf("%d\n", pupils[1].numUnits);
	return 0;

}
