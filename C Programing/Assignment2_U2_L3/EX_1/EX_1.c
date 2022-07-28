/*
 ============================================================================
 Name        : EX_1.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Assignment2_U2_L3_EX.1
 ============================================================================
 */

#include <stdio.h>
//#include <stdlib.h>

int main() {
	int x;
	printf("Enter your interer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if (x%2==0){
		printf("%d",x);
		printf(" is even");

	}else
	{
		printf("%d",x);
		printf(" is odd");
	}
	return 0;
}
