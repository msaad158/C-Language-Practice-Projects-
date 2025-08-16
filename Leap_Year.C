#include<stdio.h>
#include<conio.h>
int main(){
	int year;
	printf("Enter a year: ");
	scanf("%d",&year);
	if(year%4==0){
		printf("%d Its a leap year",year);
	}
	else{
		printf("%d Its not leap year",year);
	}
	return 0;
}
