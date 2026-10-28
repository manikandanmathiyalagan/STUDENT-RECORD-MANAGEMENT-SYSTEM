#include"header.h"
void delete_node(ST **ptr)
{
	printf("******************************************************\n");
	printf("\t\tDELETE A NODE\n");
	printf("******************************************************\n");
	if(*ptr==NULL){
		fprintf(stderr, "No data...\n\n\n");
		return;
	}

	int roll;
	char ch,s;
	printf("\n\n");
	printf("ENTER ROLL NUMBER :");
	scanf("%d",&roll);
	ST *temp=(*ptr), *prv=NULL;
	while(temp!=NULL)
	{
		if(roll==temp->roll)
		{ 				
			printf("******************************************************\n");
			printf("*%d\t%s\t\t%.2f \n",temp->roll,temp->name,temp->mark);
			printf("****************************************************\n\n\n");

			printf("CONFORM TO DELETE THIS RECORD (Y/N):");
       			scanf(" %c",&ch);
			if(ch=='y' || ch=='Y')
			{
			if(temp==(*ptr))
			{ //checking 1st node
				(*ptr)=(*ptr)->next;
			}else
			{ //last or middle
				prv->next=temp->next;
			}

			free(temp);
			printf("\nSuccessfuly deleted the node...\n\n\n");
	//		return; 
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
				printf("\n");
				printf("DELETE CANCELLED\n");
				return;
			}
		}
		else
		{
			prv=temp; //pointing prev node
			temp=temp->next; // moving next node
		}
		
	}
	printf("No data found in the list...\n\n\n");
}


