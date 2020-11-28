#include <stdio.h>



int main(int argc, char* argv[])
{

	enum cardinal_directions
	{
		north = 360,
		south = 180,
	};



	if (argc > 1)
	{
		printf("Option %s\n", argv[1]);

		for (int i = 0; i < 2; i++)
		{
			printf("%d", north);
			printf("%d", south);
		}

		printf("Size of north is %ld bytes", sizeof(north));

		
	}
	else
	{
		printf("Usage: hello <option>\n");
	}

	return 0;
}
