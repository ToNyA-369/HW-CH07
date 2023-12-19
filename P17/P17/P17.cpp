#include <stdio.h>

#define MAX 80

int main()
{
	FILE *fptr = fopen("output.txt", "r");
	char str[MAX];
	int bytes;

	while (!feof(fptr)) {
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);
	}
	fclose(fptr);
}