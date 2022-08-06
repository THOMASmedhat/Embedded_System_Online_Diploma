/*
 ============================================================================
 Name        : EX4_String.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <String.h>

int main() {
	char text [100];
	printf("Enter string: ");
	fflush(stdin);fflush(stdout);
	gets(text);

	int x=strlen(text);
	for( int i=x;i>=0;i--){
		printf("%c",text[i]);
	}
	return 0;
}
