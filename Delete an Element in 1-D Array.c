#include<stdio.h>
void delete(int[],int,int);
void main()
{
	int i,a[50],s,n;
	printf("Enter the size= ");
	scanf("%d",&s);
	printf("Enter the array elements= ");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number you want to delete: ");
	scanf("%d",&n);
	delete(a,s,n);
}

void delete(int a[],int s,int n)
{
	int i,loc;
	for(i=s-1;i<s;i--)
	{
		if(a[i]==n)
		{
			loc=i;
		
		}
	}
	for(i=s-1;i<s;i--)
	{
		a[i]=a[i+1];
		s--;


	printf("Array after deletion= ");
	for(i=0;i<s;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\n");
}

