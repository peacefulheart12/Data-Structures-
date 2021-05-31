#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,s,temp,a[20];
	printf("ENTER TOTAL ELEMENTS:");
	scanf("%d",&s);
	printf("\n ENTER %d ELEMENTS",s);
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<s;i++)
	{
		temp=a[i];
		j=j-1;
		while((temp<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	printf("\n AFTER SORTING THE SORTED DATA ARE:\n\n");
	for(i=0;i<s;i++)
	printf("%d\t",a[i]);
	getch();
}
