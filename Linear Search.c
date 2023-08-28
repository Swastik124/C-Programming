#include<stdio.h>

void find(int [],int,int,int);
void display(int [],int,int,int);
void main()
{
	int i,a[100],s,n,x;
	printf("Enter the size= ");
	scanf("%d",&s);
	printf("Enter the array= ");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want to insert= ");
	scanf("%d",&n);
	printf("Enter the position(index) where you want to insert= ");
	scanf("%d",&x);
	find(a,s,n,x);
	display(a,s,n,x);
	printf("\n");
}
void find(int a[],int s,int n, int x)
{
	int i;
	for(i=0;i<s;i++)
	{
		if(i==x)
		{
			a[i]=n;
		}
	}
}
void display(int a[],int s,int n,int x)
{
	int i;
	for(i=0;i<s;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("Location of the %d is %d(index)\n",n,loc);
};
