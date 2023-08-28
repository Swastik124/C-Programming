#include<stdio.h>
int count=0;
void find(int [],int,int);
void display(int [],int);
int main()
{
	int i,a[100],s,n;
	printf("Enter the size= ");
	scanf("%d",&s);
	printf("Enter the array= ");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	display(a,s);
	printf("Enter the element you want to search= \n");
	scanf("%d",&n);
	find(a,s,n);
	if(count==1)
		printf("Element Successfully found in Array\n");
	else
	{
		printf("Element is not present in the Array\n");
	}
}
void find(int a[],int s,int n)
{
	int i;
	for(i=0;i<s;i++)
	{
		if(a[i]==n)
		{
			printf("Location of the %d is %d(index)\n",n,i);
			count ++;
		}
	}
}
void display(int a[],int s)
{
	int i;
	for(i=0;i<s;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
