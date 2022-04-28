// GotoXY Function Basics
// ----------------------------------------------------------------
#include<stdio.h>
#include<conio.h>

void main()
{
   int x, y;

   x = 10;
   y = 10;

   printf("Previous position of the cursor!");
   gotoxy(x, y);
   printf("C program to change cursor position.");

   getchar();
}
// ----------------------------------------------------------------
// Warning : Code may not work, since, it works properly only on Turbo C++ IDE
// ----------------------------------------------------------------
// Code by Abel Roy //
