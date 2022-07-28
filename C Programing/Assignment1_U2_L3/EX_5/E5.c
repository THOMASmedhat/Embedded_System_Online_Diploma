/*
 ============================================================================
 Name        : E5.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Assignment1_U2_L3_E5
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	char c;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);
	printf("ASCII value of %C = %d",c,c);

	return 0;
}
