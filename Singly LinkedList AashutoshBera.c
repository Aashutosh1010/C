#include<stdio.h>
#include<stdlib.h>
//Aashutosh Bera Roll No.4//
//Singly Linked List//
struct node
{
	int data;
	struct node *next;
}*head,*middle,*last;

int main()
{

head=(struct node*) malloc(sizeof (struct node));
middle=(struct node*)  malloc(sizeof (struct node));
last= (struct node*) malloc(sizeof (struct node));

head->data = 10;
middle->data = 20;
last->data = 30;

head->next = middle;
middle->next = last;
last->next =NULL;

struct node *temp= head;

while(temp !=NULL)
{
	printf("%d\n",temp->data);
	temp= temp->next;
}
}
