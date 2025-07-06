#include <stdio.h>

int main(){
	
	int p,n;
	float r,si;
	
	printf("Please enter p = ");
	scanf("%d",&p);
	printf("\n");
	
	
	printf("Please enter n = ");
	scanf("%d",&n);
	printf("\n");
	
	
	printf("Please enter r = ");
	scanf("%f", &r);
	printf("\n");
	
	si= (p*n*r)/100;
	
	printf("calculated simple interest = %f",si);
	
	return 8;
}
