#include <stdio.h>

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

void main() {
	char str[100]="\0";
	printf ("Enter the string: ");
	scanf ("%[^\n]", &str);
	printf ("The enterd string count is: %d\n",string_count(str));
	printf ("The enterd string count is: %d\n",string_length(str));
}
