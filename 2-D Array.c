#include<stdio.h>
#include<stdlib.h>

void input(int [][10],int,int);
void display(int[][10],int,int);

void main()
{
	int a[10][10],b[10][10],r1,r2,c1,c2;
	printf("Enter the vcalues of r1,c1 and r2,c2 values respectively= ");
	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
	if(r1!=r2 || c1!=c2)
	{
		exit(0);
	}
	else
	{
		input(a,r1,c1);
		display(a,r1,c1);
	}
}

void input(int a[10][10],int r1,int c1)
{
	printf("Enter matrix values= ");
	int i,j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}

void display(int a[10][10],int r1,int c1)
{
	 printf("Displaying matrix=\n");
	 int i,j;
	 for(i=0;i<r1;i++)
	 {
		 for(j=0;j<c1;j++)
		 {
			 printf("\t%d",a[i][j]);
		 }
		 printf("\n");
	 }
}
