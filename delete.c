#include"header.h"
void delete(ST **ptr)
{
	if(*ptr==NULL){
		fprintf(stderr, "No data...\n\n\n");
		return;
	}
	printf("******************************************************\n");
	printf("*\t\t [1] DELETE BY ROLL\n");
	printf("*\t\t [2] DELETE BY NAME\n");
	printf("*\t\t [3] EXIT \n");
	printf("******************************************************\n");
	
	printf("\n\n");
	printf("ENTER OPTION:");
	int i;
	scanf("%d",&i);
	switch(i)
	{
		case 1:delete_node(&(*ptr));break;
		case 2:delete_name(&(*ptr));break;
		case 3:break;
		default:printf("\nENTER VALID OPTION\n");
	}
}
