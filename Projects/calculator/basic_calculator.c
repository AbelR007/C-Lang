// Basic Mathematical Calculator
// ----------------------------------------------------------------
// Performs Addition, Subtraction, Multiplication and Division operations

// Main Libraries
#include<stdio.h>

// Main Function
void main()
{
    // Initialize the variables
    int a,b;
    char op[10];

    printf(
        "+----------------------------+\n"
        "|     BASIC CALCULATOR       |\n"
        "+----------------------------+\n"
    );
    printf("| First value : ");
    scanf("%d",&a);

    printf("| Second value : ");
    scanf("%d",&b);

    printf("+----------------------------+\n");
    printf("| Operation : ");
    scanf("%s",op);
    // printf("This : \"%s\"",op);

    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int sq = a * a;
    int cb = a * a * a;

    if (strcmp(op,"a")==0)
    {
        printf(
            "+----------------------------+\n"
            "|         ADDITION           |\n"
            "+----------------------------+\n"
            "|      %d  +  %d  =  %d      \n"
            "+----------------------------+\n"
        ,a,b,add);
    }
    if (strcmp(op,"s")==0)
    {
        printf(
            "+----------------------------+\n"
            "|         SUBTRACTION        |\n"
            "+----------------------------+\n"
            "|      %d  -  %d  =  %d      \n"
            "+----------------------------+\n"
        ,a,b,sub);
    }
    if (strcmp(op,"m")==0)
    {
        printf(
            "+----------------------------+\n"
            "|       MULTIPLICATION       |\n"
            "+----------------------------+\n"
            "|      %d  x  %d  =  %d      \n"
            "+----------------------------+\n"
        ,a,b,mul);
    }
    if (strcmp(op,"d")==0)
    {
        printf(
            "+----------------------------+\n"
            "|          DIVISION          |\n"
            "+----------------------------+\n"
            "|      %d  /  %d  =  %d      \n"
            "+----------------------------+\n"
        ,a,b,div);
    }
    if (strcmp(op,"sq")==0)
    {
        printf(
            "+----------------------------+\n"
            "|          SQUARE            |\n"
            "+----------------------------+\n"
            "|        %d  ^  2  =  %d     \n"
            "+----------------------------+\n"
        ,a,sq);
    }
    if (strcmp(op,"cb")==0)
    {
        printf(
            "+----------------------------+\n"
            "|           CUBE             |\n"
            "+----------------------------+\n"
            "|        %d  ^  3  =  %d     \n"
            "+----------------------------+\n"
        ,a,cb);
    }
    if (strcmp(op,"all")==0)
    {
        printf(
            "+----------------------------+\n"
            "|       ALL OPERATIONS       |\n"
            "+----------------------------+\n"
            "|      %d  +  %d  =  %d      \n"
            "|      %d  -  %d  =  %d      \n"
            "|      %d  x  %d  =  %d      \n"
            "|      %d  /  %d  =  %d      \n"
            "|      %d  ^  2  =  %d      \n"
            "|      %d  ^  3  =  %d      \n"
            "+----------------------------+\n"
        ,a,b,add,a,b,sub,a,b,mul,a,b,div,a,sq,a,cb);
    }
}
