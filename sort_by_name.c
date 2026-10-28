#include"header.h"
void sort_by_name(ST *ptr)
{
	if(ptr==NULL)
	{
		printf("NO FILE FOUND\n");
		return;
	}
	
	ST *i,*j;
	ST *temp=ptr;
	int r,m;
	char s[50];
	for(i=ptr;i!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
			if(strcmp(i->name,j->name)>0)
			{
			
				strcpy(s,i->name);
				strcpy(i->name,j->name);
				strcpy(j->name,s);

				r=i->roll;
				i->roll=j->roll;
				j->roll=r;

				m=i->mark;
				i->mark=j->mark;
				j->mark=m;
			}
		}
	}

	printf("*******************************************\n");
	printf("* ROLL NO:\t NAME:\t\t MARK:\t\t*\n");
	printf("*******************************************\n");

	while(temp!=NULL)
	{
		printf("* %d\t%s\t\t%.2f\t\t*\n",temp->roll,temp->name,temp->mark);		
		temp=temp->next;
	}
	printf("*******************************************\n\n");

			
}
