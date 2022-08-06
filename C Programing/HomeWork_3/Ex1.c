/*
 ============================================================================
 Name        : EX1.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>


int main() {
	float First_Mat[2][2];
	float Second_Mat[2][2];
	float Sum_Mat[2][2];

	printf("Enter the elements of 1st matrix\n");
	for (int i=0;i<2;i++){
		for(int k=0;k<2;k++){
			printf("Enter a%d%d: ",i+1,k+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&First_Mat[i][k]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");

	for (int i=0;i<2;i++){
		for(int k=0;k<2;k++){
			printf("Enter a%d%d: ",i+1,k+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&Second_Mat[i][k]);

		}
	}
	printf("Sum of matrix\n");

	for (int i=0;i<2;i++){
		for(int k=0;k<2;k++){
			Sum_Mat[i][k]=First_Mat[i][k]+Second_Mat[i][k];
			printf("%.1f\t",Sum_Mat[i][k]);
		}
		printf("\n");
	}


	return 0;
}
