// 2.WAP to show the use of predefined functions.

#include <stdio.h>
#include <graphics.h> 
#include <conio.h>
int main()
{
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");
    circle(100, 200, 70);
    rectangle(220, 100, 350, 300);
    ellipse(500, 200, 0, 360, 100, 120);
    getch();
    0;
}