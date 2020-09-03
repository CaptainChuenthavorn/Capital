#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>
#include <string.h>
int main() {
	char input[100],l;
	scanf("%s", input);
	l = strlen(input);
	for (int i = 0;i < l;i++) {
		if (input[i] > 64 && input[i] < 91) {
			printf("%c", input[i]);
		}
	}
	return 0;
}