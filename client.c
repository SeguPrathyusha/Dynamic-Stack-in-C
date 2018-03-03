#include<stdio.h>
#include<stdlib.h>
#include"header.h"

struct node
{
	int data;
	struct node *next;
};

struct node *top=NULL;

void peek();
void push();
void pop();




void push(int item)
{
	struct node *nptr=malloc(sizeof(struct node));
	nptr->data=item;
	nptr->next=top;
	top=nptr;
	
}

void peek()
{
	struct node *temp;
	temp=top;
	if(temp==NULL)
	{
		printf("stack is empty");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("\n%d",temp->data);
			break;
			//temp=temp->next;
		}
	}	
}

void pop()
{
	if(top==NULL)
	{
		printf("\nStsack is empty");
	}
	else
	{
		struct node *temp;
		temp=top;
		top=top->next;
		printf("\n %d deleted",temp->data);
		free(temp);
	}
}

					
