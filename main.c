// main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"
#define GCC "gcc -o out"
int main(void)
{
	char ch, ch1[100],command[100];
	int count = 0;
	list_files();
	FILE *fptr = fopen("list.txt", "r");
	while ((ch = fgetc(fptr)) != EOF) {
		ch1[count] = ch;
		count++;
	}
	printf("\nlist of files to compile %s",ch1);
	snprintf(command,sizeof(command), "%s %s",GCC,ch1);
	printf("\nrunning : %s \n##output## \n",command);
	system(command);
	system("rm list.txt");
	system("./out");
	return 0;
}
