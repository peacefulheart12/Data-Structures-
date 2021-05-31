#include<stdio.h>
#include<conio.h>
int main()
{

    int k[10],i,n,x,c=0,l,h,mid;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

    printf("Enter the elements in ascending order: ");
    for(i=0;i<n;i++)
	{
         scanf("%d",&k[i]);
    }

    printf("Enter the number to be search: ");
    scanf("%d",&x);

    l=0,h=n-1;
    while(l<=h)
	{
         mid=(l+h)/2;
         if(x==k[mid])
		 {
             c=1;
             break;
         }
         else if(x<k[mid])
		 {
             h=mid-1;
         }
         else
             l=mid+1;
    }
    if(c==0)
         printf("The number is not found.");
    else
         printf("The number is found.");

    return 0;
}
