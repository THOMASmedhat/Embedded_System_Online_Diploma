/*
 ============================================================================
 Name        : EX5.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>

int main() {
	int n,EL,arr[100];
	printf("Enter the number of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	printf("Enter the values : ");
	fflush(stdin);fflush(stdout);
	for(int i=1;i<=n;i++){
		scanf("%d",&arr[i]);
		}
	printf("Enter the element to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&EL);
	for (int i=1;i<=n;i++){
		if(arr[i]==EL){
			printf("Number found at the location = %d",i);
		}
	}
	return 0;
}
