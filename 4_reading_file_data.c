#include<stdio.h>

main(){
	
	char file_content[10000];
	FILE *hand;
	hand = fopen("shiva_profile.txt","r");
	printf("%s",hand);
	while(fgets(file_content,10000,hand) != NULL){
		printf("%s",file_content);
	}
	
}
