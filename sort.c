#include"header.h"
void sort(ST *ptr)
{
	if(ptr==NULL)
	{
		fprintf(stderr,"NO FILE FOUND\n");
		return;
	}
	printf("*************************************\n");
	printf("* \t [1] SORT BY ROLL\t\t\t\n");
	printf("* \t [2] SORT BY NAME\t\t\t\n");
	printf("* \t [3] SORT BY MARK\t\t\t\n");
	printf("* \t [4] EXIT\t\t\t\t\n");
	printf("*************************************\n");
	int ch;
	printf("ENTER THE OPTION :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: sort_by_roll(ptr);break;
		case 2: sort_by_name(ptr);break;
		case 3: sort_by_mark(&(*ptr));break;
		case 4: printf("\n");break;
		default:printf("ENTER VALID OPTION\n");
	}


}
