#include <stdio.h>

int main()
{
	FILE *fptr;
	char buf;
	int cnt = 0;

	fptr = fopen("welcome.txt", "r");
	if (fptr != NULL) {
		while ((buf = getc(fptr)) != EOF) {
			printf("%c", buf);
			cnt++;
		}
		printf("\n\nThere are %d charters in this part.\n", cnt);
		fclose(fptr);
	}
	else printf("\nFail to open file.\n");
}