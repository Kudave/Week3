#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num1, num2;
	printf("Enter Number1:");
	scanf("%d",&num1);
	printf("Enter Number2:");
	scanf("%d",&num2);
	if (num1 + num2 > 0) {
		if ((num1 + num2) % 2 == 0) {
			printf("Positive Even");
		}
		else if ((num1 + num2) % 2 == 1)
			printf("Positive Odd");
	}
	else if (num1 + num2 < 0) {
		if ((num1 + num2) % 2 == 0)
			printf("Negative Even");
		else if ((num1 + num2) % 2 == -1)
			printf("Negative Odd");
	}
	else if (num1 + num2 == 0)
		printf("Zero");
}