#include<stdio.h>
#include<conio.h>

int main()
{
	int a[100];
	int size,i,n,si=0,sj=0,min=0,temp;
	printf("\n ENTER THE SIZE OF ARRAY");
	scanf("%d",&size);
	printf("\n ENTER THE ELEMENT");
	for(i=0;i<size;i++)
	{
		scanf("%d",&n);
		a[i]=n;
	}
	for(si=0;si<size-1;si++)
	{
		min=si;
		for(sj=si+1;sj<size;sj++)
		{
			if(a[sj]<a[min])
			min=sj;
		}
		temp=a[min];
		a[min]=a[si];
		a[si]=temp;
	}
	printf("\n AFTER SORTING THE SORTED DATA ARE:  \n\n");
	for(i=0;i<size;i++)
	printf("%d\t",a[i]);
	
	getch();
}
