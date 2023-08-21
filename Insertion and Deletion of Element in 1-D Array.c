#include<stdio.h>
void insert(int [],int);
void delete(int [],int);
void main()
{
	int a[100],i,s,ch;
	printf("Enter the size= ");
	scanf("%d",&s);
	printf("Enter array elements= ");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("1-Insertion of an element\n2-Deletion of an element\nEnter the choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			insert(a,s);
			break;
		case 2:
			delete(a,s);
			break;
		default:
			printf("Invalid input");
	}
}

void insert(int a[],int s)
{
	int n,i,loc;
	printf("Enter the element you want to insert= ");
	scanf("%d",&n);
	printf("Enter the loc where you want to insert= ");
	scanf("%d",&loc);
	for(i=0;i<s;i++)
	{
		if(a[i]==n)
		{
			s++;
		}
	}
	for(i=s-1;i>=loc;i--)
	{
		a[i]=a[i-1];
	}
	a[loc]=n;
	printf("Array after insertion is= ");
	for(i=0;i<s;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\n");
}

void delete(int a[],int s)
{
	int n,i,loc;
	printf("Enter the element you want to delete= ");
	scanf("%d",&n);
	for(i=0;i<s;i++)
	{
		if(a[i]==n)
		{
			loc=i;
			s--;
		}
	}
	for(i=loc;i<s;i++)
	{
		a[i]=a[i+1];
	}
	printf("Array after deletion is= ");
	for(i=0;i<s;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\n");
}
