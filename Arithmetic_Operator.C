#include<stdio.h>
#include<conio.h>
int main(){
	int a, b, c;
	printf("\t\t\t\t ======================================\n");
	printf("\t\t\t\t A R I T H M E T I C  O P E R A T O R S\n");
	printf("\t\t\t\t ======================================\n");
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("\n[====================================]\n");
	// For Addition
	c=a+b;
	printf("\nThe Result of Addition is: %d\n",c);
	// For Subtraction
	c=a-b;
	printf("The Result of Subtraction is: %d\n",c);
	// For Multiplication
	c=a*b;
	printf("The Result of Multiplication is: %d\n",c);
	// For Division & modulus
	if (b != 0) {  // to avoid division by zero
        c = a / b;
        printf("The Result of Division is: %d\n",c);

        c = a % b;
        printf("The Modulus is: %d\n",c);
    } else {
        printf("Division and Modulus not possible (denominator is 0)\n");
    }

	printf("\n\t\t\t\t\t ===============\n");
	printf("\t\t\t\t\t -> Good Luck <-\n");
	printf("\t\t\t\t\t ===============\n"); 
	getch();
}
