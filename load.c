#include"header.h"

/* Read student.txt (written by save/exit) back into the linked list. */
void load(ST **ptr)
{
	FILE *fp = fopen("student.txt", "r");
	if (fp == NULL)
		return;                      /* first run: no file yet */

	char line[128];
	ST *last = NULL;

	while (fgets(line, sizeof(line), fp))
	{
		int roll;
		char name[20];
		float mark;

		/* skips the header lines; matches "roll<TAB>name<TABs>mark" */
		if (sscanf(line, "%d\t%19[^\t]\t%f", &roll, name, &mark) != 3)
			continue;

		ST *new = (ST *)malloc(sizeof(ST));
		if (new == NULL)
			break;
		new->roll = roll;
		strcpy(new->name, name);
		new->mark = mark;
		new->next = NULL;

		if (last == NULL)
			*ptr = new;
		else
			last->next = new;
		last = new;
	}
	fclose(fp);
}

/* Next roll number = highest existing roll + 1 (1001 if list is empty). */
int next_roll(ST *ptr)
{
	int max = 1000;
	while (ptr != NULL)
	{
		if (ptr->roll > max)
			max = ptr->roll;
		ptr = ptr->next;
	}
	return max + 1;
}
