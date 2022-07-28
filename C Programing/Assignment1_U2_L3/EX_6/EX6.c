/*Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
 ============================================================================
 Name        : E6.c
 Author      : Thomas Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Assignment1_U2_L3_E6
 ============================================================================
 */

#include <stdio.h>


int main() {
	float a,b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b);
	printf("After swapping, value of a = %f",b);
	printf("\nAfter swapping, value of b = %f",a);

	return 0;
}
