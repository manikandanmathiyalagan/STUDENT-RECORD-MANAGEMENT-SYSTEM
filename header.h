#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{
	int roll;
	char name[20];
	float mark;
	struct student *next;
}ST;


void add_student(ST **);

void print(ST *);

void modify(ST **);
void search_by_name(ST **);
void search_by_mark(ST **);
void search_by_roll(ST **);

void sort(ST *);
void sort_by_mark(ST *);
void sort_by_roll(ST *);
void sort_by_name(ST *);

void delete(ST **);
void delete_node(ST **);
void delete_name(ST **);
void delete_all(ST **);

void save(ST *);
void exitt(ST *);
