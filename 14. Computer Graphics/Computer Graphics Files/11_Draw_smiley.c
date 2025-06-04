#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); 
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(300, 200, 80);
    floodfill(300, 200, YELLOW);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    
    circle(265, 170, 15);
    floodfill(265, 170, BLACK);

    circle(330, 170, 15);
    floodfill(335, 170, BLACK);

    setcolor(BLACK);
    arc(300, 200, 200, 340, 50);
    getch();
    closegraph();
    return 0;
}