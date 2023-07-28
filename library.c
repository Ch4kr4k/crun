// library
#include <stdio.h>
#include <dirent.h>
#include <string.h>

extern int list_files()
{
    struct dirent *list_of_files;
	FILE *fptr = fopen("list.txt", "w");
    DIR *dr = opendir(".");

  
    if (dr == NULL)
    {
        printf("cannot open" );
        return 0;
    }

    while ((list_of_files = readdir(dr)) != NULL)
	{
		if (strstr(list_of_files -> d_name, ".c" ))
			fprintf(fptr,"%s ", list_of_files -> d_name);
		else
			continue;	
	}
	fclose(fptr);
    closedir(dr);
    return 0;
}

	

