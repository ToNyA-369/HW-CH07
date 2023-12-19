#include <stdio.h>
#include <conio.h>

#define ENTER 13
#define MAX 80

int main()
{
	FILE *fptr = fopen("output.txt", "a");
	char str[MAX], buf; int cnt = 0;
	printf("Put the string, ENTER to end.\n");
	while ((buf = getche()) != ENTER && cnt < MAX)
		str[cnt++] = buf;
	putc('\n', fptr);
	fwrite(str, sizeof(char), cnt, fptr); fclose(fptr);
	printf("Finished the file adding.\n");
}