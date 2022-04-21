#include<stdio.h>
// #include<conio.h>

void horizontal_line(int val)
{
	int h;
	for (h = 1; h <= val; h++)
		printf("#");
}
void vertical_line(int val, int spaces)
{
	int v, s;
	for (v=1;v<=val;v++)
    {
        if (spaces != 0)
        {
            for(s=1;s<=spaces;s++)
                printf(" ");
        }
        printf("#\n");
    }
}
void double_vertical_line(int val, int spaces)
{
    int v, s;
    for (v=1;v<=val;v++)
    {
        printf("#");
        if (spaces != 0)
        {
            for (s=1;s<=spaces;s++)
                printf(" ");
        }
        printf("#\n");
    }
}
void drawL(int len, int bre)
{
	// gotoxy(x,y);
	vertical_line(bre,0);
	horizontal_line(len);
    printf("\n\n");
}
void drawE(int len, int bre)
{
	horizontal_line(len);
	vertical_line(bre/2,0);
	horizontal_line(len);
    vertical_line(bre/2,0);
    horizontal_line(len);
    printf("\n\n");
}
void drawT(int len, int bre)
{
	horizontal_line(len);
	vertical_line(bre, len/2);
    printf("\n\n");
}
void drawU(int len, int bre)
{
    double_vertical_line(bre,len-2);
	horizontal_line(len);
    printf("\n\n");
}
void drawS(int len, int bre)
{
    horizontal_line(len);
    vertical_line(bre/2,0);
    horizontal_line(len);
    vertical_line(bre/2,len-1);
    horizontal_line(len);
    printf("\n\n");
}
void drawC(int len,int bre)
{
    horizontal_line(len);
    vertical_line(bre,0);
    horizontal_line(len);
    printf("\n\n");
}
void drawO(int len, int bre)
{
    horizontal_line(len);
    double_vertical_line(bre,len-2);
    horizontal_line(len);
    printf("\n\n");
}
void drawF(int len, int bre)
{
    horizontal_line(len);
    vertical_line(bre/2,0);
    horizontal_line(len/2);
    vertical_line(bre/2,0);
    printf("\n\n");
}

// Main function
void main()
{
	// clrscr();
	int len = 5, bre = 5;
	drawL(len,bre);
    drawE(len,bre);
    drawT(len,bre);
    drawU(len,bre);
    drawS(len,bre);
    drawC(len,bre);
    drawO(len,bre);
    drawF(len,bre);
    drawF(len,bre);
    drawE(len,bre);
    drawE(len,bre);
	getchar();
}
