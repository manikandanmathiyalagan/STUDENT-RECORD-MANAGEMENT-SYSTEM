#include"header.h"
void delete_all(ST **ptr)
{

	printf("********************************************\n");
	printf("DELETE ALL RECORD \n");
	printf("********************************************\n\n\n");
	if(*ptr==NULL){
		fprintf(stderr, "No data...\n\n");
		return;
	}
	char ch,s;
	printf("CONFORM TO DELETE ALL RECORD (Y/N):");
       	scanf(" %c",&ch);
	if(ch=='y' || ch=='Y')
	{
	while((*ptr)!=NULL)
	{
		ST *temp=(*ptr);
		(*ptr)=(*ptr)->next;
		free(temp);
		temp=NULL;
	}

		printf("SUCCESSFULLY DELETED...\n\n\n");
		printf("\n");
		printf("\t[S] TO SAVE CHANGES :");
		scanf(" %c",&s);
		if(s=='s' || s=='S')
		{
			save(*ptr);
			return;
		}
		else
		{
			return;
		}

		printf("\n");
	}
	else
	{
	printf("DELETE CANCELLED \n\n");
	}
}
