/*
 ============================================================================
 Name        : EX4.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>

int main() {
	int n,pos,EL;

	printf("Enter the number of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("%d ",i);
	}
	printf("\nEnter the number element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&EL);
	printf("Enter the Location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&pos);
	for (int i=1;i<=n;i++){
		if(i==pos)printf("%d ",EL);
		printf("%d ",i);
	}

	return 0;
}
