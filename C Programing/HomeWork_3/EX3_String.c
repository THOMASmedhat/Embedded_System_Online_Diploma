/*
 ============================================================================
 Name        : EX3_String.c
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
	int count=0;
	printf("Enter string: ");
	fflush(stdin);fflush(stdout);
	gets(text);
	for (int i=0;i<100;i++){
		if(text[i]==0)break;
			count++;
	}
	printf("Length of string: %d",count);
	return 0;
}
