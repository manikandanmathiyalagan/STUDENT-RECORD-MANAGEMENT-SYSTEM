#include"header.h"

int main()
{
	ST*node=NULL;
	int a;
	printf("\n\n");
label:	printf("*****************************************\n");
	printf("*\t [1] ADD_STUDENT RECORD \t*\n");
	printf("*\t [2] PRINT ALL RECORD \t\t*\n");
	printf("*\t [3] MODIFY STUDENT RECORD   \t*\n");
	printf("*\t [4] SORT THE LIST \t\t*\n");
	printf("*\t [5] DELETE SINGLE RECORD \t*\n");
	printf("*\t [6] DELETE ALL RECORD \t\t*\n");
	printf("*\t [7] SAVE IN FILE\t\t*\n");
	printf("*\t [8] EXIT\t\t\t*\n");
	printf("*****************************************\n");
	printf("\n\n");
	printf("ENTER OPTION : ");
	scanf("%d",&a);
	switch(a)
	{
		case 1: add_student(&node);/*break;*/goto label;
		case 2: print(node);/*break;*/goto label;
		case 3: modify(&node);goto label;
		case 4: sort(node);goto label;
		case 5: delete(&node);goto label;
		case 6: delete_all(&node);goto label;
		case 7: save(node);goto label;
		case 8: exitt(node);break;
		default : printf("enter correct option\n");
	}
}
