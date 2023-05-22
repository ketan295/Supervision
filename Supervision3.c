#include<stdio.h>

main()
{
	FILE *ptr;
	char data[1000];
	ptr=fopen("ketan.txt","a");
	
	if (ptr==NULL)
	{
		printf("COULD NOT OPEN FILE !!!!");
	}
	else 
	{
		printf("FILE OPEN SUCCESSFULLY.\n");
		printf("Enter anything here to writing in file:");
		gets(data);
		fputs("\n",ptr);
		fputs(data,ptr);
		printf("Data Enter Successfully...");
		
		fclose(ptr);
	}
			printf("\n.............................................");
	printf("\n");
	
	ptr=fopen("ketan.txt","r");
	
	if (ptr==NULL)
	{
		printf("COULD NOT OPEN FILE !!!!");
	}
	else 
	{
		while(fgets(data,100,ptr)!=NULL)
		{
			printf("%s",data);
		}
		fclose(ptr);
	}	

}
