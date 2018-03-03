#include"header.h"
#include<stdio.h>
int main()
{
int ch,n;

do
	{
		printf("\n\nenter a number of your choice from 1-3\n\n1-push\n2-pop\n3-peek\n"); 
	
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			printf("\nenter the no.");
			scanf("%d",&n);
			push(n);
			break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		}
	}while(ch!=0);
	return 0;
}
