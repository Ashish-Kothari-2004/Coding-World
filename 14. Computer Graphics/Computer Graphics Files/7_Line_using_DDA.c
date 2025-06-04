// 7. Write a program to draw a line using DDA.

#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <conio.h> 
int main()
{
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, (char *)"C:\\MinGW\\lib\\libbgi.a");
    int x1, y1, x2, y2, dx, dy, steps, xinc, yinc;
    printf("Enter value of x1,y1 and x2,y2");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    dx = x2 - x1;
    dy =  y2 - y1;
    if (abs(dx) > abs(dy))
    {
        steps =  abs(dx);
    }
    else
    {
        steps = abs(dy);
    }
    xinc = dx / steps;
    yinc = dy / steps;
    for ( int i = 0; i < steps; i++)
    {
        putpixel(x1, y1, 3);
        x1 = x1 + xinc;
        y1 = y1 + yinc;
        delay(100);
    }
    getch();
    closegraph();
    return 0;
}