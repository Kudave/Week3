#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int Hour, minute;
	printf("Enter Hours:");
	scanf("%d", &Hour);
	printf("Enter Minutes:");
	scanf("%d", &minute);
	Hour += (minute / 60) - 1;
	if (minute % 60 > 0)
		Hour += 1;
	printf("Total price:%d", Hour*30);

	



}