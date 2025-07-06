#include<stdio.h>
main(){
	
	int roll_number = 248;
	int reverse_number=0;
	printf("\nActual roll_number = %d",roll_number);
	while(roll_number>0){
		int quotent = roll_number/10;
		int remainder = roll_number%10;
		reverse_number = reverse_number * 10 + remainder;
		roll_number = quotent;
	}
	printf("\nReversed roll_number = %d",reverse_number);
}
