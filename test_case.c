#include <gtest/gtest.h>
#include "linked_list.h"
#define MAX_BUFFER 1024

TEST(InitBuffer,ll)
{
	
	unsigned char ll_buffer[MAX_BUFFER];
    struct linked_list ll;


    init_buffer(&ll,ll_buffer);

    EXPECT_EQ(ll.head,ll_buffer);
    EXPECT_EQ(ll.tail,ll_buffer);
    EXPECT_EQ(ll.buffer,ll_buffer);

}

TEST(addtest,normal) {
    char str[15]="List Start";
    char str1[10]="zero";
    char str2[10]="first";
    char str3[10]="second";
    char str4[10]="third";
    char str5[10]="fourth";
    char str6[10]="fifth";
    int i;

    linked_list head;

    head.next=0;
    head.data=str;
    head.index=0;


    i=add_to_list(&head,str1);
    EXPECT_EQ(1,i);

    i=add_to_list(&head,str2);
    EXPECT_EQ(2,i);

    i=add_to_list(&head,str3);
    EXPECT_EQ(3,i);

    i=add_to_list(&head,str4);
    EXPECT_EQ(4,i);

    i=add_to_list(&head,str5);
    EXPECT_EQ(5,i);

    i=add_to_list(&head,str6);
    EXPECT_EQ(6,i);
	
}

TEST(statustest,a)
{
	unsigned char ll_buffer[MAX_BUFFER];
	struct linked_list ll;
	int err;
	
	init_buffer(&ll,ll_buffer);
	
	ll.head=ll.buffer+5;
	ll.tail=ll.buffer+4;
	
	linkedlist_status(&ll);
}

TEST(statustest,b)
{
	unsigned char ll_buffer[MAX_BUFFER];
	struct linked_list ll;
	int err;
	
	init_buffer(&ll,ll_buffer);
	
	ll.head=ll.buffer+5;
	ll.tail=ll.buffer+6;
	
	linkedlist_status(&ll);
}

TEST(statustest,normal)
{
    char str[15]="List Start";
    char str1[10]="zero";
    char str2[10]="first";
    char str3[10]="second";
    char str4[10]="third";
    char str5[10]="fourth";
    char str6[10]="fifth";
    int i;

    linked_list head;

    head.next=0;
    head.data=str;
    head.index=0;


    i=add_to_list(&head,str1);
	i=linkedlist_status(&head);
    EXPECT_EQ(1,i);

    add_to_list(&head,str2);
  	i=linkedlist_status(&head);
    EXPECT_EQ(2,i);

    add_to_list(&head,str3);
	i=linkedlist_status(&head);
    EXPECT_EQ(3,i);

    add_to_list(&head,str4);
	i=linkedlist_status(&head);
    EXPECT_EQ(4,i);

    add_to_list(&head,str5);
	i=linkedlist_status(&head);
    EXPECT_EQ(5,i);

    add_to_list(&head,str6);
	i=linkedlist_status(&head);
    EXPECT_EQ(6,i);

}

TEST(display_item,add_to_list)
{
    int result;
    char str[15]="List Start";
    char str1[10]="zero";
    char str2[10]="first";
    char str3[10]="second";
    char str4[10]="third";
    char str5[10]="fourth";
    char str6[10]="fifth";
    int i;

    linked_list *find;
    linked_list head;
    head.next=0;
    head.data=str;
    head.index=0;

    i=add_to_list(&head,str1);
    i=add_to_list(&head,str2);
    i=add_to_list(&head,str3);
    i=add_to_list(&head,str4);
    i=add_to_list(&head,str5);
    i=add_to_list(&head,str6);

    find=head.next;
    display_item(find);

    find=head.next;
    display_item(find);

    find=head.next;
    display_item(find);

    find=head.next;
    display_item(find);

    find=head.next;
    display_item(find);

}

TEST(display_list,normal)
{
    char str[15]="List Start";
    char str1[10]="zero";
    char str2[10]="first";
    char str3[10]="second";
    char str4[10]="third";
    char str5[10]="fourth";
    char str6[10]="fifth";
    int i;

    linked_list head;
    head.next=0;
    head.data=str;
    head.index=0;

    i=add_to_list(&head,str1);
    i=add_to_list(&head,str2);
    i=add_to_list(&head,str3);
    i=add_to_list(&head,str4);
    i=add_to_list(&head,str5);
    i=add_to_list(&head,str6);

    display_list(&head);
}