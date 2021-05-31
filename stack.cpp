#include<stdio.h>
#include<conio.h>
#define max 10
void push (struct stack *);
void pop (struct stack*);
void display ( struct stack *);
struct stack
{
	int item[max];
	int tos;
	
};
struct stack s;
int main()
{
	
	int choice;
	s.tos=-1;
	while(1)
	{
		//clrscr();
		printf("\n\n\n\tMenu\n\t...");
		printf("\n 1.push operation");
		printf("\n 2.pop operation");
			printf("\n 3.top element");
				printf("\n 4.display all elements");
					printf("\n 5.exit from program");
						printf("\n\t enter choice (1-5)");
						scanf("%d",&choice);
						switch(choice)
						{
							case 1:push(&s);break;
							case 2:pop(&s);break;
							case 3:if(s.tos!=-1)
							printf("top element=%d",s.item[s.tos]);break;
							case 4:display(&s);break;
							case 5:return 0; 
							default:printf("\n invalid choice");
							
						}
	}
	getch();
}
	void push ( struct stack *a)
	{
		int x;
		if(a->tos==max-1)
		{
			printf("\n stack full!");
			return;
		}
		else
		{
		
			printf("\nenter data:");
			scanf("%d",&x);
			a->tos++;
			a->item[a->tos]=x;
			
		}
	}
		void pop(struct stack *ps)
		{
			int temp;
			temp=ps->item[ps->tos];
			ps->tos--;
			printf("\npopped item=%d",temp);
			
		}
		void display(struct stack *p)
		{
			int i;
			for(i=0;i<=p->tos;i++)
			printf("\t %d",p->item[i]);
		}
	


