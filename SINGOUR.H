#include<graphics.h>
#include<dos.h>
void load()
{ int gd=DETECT,gm;
initgraph(&gd,&gm,"//turboc3//bgi");

outtextxy(210,160,"loading please wait");
for(int i=0;i<170;i++)
{delay(50);
bar(200+i,190,200+i,194);
}
settextstyle(1,0,1);
outtextxy(170,250,"@copyright prabhakar singour");
getch();
closegraph();
}
