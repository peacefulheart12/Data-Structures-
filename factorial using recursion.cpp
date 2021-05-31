#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	/* TODO (#1#):   */
	int n;
	printf("Enter any integer");
	scanf("%d",&n);
	int f=fact (n);
	
	printf("the factorial is%d",f);
	getch();
}

