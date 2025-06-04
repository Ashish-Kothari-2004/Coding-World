// WAP to plot a graph using put pixel.  

#include <stdio.h>
#include <graphics.h> 
#include <conio.h>
int main()
{
    int x = 100, y = 100, i;
    int  gdriver = DETECT,  gmode;
    initgraph(&gdriver, &gmode, "");
    for (i = 0; i <= 200; i++)
    {
        putpixel(x + i, y, WHITE);
    }
    for (i = 0; i <= 200; i++)
    {
        putpixel(x, y + i, WHITE);
    }
    for (i = 0; i <= 200; i++)
    {
        putpixel(x + i, y + i, WHITE);
    }
    getch();
    closegraph();
}