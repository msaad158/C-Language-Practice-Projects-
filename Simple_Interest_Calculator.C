#include<stdio.h>
#include<conio.h>
int main ()
{
	float principal, rate, time, si;
	printf("Enter Principal Value : ");
	scanf("%f",&principal);
	printf("Enter rate : ");
	scanf("%f",&rate);
	printf("Enter time : ");
	scanf("%f",&time);
	si = (principal*rate*time)/100;
	printf("The si is : %f",si);
	getch();
	
}
