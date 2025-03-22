#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct {
	int logLen;
	int allocLen;
	void *elems;
	int elemSize;
} stack;

void initialize(stack *s, int size)
{
	s->logLen = 0;
	s->allocLen = 4;
	s->elemSize = size;
	s->elems = malloc(s->elemSize * s->allocLen);
}

static void growStack(stack *s)
{
	s->allocLen *= 2;
	s->elems = realloc(s->elems, s->allocLen * s->elemSize);
	assert(s->elems != NULL);
}

void push(stack *s, void *element)
{
	if(s->logLen == s->allocLen)
	{
		growStack(s);
	}

	void *dest = (char *)s->elems + s->logLen * s->elemSize;
	memcpy(dest, element, s->elemSize);
	s->logLen++;
}

void print(stack *s)
{
	for(int i = s->logLen-1; i >= 0; --i)
	{
		printf("%d\n", ((int *)s->elems)[i]);
	}
}

void pop(stack *s, void *removed)
{
	assert(s->logLen > 0);
	memcpy(removed, (char *)s->elems + (s->logLen - 1) * s->elemSize, s->elemSize);
	s->logLen--;
}

int main()
{
	stack s;
	initialize(&s, sizeof(int));

// pushing the elements
	for(int i = 100; i <= 1000; ++i)
	{
		push(&s, &i);
	}
	int removed;
	while(1)
	{
		pop(&s, &removed);
		printf("%d\n", removed);
	}
	print(&s);
	return 0;
}
