#include "linked_list.h"

 void init_buffer(struct linked_list *ll, unsigned char *buffer)
 {
	ll->head=buffer;
    ll->tail=buffer;
    ll->buffer=buffer;
 }

int add_to_list(linked_list *ll, char *s)
{
	int i=0;
	while(ll->next != NULL)
	{
		ll = ll->next;
		i++;
	}
	ll->next = (linked_list* )malloc(sizeof(linked_list));
	ll->next->data = s;
	i++;
	ll->index = i;
	ll->next->next = NULL;
	return i;
}

int linkedlist_status(linked_list *ll)
{
	int amount;
	
	if(ll->tail > ll->head)
	{
		amount = ll->tail - ll->head;
		return amount;
	}
	
	else
	{
		amount = ll->head - ll->tail;
		return amount;
	}
}

unsigned int display_item(linked_list *ll)
{
	if(ll->find != NULL)
	{
		printf("Data: %s\n", ll->find);
		ll = ll->next;
		return 0;
	}
	else
		return -1;
}

unsigned int display_list(linked_list *ll)
{
	int i=0;
	while(ll->next != NULL)
	{
		ll = ll->next;
		display_item(ll);
		i++;
	}
	return i;
}