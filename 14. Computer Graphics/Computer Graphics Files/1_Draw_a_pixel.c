// 1. Write a C program to plot a pixel on a screen.

#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main()
{
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");
    putpixel(100, 250, RED);
    getch();
    0;
}