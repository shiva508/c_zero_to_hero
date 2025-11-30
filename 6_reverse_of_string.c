#include <stdio.h>
int main(){
	char name[12] = "Shiva Dasari";
	
	int total_length = sizeof(name);
	printf("\nActual Name=%s", name);
	int index; 
	for(index=0; index<total_length-1; index++){
		int lower_index;
		char temp_holder;
		for(lower_index=0;lower_index<total_length-1-index; lower_index++){
			temp_holder = name[lower_index];
			name[lower_index] = name[lower_index+1];
			name[lower_index+1] = temp_holder;
		}
	}
	printf("\nReversed Name=%s", name);
	return 0;
}
