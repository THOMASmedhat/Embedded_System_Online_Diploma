/*
 ============================================================================
 Name        : EX1_String.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(void) {
	char text [100],c;
	int count=0;
	printf("Enter string: ");
	fflush(stdin);fflush(stdout);
	gets(text);
	printf("Enter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	for (int i=0;i<strlen(text);i++){
		if (text[i]==c){
			count++;
		}
	}
	printf("Frequency of %c = %d",c,count);
	return 0;
}
