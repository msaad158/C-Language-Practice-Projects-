#include<stdio.h>
#include<conio.h>
int main(){
	int cp, sp;
	printf("Enter cost price : ");
	scanf("%d",&cp);
	printf("Enter selling price : ");
	scanf("%d",&sp);
	if(sp>cp){
		printf("Profit");
	}
	/**else{
		printf("Loss");
	}**/
	if(cp>sp){
		printf("Loss");
	}
	if(sp==cp){
		printf("No profit, No loss");
	}
	return 0;
}
