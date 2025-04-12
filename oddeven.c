#include<stdio.h>
int main()
{
	int x,rem;
	printf("enter the x value\n");
	scanf("%d",&x);
	switch(x%2)
	{
		case 1:
			printf("%d is odd number\n",x);
			break;
		case 0:
			printf("%d is even number\n"x);
			break;
	}
}
