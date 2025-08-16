#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("Enter number :");
	scanf("%d",&a);
	if(a%5==0 || a%3==0){
		printf("%d is divisible by both 5 OR 3");
	}
/**	else if(a%5==0){
		printf("%d is divisible by 5",a);
	}
	else if(a%3==0){
		printf("%d is divisible by 3",a);
	}**/
	else{
		printf("%d is not divisible by both 5 and 3",a);
	}
	
	return 0;
}
