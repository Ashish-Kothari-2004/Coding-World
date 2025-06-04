// 5. WAP to draw a moving vehicle.

#include <stdio.h>
#include <graphics.h> 
#include <conio.h>
int main()
{
    int i;
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");
    setbkcolor(LIGHTGRAY);
    cleardevice();
    for (i = 10; i <= 400; i += 10)
    {
        cleardevice();
        setcolor(BLACK);
        rectangle(50 + i, 100, 200 + i, 250);
        rectangle(205 + i, 150, 330 + i, 250);
        setfillstyle(SOLID_FILL, RED);
        floodfill(55 + i, 105, BLACK);
        floodfill(210 + i, 155, BLACK);

        setcolor(DARKGRAY);    
        circle(125 + i, 280, 30);
        circle(275 + i, 280, 30);         
        setfillstyle(SOLID_FILL, BLACK);           
        floodfill(125 + i, 280, DARKGRAY);         
        floodfill(275 + i, 280, DARKGRAY);         
        delay(50);
    }
    getch();
    closegraph();
    return 0;
}
