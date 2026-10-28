#include"header.h"
void delete_name(ST **ptr)
{
	if((*ptr)==NULL)
	{
		printf("NO FILE FOUND\n");
		return;
	}
	int r;
	int count=0;
	char nam[20];
	char con,s;
	ST *temp=(*ptr),*prv=NULL;
	ST *target=NULL;
	printf("\n");
	printf("ENTER NAME:");
	scanf(" %[^\n]",nam);
	printf("\n\n");
	printf("*******************************************\n");
	printf("* ROLL NO:\t NAME:\t\t MARK:\t\t*\n");
	printf("*******************************************\n");
	while(temp!=NULL)
	{
		if(strcmp(nam,temp->name)==0)
		{
			printf("* %d\t%s\t\t%.2f\t\t*\n",temp->roll,temp->name,temp->mark);
			//printf("*******************************************\n\n");
			target=temp;
			count++;
		}
		temp=temp->next;
	}
	printf("*******************************************\n\n");
	if(count==1)	
	{
		printf("\n\n");
		printf("CONFORMATION TO DELETE (Y/N):");
		scanf(" %c",&con);
		printf("\n");
		if(con=='y'||con=='Y')
		{		
			if(target==(*ptr))
				(*ptr)=(*ptr)->next;
			else
				prv->next=target->next;
			free(target);
			printf("\n");
			printf("SUCCESSFULLY DELETED\n");
		}
		else
		{
			printf("DELETE CANCELLED\n");
			return;
		}
	}
	else if(count>1)
	{
		ST *temp=(*ptr);
		printf("\n\n");
		printf("TO FIND PLZ ENTER ROLL NO:");
	       	scanf("%d",&r);
		printf("*******************************************\n");
		printf("* ROLL NO:\t NAME:\t\t MARK:\t\t*\n");
		printf("*******************************************\n");
		while(temp!=NULL)
		{ 
			if((r==temp->roll)&&(strcmp(nam,temp->name)==0))
			{
				printf("* %d\t%s\t\t%.2f\t\t*\n",temp->roll,temp->name,temp->mark);
				target=temp;
			}
			temp=temp->next;
		}
		if(temp!=NULL)
		{

		printf("*******************************************\n\n");
		
		printf("CONFORMATION TO MODIFY (Y/N):");
		scanf(" %c",&con);
		printf("\n");
		if(con=='y'||con=='Y')
		{	
	
			if(target==(*ptr))
				(*ptr)=(*ptr)->next;
			else
				prv->next=target->next;
			free(target);
			printf("\n");
			printf("SUCCESSFULLY DELETED\n");
		}
		else
		{
			printf("DELETE CANCELLED\n");
			return;
		}
		}
		else
		{
			printf("NO DATA FOUND\n");
			return;
		}
	}
	else
		printf("NO RECORD FOUND\n");		
}
