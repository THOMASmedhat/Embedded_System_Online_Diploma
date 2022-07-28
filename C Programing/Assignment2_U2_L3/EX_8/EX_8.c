/*
 ============================================================================
 Name        : EX_8.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Assignment2_U2_L3_EX.8
 ============================================================================
 */

#include <stdio.h>
int main() {
	int n1,n2,R;
	char c;
	printf("Enter two numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&n1,&n2);
	printf("Enter the operation u want: +,-,*");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	switch(c){
	case('+'):{
		R=n1+n2;
		printf("%d",R);
	}break;
	case('-'):{
		R=n1-n2;
		printf("%d",R);
	}break;
	case('*'):{
		R=n1*n2;
		printf("%d",R);
	}break;

	default:{
		printf("Wrong operation");
	}break;
	}
	return 0;
}
