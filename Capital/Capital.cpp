#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char input[100],temp,cap[100];
	int l,j, count;
	j = 0;
	count = 0;
	scanf("%s", input);
	l = strlen(input);
	printf("Only Cap: ");
	for (int i = 0;i < l;i++) {
		if (input[i] > 64 && input[i] < 91) {
			printf("%c", input[i]);
			cap[i] = input[i];
			count++;
			}
		}
	printf("\nSort: ");
	for (int i = 0;i < l;i++) {
		if (cap[i] > cap[i + 1]) {
			temp = cap[i];
			cap[i + 1] = cap[i];
			cap[i] = temp;
		}
	}
	for (int i = 0;i < l;i++) {
		if (cap[i] != '\0') {
			printf("%c", cap[i]);
		}
	}
	return 0;
}