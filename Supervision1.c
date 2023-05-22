#include<stdio.h>

main()
{
	FILE *ptr;
	char data[1000];
	ptr=fopen("ketan.txt","w");
	
	if (ptr==NULL)
	{
		printf("COULD NOT OPEN FILE !!!!");
	}
	else 
	{
		printf("FILE OPEN SUCCESSFULLY.\n");
		printf("Enter anything here to writing in file:");
		gets(data);
		fputs(data,ptr);
		printf("Data Enter Successfully...");
		fclose(ptr);
	}
}
