#include <stdio.h>

main()
{
	FILE *ptr;
	char data[1000];
	ptr = fopen("ketan.txt", "r");

	if (ptr == NULL)
	{
		printf("COULD NOT OPEN FILE !!!!");
	}
	else
	{
		printf("FILE OPEN SUCCESSFULLY.\n");
		while (fgets(data, 100, ptr) != NULL)
		{
			printf("%s", data);
		}
		fclose(ptr);
	}
}