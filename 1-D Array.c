#include<stdio.h>
void main()
{
	int n,i,a[100];
	printf("Enter the size= ");
	scanf("%d",&n);
	printf("Enter the array= ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array is= ");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\n");

}
