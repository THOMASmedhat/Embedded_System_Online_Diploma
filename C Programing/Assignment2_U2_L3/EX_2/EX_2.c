/*
 ============================================================================
 Name        : EX_2.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Assignment2_U2_L3_EX.2
 ============================================================================
 */

#include <stdio.h>


int main() {
	char c;
	printf("Enter alphabet ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='U'||c=='u') ?
			printf("%c is a vowel",c):printf("%c is a consonant",c);
	return 0;
}
