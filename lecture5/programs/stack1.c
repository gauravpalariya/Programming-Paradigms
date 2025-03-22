// implementing a integer stack

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

typedef struct {
	int *elems;
	int logicLen;
	int allocLen;
} stack;

void stackNew(stack *s)
{
	s->allocLen = 4;
	s->logicLen = 0;
	s->elems = malloc(4 * sizeof(int));
	assert(s->elems != NULL);
}

void stackPush(stack *s, int elem)
{
	if(s->logicLen == s->allocLen) {
		s->allocLen *= 2;
		int *newBlock = malloc(s->allocLen * sizeof(int));
		for(int j = 0; j < s->logicLen; ++j) newBlock[j] = s->elems[j];
		free(s->elems);
		s->elems = newBlock;
	}
	s->elems[s->logicLen] = elem;
	s->logicLen++;
}

int stackPop(stack *s)
{
	if(s->logicLen > 0) {
	s->logicLen--;
	return s->elems[s->logicLen];
	}
}
		
int main()
{
	stack s;
	stackNew(&s);
	stackPush(&s, 15); 
	stackPush(&s, 45); 
	stackPush(&s, 11); 
	stackPush(&s, 5);

	printf("%d\n", stackPop(&s));
	printf("%d\n", stackPop(&s));
	printf("%d\n", stackPop(&s));
	printf("%d\n", stackPop(&s));
	printf("%d\n", stackPop(&s));
	return 0;
}
