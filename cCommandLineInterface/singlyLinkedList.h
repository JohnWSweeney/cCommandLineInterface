#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
	char command[123];
	struct node* next;
};

struct node* init(char* command);
int addBack(struct node** list, char* command);
int print(struct node* list);