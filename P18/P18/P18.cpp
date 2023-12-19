#include <stdio.h>

int main()
{
	FILE *input = fopen("welcome.txt", "r");
	FILE *output = fopen("output.txt", "w");
	char str[100];
	int cnt;

	while (!feof(input)) {
		cnt = fscanf(input, "%s", str);
		if (cnt > 0) fprintf(output, "%s\n", str);
	}
	fclose(input);
	fclose(output);
}