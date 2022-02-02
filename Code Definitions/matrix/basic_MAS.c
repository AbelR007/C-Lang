// Matrix Calculator for 2x2 matrix only
// ----------------------------------------------------------------
#include<stdio.h>

// Main function
void main()
{
    // Initialize the initial variables
    int a11, a12, a21, a22;
    int b11, b12, b21, b22;

    // Taking input from the user
    printf(
        "+----------------------------+\n"
        "|     MATRIX CALCULATOR      |\n"
        "+----------------------------+\n"
    );

    printf("Enter Values for Matrix -> A :\n");
    printf("1x1 = ");
    scanf("%d",&a11);

    printf("1x2 = ");
    scanf("%d",&a12);

    printf("2x1 = ");
    scanf("%d",&a21);

    printf("2x2 = ");
    scanf("%d",&a22);

    printf(
        "Matrix A = [ %d   %d ]\n"
        "           [ %d   %d ]\n"
    ,a11,a12,a21,a22);

    printf("Enter Values for Matrix -> B :\n");
    printf("1x1 = ");
    scanf("%d",&b11);

    printf("1x2 = ");
    scanf("%d",&b12);

    printf("2x1 = ");
    scanf("%d",&b21);

    printf("2x2 = ");
    scanf("%d",&b22);

    printf(
        "Matrix B = [ %d   %d ]\n"
        "           [ %d   %d ]\n"
    ,b11,b12,b21,b22);

    // Initialize the output variables
    // Multiplication
    int mul11 = (a11*b11)+(a12*b21);
    int mul12 = (a11*b12)+(a12*b22);
    int mul21 = (a21*b11)+(a22*b21);
    int mul22 = (a21*b12)+(a22*b22);
    // Addition
    int add11 = a11 + b11;
    int add12 = a12 + b12;
    int add21 = a21 + b21;
    int add22 = a22 + b22;
    // Subtraction
    int sub11 = a11 - b11;
    int sub12 = a12 - b12;
    int sub21 = a21 - b21;
    int sub22 = a22 - b22;

    // Printing out the values
    printf(
        "+--------------------------------------+\n"
        "|           MATRIX ADDITION            |\n"
        "+--------------------------------------+\n"
        "| [ %2d  %2d ] X [ %2d  %2d ] = [ %2d  %2d ] |\n"
        "| [ %2d  %2d ]   [ %2d  %2d ]   [ %2d  %2d ] |\n"
        "+--------------------------------------+\n"
    ,a11,a12,b11,b12,add11,add22,a21,a21,b21,b22,add21,add22);

    printf(
        "+--------------------------------------+\n"
        "|          MATRIX SUBTRACTION          |\n"
        "+--------------------------------------+\n"
        "| [ %2d  %2d ] X [ %2d  %2d ] = [ %2d  %2d ] |\n"
        "| [ %2d  %2d ]   [ %2d  %2d ]   [ %2d  %2d ] |\n"
        "+--------------------------------------+\n"
    ,a11,a12,b11,b12,sub11,sub22,a21,a21,b21,b22,sub21,sub22);

    printf(
        "+--------------------------------------+\n"
        "|       MATRIX MULTIPLICATION          |\n"
        "+--------------------------------------+\n"
        "| [ %2d  %2d ] X [ %2d  %2d ] = [ %2d  %2d ] |\n"
        "| [ %2d  %2d ]   [ %2d  %2d ]   [ %2d  %2d ] |\n"
        "+--------------------------------------+\n"
    ,a11,a12,b11,b12,mul11,mul22,a21,a21,b21,b22,mul21,mul22);

}
// ----------------------------------------------------------------
// Code by Abel Roy //
