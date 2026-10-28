#include"header.h"

void print(ST *ptr)
{
	if(ptr==NULL)
	{
		printf("NO RECORD FOUND\n");
	       return;
	}
		printf("\n\n\n");
		printf("*********************************************\n");
		printf("* ROLL\t\tNAME\t\tMARK*\n");
		printf("*********************************************\n");

	while(ptr!=NULL)
	{
		printf("* %d \t\t%s\t\t%.2f\t*\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	}

		printf("********************************************\n");
		printf("\n\n\n");


}

