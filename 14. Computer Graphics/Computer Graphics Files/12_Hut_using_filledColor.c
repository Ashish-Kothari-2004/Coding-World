// 12. WAP to draw a hut using filled colors.   
 
#include <graphics.h>  
#include <conio.h>  
int main() 
{    
    int gd = DETECT, gm;     
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); 

    setcolor(WHITE); 
    rectangle(100, 200, 300, 300);
    line(100, 200, 200, 100);
    line(200, 12, 100, 300, 200);  

    rectangle(170, 250, 220, 300);     
    setfillstyle(SOLID_FILL, BROWN);     
    floodfill(101, 201, WHITE); 

    setfillstyle(SOLID_FILL, RED);     
    floodfill(200, 101, WHITE);  

    setfillstyle(SOLID_FILL, BLUE);     
    floodfill(151, 251, WHITE);     
    
    getch();     
    closegraph();     
    return 0;  
}