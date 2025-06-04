// 8. WAP to draw a line using Bresenham’s Line drawing algorithm.  

#include<stdio.h>  
#include<conio.h>  
#include<graphics.h> 
#include<math.h>
int main() 
{ 
    float dy,dx,x,y,x1,x2,y1,y2,p,gdriver = DETECT, gmode;     
    initgraph(&gdriver, &gmode, (char*)"C:\\MinGW\\lib\\libbgi.a");     
    printf("\n Enter x1, y1 co-ordinate and x2, y2 co-ordinate : ");     
    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);   
    dx=abs(x2-x1);     
    dy=abs(y2-y1);     
    if(x1<x2)
    {     

    }  
    if(x1>x2) 
    {         
        x=x2;         
        y=y2;  
    }  
    p=(2*dy)-dx;  
    while(x<=x1 || x<=x2)
    {         
        if(p<0)
        {             
            x=x+1;             
            y=y;             
        } 
        else
        {             
            y=y+1;  
            p=p+(2*dy);         
            x=x+1;             
            p=p+(2*dy)-(2*dx);  
            x=x1;         
        }  
        putpixel((int)x,(int)y,WHITE);  
    }     
    getch();             
    closegraph();     
    return 0


}