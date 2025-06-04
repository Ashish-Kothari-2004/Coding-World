// 3. WAP to make a rainbow using arc().

#include <stdio.h>
#include <graphics.h> 
#include <conio.h>
int main()
{
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");
    for (int i = 10; i <= 200; i++)
    {
        arc(getmaxx() / 2, getmaxy() / 2, 0, 180, i);
        delay(100);
    }
    getch();
    closegraph();
    return 0;
}