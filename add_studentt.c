#include"header.h"

void add_student(ST **ptr)
{


	static int id=1000;
	char c;
	do{
		
		ST *new=(ST *)malloc(sizeof(ST));
		new->roll=++id;
		printf("\nRoll NO :%d\n\n",new->roll);
		printf("Enter Name :");
		scanf(" %[^\n]",new->name);
		printf("\n");
		printf("Enter Mark :");
		//printf("\n");
		scanf(" %f",&new->mark);
		printf("\n");
		new->next=NULL;
		if((*ptr)==NULL)
			(*ptr)=new;
		else
		{
			ST *last=(*ptr);
			while(last->next!=NULL)
				last=last->next;
			last->next=new;
		}
		printf("\nsuccessfully Added..\n\n");
		printf("DO YOU WANT TO ADD NEXT (Y/N) : ");
	       	scanf(" %c",&c);	
	}while(c=='y'||c=='Y');
	
	printf("\n\n\n");
	
}

