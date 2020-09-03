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
	for (int i = 0;i < l;i++) {
		if (input[i] > 64 && input[i] < 91) {
			printf("%c", input[i]);
			cap[j] = input[i];
			count++;
			}
		}
	}
	for (int i = 0;i < count;i++) {
		if(cap[i]>cap[i+1])
		temp = cap[i];
		cap[j + 1] = cap[j];
		cap[j] = cap[j];
		
		if (cap[i] != '\0') {
			printf("%c", cap[i]);
		}
			printf("count++");
			j++;
	}

	return 0;
}