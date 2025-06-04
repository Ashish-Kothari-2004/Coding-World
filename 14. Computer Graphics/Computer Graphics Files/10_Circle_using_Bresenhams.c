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
void bresenhamCircle(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    drawCircle(xc, yc, x, y);
    while (y >= x)
    {
        x++;
        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
        {
            d = d + 4 * x + 6;
        }
        drawCircle(xc, yc, x, y);
    }

    int main()
    {
        int gd = DETECT, gm;
        initgraph(&gd, &gm, "");
        int xc, yc, r;
        printf("Enter center coordinates (xc, yc): ");   
        scanf("%d %d", &xc, &yc);    
        printf("Enter radius: ");  
        scanf("%d", &r);  
        bresenhamCircle(xc, yc, r);  
        getch();     
        closegraph();     
        return 0;
    }