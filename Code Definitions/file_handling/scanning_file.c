/* Scanning a file and printing it on output screen */
// =======================================================
#include<stdio.h>
void main(){
    // Appending the file
    int a = 10;
    FILE *fout = fopen("scanning_file.txt","w");
    for (a=1;a<=100;a++){
        if (a%20 == 0)
            fprintf(fout,"%4d\n",a);
        else
            fprintf(fout,"%4d",a);
    }
    fclose(fout);

    // Scanning the file
    FILE *fin = fopen("scanning_file.txt","r");
        for (;fscanf(fin,"%d",&a) > 0;)
            printf("%3d",a);
    fclose(fin);
}
// =================================================================
/* Code by Abel Roy */
