#include<stdio.h>
#include<conio.h>
int main(){
	int A, P, l, b;
	printf("Enter length of Rectangle : ");
	scanf("%d",&l);
	printf("Enter breadth of rectangle : ");
	scanf("%d",&b);
	A =l*b;
//	printf("%d",A);
	P = 2*(l+b);
//	printf("%d",P);
	if(A>P){
		printf("Area is greater");
		
	}
	else{
		printf("Parimeter is greater");
	}
	return 0;
}
