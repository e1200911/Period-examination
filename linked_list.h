#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list linked_list;

struct linked_list
{
	char str;
	char str1;
	char str2;
	char str3;
	char str4;
	char str5;
	char str6;
	unsigned char *head;
	unsigned char *tail;
	unsigned char *buffer;
	char *find;
	char *err;
	char *data;
	int index;
	struct linked_list *next;
};

void init_buffer(struct linked_list *ll, unsigned char *buffer);
int linkedlist_status(linked_list *ll);
unsigned int display_item(linked_list *ll);
int add_to_list(linked_list *ll, char *s);
unsigned int display_list(linked_list *ll);