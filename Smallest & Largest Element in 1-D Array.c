#include<stdio.h>
void smallest(int [],int);
void largest(int [],int);

void main()
{
	int s,i,a[100];
	printf("Enter the size= ");
	scanf("%d",&s);
	printf("Enter the array= ");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	smallest(a,s);
	printf("\n");
	largest(a,s);
}
void smallest(int a[],int s)
{
	int i,sm;
	for(i=0;i<s;i++)
	{
		if(a[i]<a[1])
		{
			a[1]=a[i];
			sm=a[i];
		}
	}
	printf("smallest element= %d",sm);
}
void largest(int a[],int s)
{
	int i,l=0;
	for(i=0;i<s;i++)
	{
		if(a[i]>l)
		{
			l=a[i];
		}
	}
	printf("Largest element= %d\n",l);
}
