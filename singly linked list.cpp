#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
struct node{
	int info;
	struct node *next;
};
typedef struct node NodeType;
NodeType *head=NULL;
void insert_atfirst(int);
/*void insert_givenposition(int);
void insert_atend(int);
void delete_first();
void delete_last();
void delete_nthnode();*/
void print();
int main(){
	int choice;
	int item;
	do{
		printf("\n..............for menu program...");
		printf("\n1.Insert at first\n2.Insert at given position\n3.Insert at last\n4.delete first node\n5.delete at last\n6.delete nth node\n7.display nodes\n8..Exit\n");
		printf("\n Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter item to be inserted");
				scanf("%d",&item);
				insert_atfirst(item);
				break;
			/*	case 2:
				printf("enter item to be inserted");
				scanf("%d",&item);
				insert_givenposition(item);
				break;
				case 3:
				printf("enter item to be inserted");
				scanf("%d",&item);
				insert_atend(item);
				break;
				case 4:
					delete_first();break;
					case 5:
					delete_last();break;
					case 6:
					delete_nthnode();break;*/
					
					case 7:
						print();break;
						default:printf("Invalid choice");break;
		}
		
	}while (choice<8);
	return 0;
}
void insert_atfirst(int item)
{
	NodeType *nnode;
	nnode=(NodeType*)malloc(sizeof(NodeType));
	nnode->info=item;
	nnode->next=head;
	head=nnode;
}
void print()
{
	NodeType *temp;
	temp=head;
	printf("\nThe nodes are:\n");
	while(temp!=NULL)
	{
		printf("%d",temp->info);
		temp=temp->next;
	}
}
