#include <stdio.h> 
#include <graphics.h>
#include <conio.h>
int main()
{
    x, y, radius;
    int int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");
    x = getmaxx() / 2;
    y = getmaxy() / 2;
    radius = 20;
    circle(x, y, radius);
    for (radius = 10; radius <= 200; radius += 10)
    {
        setcolor(radius / 10);
        circle(x, y, radius);
        delay(100);
    }
    getch();
    closegraph();
    return 0;
}