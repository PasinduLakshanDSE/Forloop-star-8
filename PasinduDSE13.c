#include<stdio.h>
void main(){
	int line;
	int star;
	int space;
	
	for(line=1;line<=5;line++){
		for(star=1;star<=(6-line);star++){
			printf("*");
		}
		for(space=0;space<=(5-star);space++){
			printf(" ");
		}
		printf("\n");
	}
}