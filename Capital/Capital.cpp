#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char input[100],temp,cap[100];
	int l,j, count;
	j = 0;
	count = 0;
	scanf("%[^\n]s", input);
	l = strlen(input);
	printf("Only Cap: ");
	count = 0;
		for (int i = 0;i < l;i++) {
			if (input[i] > 64 && input[i] < 91) {
				printf("%c", input[i]);
				cap[count] = input[i];
				count++;
			}
	}
	printf("\nSort Method: ");
	for (int j = 0;j < l - 1;j++) {
		for (int i = j+1;i < l;i++) {
			if (cap[j] > cap[i] && cap[j] != '\0' && cap[i] != '\0') {
				temp = cap[j];
				cap[j] = cap[i];
				cap[i] = temp;
				printf("%c Change with %c \n", cap[j], cap[i]);
			}
		}
	}
	printf("\n\n The Resualt after sorting is :");
	for (int i = 0;i < l;i++) {
		if(cap[i] != '\0'&& cap[i] > 64 && cap[i] < 91) {
			printf("%c", cap[i]);
		}
	}
	return 0;
}