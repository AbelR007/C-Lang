// Printing from 1 to 100
// =================================================================
#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    int r,c, count = 0;
    FILE *f = fopen("printing_1to100.txt", "w");
    for (r=1; r<=10;r++){
        count = count + 1;
        for (c=1; c<=10;c++){
            fprintf(f,"%4d",count);
            if (c!=10)
                count = count +1;
        }
        fprintf(f,"\n");
    }
    fclose(f);
}
// =========================================================================
// Code by Abel Roy //
