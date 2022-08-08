/*
 ============================================================================
 Name        : EX2_String.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
	char text [100];
	printf("Enter string: ");
	fflush(stdin);fflush(stdout);
	gets(text);
	printf("Length of string: %d",strlen(text));
	return 0;
}
