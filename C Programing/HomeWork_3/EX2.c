/*
 ============================================================================
 Name        : EX2.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	float Average,sum=0;
	float Array [100];
	printf("Enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	if(n<100||n==100){
	for (int i=0;i<n;i++){
		printf("%d. Enter number: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&Array[i]);
	}
	for(int i=0;i<n;i++){
	sum+=Array[i];
	}
	Average=sum/n;
	printf("Average = %.2f",Average);
	}
	else{
		printf("Numbers of data should be in range 1:100");
	}
	return 0;
}
