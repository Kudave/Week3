#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char a[100], b[100];
	scanf("%s",&a);
	scanf("%s", &b);
	if (strlen(a) > strlen(b))
		printf("%s", a);
	else if (strlen(a) < strlen(b))
		printf("%s", b);
	else if (strlen(a) == strlen(b))
		printf("Same");
		
}