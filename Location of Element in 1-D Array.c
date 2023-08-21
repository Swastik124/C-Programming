#include<stdio.h>
void loc(int[],int,int);
void main()
{
	int i,s,a[100],n;
	printf("Enter the size= ");
	scanf("%d",&s);
	printf("Enter the array= ");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Element you want to search= ");
	scanf("%d",&n);
	loc(a,s,n);
}

void loc(int a[],int s,int n)
{
	int i,l;
	for(i=0;i<s;i++)
	{
		if(a[i]==n)
		{
			l=i;
		}
	}
	printf("location(index) of the number= %d\n",l);
}

