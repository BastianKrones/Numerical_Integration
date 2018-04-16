#include <stdio.h>

int main(void)
{
    FILE *fp;

	fp = fopen("./sheet01/solution.txt", "w");
	
    fprintf(fp, "Test worked");


	fclose(fp);

	return 0;
}