#include<stdio.h>
int main()
{
	int age;
	printf("ente rthe age \n");
	scanf("5d",&age);
	if(age>=18)
		printf("candidate is eligible for vote with age %d\n",age);
	else
		printf("candidat is not eleigible for vote\n");
	return 0;
}
