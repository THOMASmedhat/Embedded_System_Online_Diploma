/*
 ============================================================================
 Name        : EX_7.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Assignment2_U2_L3_EX.7
 ============================================================================
 */

#include <stdio.h>
int main() {
	int n,fac=1,i;
	printf("Enter Num: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	if(n<0){
		printf("does not exist");
	}
	else if(n==0){
		printf("Factorial of 0 is 1");
	}
	else{
		for(i=1;i<=n;i++){
			fac =i*fac;
		}
		printf("Factorial of %d is %d",n,fac);
	}
	return 0;
}
