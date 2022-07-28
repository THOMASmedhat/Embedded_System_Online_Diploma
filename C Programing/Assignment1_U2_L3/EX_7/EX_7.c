/*
  Write Source Code to Swap Two Numbers without temp variable.
 ============================================================================
 Name        : EX_7.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Assignment1_U2_L3_E7
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int x,y;
	printf("Enter x: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);
	printf("Enter y: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After swapping,  x = %d \n \t\t y= %d ",x,y);
	return 0;
}
