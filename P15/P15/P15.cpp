#include <stdio.h>

int main()
{
	FILE *f1ptr, *f2ptr;
	char buf;
	f1ptr = fopen("welcome.txt", "r");
	f2ptr = fopen("output.txt", "w");
	
	if ((f1ptr != NULL) && (f2ptr != NULL)) {
		while ((buf = getc(f1ptr)) != EOF)
			putc(buf, f2ptr);
		fclose(f1ptr); fclose(f2ptr);
		printf("The files are finished copy.\n");
	}
	else printf("Fail to open file.\n");
}