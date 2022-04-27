/* Printing text into files */
// =================================================================
#include<stdio.h>
#include<conio.h>
// #include<string.h> // Not necessary

void main(){
    int a = 10;
    FILE *fout = fopen("printing_into_file.txt", "w");
    fprintf(fout, "Hello, world!");
    fclose(fout);
}
// =========================================================================
/* Code by Abel Roy */
