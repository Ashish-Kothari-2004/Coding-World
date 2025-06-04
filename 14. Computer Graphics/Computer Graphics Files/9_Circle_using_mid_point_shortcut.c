#include <stdio.h>  
#include <graphics.h> 
#include <conio.h>

void drawCircle(int xc, int yc, int x, int y)
{
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}

void midpointCircle(int xc, int yc, int r)
{
    int x = 0;
    int y = r;
    int p = 1 - r;
    while (x <= y)
    {
        drawCircle(xc, yc, x, y);
        x++;
        if (p < 0)
        {
            p = p + 2 * x + 1;
        }
        else
        {
            y--;
            p = p + 2 * x - 2 * y + 1;
        }
        delay(50);
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int xc, yc, r;
    printf("Enter the center coordinates (xc, yc): ");
    scanf("%d %d", &xc, &yc);
    printf("Enter the radius (r): ");
    scanf("%d", 
    midpointCircle(xc, yc, r);  
    getch();     
    closegraph();     
    return 0;
}