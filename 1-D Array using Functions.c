#include<stdio.h>
void create(int[],int);
void display(int[],int);

int main()
{
	int n,a[100];
	printf("Enter the size= ");
	scanf("%d",&n);
	printf("Enter the array= ");
	create(a,n);
	printf("Displaying the array= ");
	display(a,n);
	printf("\n");
	return 0;
}

void create(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
}
