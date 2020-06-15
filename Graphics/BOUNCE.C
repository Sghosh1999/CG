#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
void main() {
  int gd = DETECT, gm, i = 0, flag = 0;
  initgraph(&gd, &gm, "C:\\turboc3\\BGI");
  setcolor(RED);
  while(!kbhit()) {
     setfillstyle(BKSLASH_FILL, RED);
     circle(300, 100 + i, 40);
     floodfill(300, 100 + i, RED);
     if (flag == 0)
       i++;
     if (flag == 1)
       i--;
     if (i == getmaxy() - 200)
      flag = 1;
     if (i == 0)
       flag = 0;
     delay(5);
     cleardevice();
  }
  getch();
  closegraph();
}