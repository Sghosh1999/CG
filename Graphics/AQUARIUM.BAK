#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
void pebbles() {
  ellipse(140, 380, 0, 360, 40, 20);
  circle(190, 390, 10);
  circle(220, 380, 20);
  ellipse(270, 380, 0, 360, 30, 20);
  ellipse(340, 380, 0, 360, 40, 20);
  ellipse(400, 390, 0, 360, 20, 10);
  ellipse(450, 380, 0, 360, 30, 20);
}
void tap() {
 rectangle(100, 250, 150, 350);
 rectangle(150, 280, 160, 290);
 rectangle(160, 240, 170, 290);
}
void water(int j) {
      circle(165, 220 - j, 8);
      circle(165, 180 - j, 5);
}
void fish1(int i) {
  line(230 + i, 150, 270 + i, 160);
  line(230 + i, 170, 270 + i, 160);
  line(180 + i, 150, 230 + i, 170);
  line(180 + i, 170, 230 + i, 150);
  line(180 + i, 150, 180 + i, 170);
  circle(250 + i, 160, 2);
}
void fish2(int k) {
  arc(400 - k, 250, 90, 270, 20);
  line(400 - k, 230, 450 - k, 265);
  line(400 - k, 270, 450 - k, 235);
  line(450 - k, 235, 450 - k, 265);
  circle(390 - k, 250, 3);
  arc(380 - k, 250, 310, 60, 20);
}
void main() {
   int gd = DETECT, gm;
   int j = 0, i = 0, k = 0;
   initgraph(&gd, &gm, "C:\\turboc3\\BGI");

   while(!kbhit()) {
   rectangle(100, 100, 500, 400); // home rect
   //home roof
   line(100, 60, 500, 60);
   line(100, 60, 50, 100);
   line(50, 100, 100, 100);
   line(500, 60, 550, 100);
   line(500, 100, 550, 100);
   // home roof ends

   // pebbles
   pebbles();
   // pebbles ends

   // tap
   tap();
   // tap ends

   // water
   water(j);
   if (j == 70)
     j = 0;
   j = j + 1;
   // water ends

   // fish1
   fish1(i);
   if (i == 220)
    i = 0;
   i = i + 1;
   // fish1 ends

   // fish2
   fish2(k);
   if (k == 180)
     k = 0;
   k = k + 1;
   // fish2 ends

   delay(20);
   cleardevice();
   }
   getch();
   closegraph();
}