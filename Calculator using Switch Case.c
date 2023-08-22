#include <stdio.h>
void add(int,int);
void sub(int,int);
void mult(int,int);
void div(int,int);
void main()
{
	int a,b,cal;
	printf("Enter 2 numbers for calculations= ");
	scanf("%d%d",&a,&b);
	printf("1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\nEnter your choice= ");
	scanf("%d",&cal);
	if(cal<=4 && cal>0)
	{
		switch(cal)
		{
			case 1:
				add(a,b);
			        break;
		        case 2:
			        sub(a,b);
			        break;
		        case 3:
			        mult(a,b);
			        break;
		        case 4:
			        div(a,b);
			        break;
	        }
        }
	else
	{
		printf("Invalid input");
	}
}
void add(int a,int b)
{
	printf("Addition= %d\n",a+b);
}
void sub(int a,int b)
{
	printf("Subtraction= %d\n",a-b);
}
void mult(int a,int b)
{
	printf("Multiplication= %d\n",a*b);
}
void div(int a,int b)
{
	printf("Division= %d\n",a/b);
}
