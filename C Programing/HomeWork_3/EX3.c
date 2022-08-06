/*
 ============================================================================
 Name        : EX3.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>

int main() {
	int Mat[100][100];
	int row,col;
	printf("Enter rows and columns of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&row,&col);
	printf("Enter elements of matrix:\n");

	for(int i=0;i<row;i++){
		for(int k=0;k<col;k++){
			printf("Enter element of a%d%d: ",i+1,k+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&Mat[i][k]);
		}
	}
	printf("Entered Matrix:\n");
	for(int i=0;i<row;i++){
		for(int k=0;k<col;k++){
			printf("%d\t ",Mat[i][k]);
		}
		printf("\n");
	}
	printf("Transpose of Matrix:\n");
	for(int k=0;k<col;k++){
		for(int i=0;i<row;i++ ){
			printf("%d\t ",Mat[i][k]);
		}
		printf("\n");
	}
	return 0;
}
