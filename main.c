// main.c
#include <stdio.h>
#include "library.h"
#define GCC "C:\Users\SI0896\Downloads\test\softwares\MinGW-master\MinGW\bin>gcc.exe"
int main(void)
{
	char ch, ch1[100];
	int i=0;
	int count = 0;
	
	list_files();
	
	FILE *fptr = fopen("list.txt", "r");
	
	do{
		ch = fgetc(fptr);
		ch1[count] = ch;
		count++;
	}while(ch != EOF);

	return 0;
}
