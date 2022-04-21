// Making a Gun that fires using "gotoxy"
// =================================================================
#include<stdio.h>
#include<windows.h>

// GotoXY function
COORD coord={0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

// Gun function
void gun(int x,int y, int flen)
{
    gotoxy(x+2,y+5);
    for (int i = 0; i <= 10; i++)
    {
        printf(">>", i);
    }
    printf("\n");
    gotoxy(x+2,y+7);
    for (int i = 0; i <= 10; i++)
    {
        printf(">>", i);
    }
    for (int fire = 1; fire <= flen; fire++)
    {
        for(int de=1; de <= 10000; de++);
            for (int d = 1; d <= 1000; d++)
        gotoxy(x+2+fire,y+6);
        for (int sp=1; sp <=flen; sp++)
        {
            printf(" ");
        }
        printf("Boom.");
    }
}

// Main function
void main()
{
    gun(1,1, 40);
    getchar();
}
// ======================================================================
// Code by Abel Roy //
