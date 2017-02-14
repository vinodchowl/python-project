#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_count (char str[]) {
	int i;
	int count = 0;
	for (i = 0; str[i] != '\0'; i++) {
		count ++;
	}
	return count;
}

int string_length (char *str) {
	int count = 0;
	while (str[count] != '\0') {
		count ++;
	}
	return count;
}

char *string_reverse (char *str) {
	int len = strlen(str);
	char *temp = (char *)malloc(len);
	int i,j;
	for (i = len-1, j = 0; i >= 0; i--, j++) {
		temp[j] = str[i];
	}
	temp[j] = '\0';
	return temp;
}
void main() {
	char str[100]="\0";
	printf ("Enter the string: ");
	scanf ("%[^\n]", &str);
	printf ("The enterd string count is: %d\n",string_count(str));
	printf ("The enterd string reverse is: %s\n",string_reverse(str));
}
