/*      Write a program to make a string that contains two strings like :

	string 1 : EMBEDDED
	string 2 : systems
	result string : EsMyBsEtDeDmEsD
*/
#include <stdio.h>
#include <stdlib.h>

void main() {
	char str1[100];
	char str2[100];
	char *temp = calloc(1, sizeof(str1) + sizeof(str2));
	int i=0,j=0,k=0;

	printf ("Enter the first str1 : ");
	scanf ("%[^\n]", &str1);
	printf ("Enter the first str2 : ");
	scanf ("%s", &str2);
	while (str1[i] != '\0' || str2[j] != '\0') {
		if (str1[i] != '\0') {
		        temp[k] = str1[i];
			i++;
			k++;
		} 
		if (str2[j] != '\0') {
			temp[k] = str2[j];
			j++;
			k++;
		}
	}
	printf ("The combined string is : %s\n", temp);
}
