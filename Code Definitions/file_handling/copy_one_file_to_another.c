/* Copy one file to another file */
// =================================================
#include<stdio.h>
void main()
{
    char a[100]; // 100 stands for number of content to be read

    // File Handling
    FILE *fin = fopen("first_file.txt","r"); // open first file
    FILE *fout = fopen("second_file.txt","w"); // open second file
        for (;fscanf(fin,"%s",&a) > 0;) // scan first file and loop through content
            fprintf(fout,"%s",a); // write content onto second file

    // Closing Files
    fclose(fin);
    fclose(fout);
}
// ================================================
/* Code by Abel Roy */
