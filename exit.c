#include"header.h"
void exitt(ST *ptr)
{
	if(ptr==NULL)
	{
		fprintf(stderr,"NO DATA FOUND TO SAVE\n\n");
		return;
	}
	char ch;
	printf("SAVE AND EXIT (Y/N):\n");
	scanf(" %c",&ch);
	if((ch=='y')||(ch=='Y'))
	{
	//ST *temp=ptr;
	FILE*fs=fopen("student.txt","w");
	fprintf(fs,"*************************************************\n");
	fprintf(fs,"*ROLL NO: \tNAME: \t\t MARK\n");
	while(ptr!=NULL)
	{
		fprintf(fs,"%d\t%s\t\t%.2f\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	}
	
	fclose(fs);
	printf("\n\nDATA SUCCESSFULLY STORED\n\n");
	}
	else
	{
		printf("DATA NOT SAVED AND EXIT\n"); 
		return;
	}
}	
