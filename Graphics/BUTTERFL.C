#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\turboc3\\BGI");
   ellipse(300, 200, 0, 360, 20, 100); // body

   // left upper wing starts
   line(282, 150, 180, 130);
   arc(180, 150, 90, 270, 20);
   line(180, 170, 280, 160);
   // left upper wing ends

   // left middle wing starts
   arc(180, 190, 90, 270, 20);
   line(180, 210, 280, 170);
   // left middle wing ends

   // left bottom wing starts
   arc(180, 230, 90, 270, 20);
   line(180, 250, 280, 182);
   // left bottom wing ends

   // right upper wing starts
   line(318, 150, 420, 130);
   arc(420, 150, 270, 90, 20);
   line(420, 170, 320, 160);
   // right upper wing ends

   // right middle wing starts
   arc(420, 190, 270, 90, 20);
   line(420, 210, 320, 170);
   // right middle wing ends

   // right lower wing starts
   arc(420, 230, 270, 90, 20);
   line(420, 250, 320, 182);
   // right lower wing ends

   // left antenna starts
    ellipse(262, 80, 320, 120, 40, 40);
    circle(242, 55, 8);
   // left antenna ends

   // right antenna starts
   ellipse(338, 80, 60, 220, 40, 40);
   circle(358, 55, 8);
   // right antenna ends

   // upper body cross
   arc(300, 155, 180, 0, 18);
   // middle body cross
   arc(300, 185, 180, 0, 20);
   // lower body cross
   arc(300, 215, 180, 0, 20);

   getch();
   closegraph();
}