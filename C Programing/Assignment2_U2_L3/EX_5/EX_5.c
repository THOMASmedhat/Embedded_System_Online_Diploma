/*
 ============================================================================
 Name        : EX_5.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Assignment2_U2_L3_EX.5
 ============================================================================
 */

#include <stdio.h>


int main() {
	char c;
	printf("Enter char: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	if((c>='a'&&c<='z')||(c<='Z' &&c>='A')){
		printf("%c is alphabet.",c);
	}
	else printf("%c is not alphabet",c);

	return 0;
}
