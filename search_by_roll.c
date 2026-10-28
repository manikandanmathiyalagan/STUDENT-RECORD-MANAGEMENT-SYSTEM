#include"header.h"
void search_by_roll(ST **ptr)
{
	if((*ptr)==NULL)
	{
		printf("NO FILE FOUND\n");
		return;
	}
	int r;
	char con,s;
	ST *temp=(*ptr);
	printf("\n");
	printf("ENTER ROLL NO:");
	scanf("%d",&r);
	printf("\n\n");
	printf("*******************************************\n");
	printf("* ROLL NO:\t NAME:\t\t MARK:\t\t*\n");
	printf("*******************************************\n");

	while(temp!=NULL)
	{
		if(r==temp->roll)
		{
			printf("* %d\t%s\t\t%.2f\t\t*\n",temp->roll,temp->name,temp->mark);
			printf("*******************************************\n\n");
			printf("CONFORMATION TO MODIFY (Y/N):");
			scanf(" %c",&con);
			if(con=='y'||con=='Y')
			{
				printf("MODIFY THE DETAILS:\n");
				printf("ENTER NEW NAME :");
				scanf(" %[^\n]",temp->name);
				printf("\nENTER NEW MARK :");
				scanf(" %f",&temp->mark);
				printf("\nSUCCESFULLY MODIFIED\n\n");
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

			}
			else
			{
				printf("\nMODIFICATION CANCELLED\n");
				return;
			}
		}
		temp=temp->next;
	}
	printf("\n MATCH  NOT FOUND\n");

}
