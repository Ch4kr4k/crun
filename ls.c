// ls
#include <stdio.h>
#include <dirent.h>
  
extern int list_files()
{
    struct dirent *list_of_files;
	FILE *fptr = fopen("list.txt", "w");
    DIR *dr = opendir(".");
  
    if (dr == NULL)
    {
        printf("Could not open current directory" );
        return 0;
    }

    while ((list_of_files = readdir(dr)) != NULL)
	{
            printf("%s\n", list_of_files -> d_name);
			fprintf(fptr,"%s\n", list_of_files -> d_name);
			
	}
	fclose(fptr);
    closedir(dr);
    return 0;
}