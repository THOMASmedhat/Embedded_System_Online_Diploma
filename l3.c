/*
 ============================================================================
 Name        : l3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float r;
	char choice;
	printf("ra= ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&r);
	printf("\na or c");
	fflush(stdin); fflush(stdout);
	scanf("%c",&choice);

	if(choice=='a'){
		printf("area = %f", r*3.14*r);
	}
	else if(choice=='c'){
		printf("cer = %f", 2*3.14*r);
	}

	return 0;
}
