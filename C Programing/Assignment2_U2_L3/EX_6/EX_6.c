/*
 ============================================================================
 Name        : EX_6.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Assignment2_U2_L3_EX.6
 ============================================================================
 */

#include <stdio.h>


int main() {
	int n,sum=0,i;
	printf("Enter Num: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		 sum +=i;

	}
	printf("sum is %d",sum);
	return 0;
}
