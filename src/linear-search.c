#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int *foo = malloc(sizeof(int) * 10);
	
	//printf("%d\n", (int)(sizeof(*foo)));	
	
	for (int i = 0; i < 10; i++, foo++)
	{
		*foo = i * 2;
		printf("pFoo = %p, value at pFoo = %d\n", foo, *foo);
	}


	struct Test_foo
	{
		int x;
		int y;
		int z;

		long long baz[10000];
	};

	struct Test_foo bar;
	bar.x = 4;
	bar.y = 3;

	printf("%d %d\n", bar.x, bar.y);

	printf("%lu\n", sizeof(bar));

	return 0;
}
