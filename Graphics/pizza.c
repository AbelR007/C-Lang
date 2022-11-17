#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main(){
	// Input
	int r, slice = 45;
	int radius = 200, stangle = 180, endangle = 225, midx, midy;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	// Main Code
	midx = getmaxx() / 2;
	midy = getmaxy() / 2;

	/* set fill style and draw a pie slice */
	for (r = slice;r <= 360; r=r+slice){
		delay(slice*5);
		setfillstyle(r/45, r/45);
		pieslice(midx+100, midy, r, r+slice, radius);
	}
	settextstyle(0, 0, 5);
	outtextxy(midx-310, midy-10, "Pizza");
	/*for (r = 0; r< rad; r++){
		arc(maxx, maxy, r, r+10, r*10);
	}*/

	// Output
	getch();
	closegraph();
}
