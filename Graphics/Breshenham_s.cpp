#include<stdio.h>
#include<graphics.h>


float abs(float x)
{
	return x>0?x:-x;
}


void Breshenham(int x1,int y1,int x2,int y2)
{
	int dx = x2 - x1;
	int dy = y2 - y1;
	int x0 = x1,y0 = y1;
	float slope;
	int p;
	if(dx == 0)
		slope = 999;
	else
		slope = (float)dy/(float)dx;
	//printf("%f:%d,%d",slope,dy,dx);
	if((0 <= slope && slope <= 1) || (slope<=0 && slope>=-1))
	{
		p = 2*abs(dy)-abs(dx);
		while(x0!=x2 || y0!=y2)
		{
			delay(5);
			//printf("%d,%d\n",x0,y0);
			putpixel(x0,y0,WHITE);
			if(p<0)
			{
				if(dx<0)
					x0 = x0-1;
				else
					x0 = x0+1;
				p = p + 2*abs(dy);
			}
			else{
				if(dy<0)
					y0 = y0-1;
				else
					y0 = y0+1;
				if(dx<0)
					x0 = x0-1;
				else
					x0 = x0+1;
				p = p + 2*abs(dy) - 2*abs(dx);
			}
		}	
	}
	else{
		p = 2*abs(dx)-abs(dy);
		while(x0!=x2 || y0!=y2)
		{
			//printf("%d,%d\n",x0,y0);
			putpixel(x0,y0,WHITE);
			if(p<0)
			{
				if(dy<0)
					y0 = y0-1;
				else
					y0 = y0+1;
				p = p + 2*abs(dx);
			}
			else{
				if(dy<0)
					y0 = y0-1;
				else
					y0 = y0+1;
				if(dx<0)
					x0 = x0-1;
				else
					x0 = x0+1;
				p = p + 2*abs(dx)- 2*abs(dy);
			}
		}
	}
}



void Breshenham_dash(int x1,int y1,int x2,int y2,int width)
{
	int dx = x2 - x1;
	int dy = y2 - y1;
	int x0 = x1,y0 = y1;
	float slope;
	int p,i=0;
	if(dx == 0)
		slope = 999;
	else
		slope = abs((float)dy/(float)dx);
	if((0 <= slope && slope <= 1) || (slope<=0 && slope>=-1))
	{
		p = 2*abs(dy)-abs(dx);
		while(x0!=x2 || y0!=y2)
		{
			delay(5);
			//printf("%d,%d\n",x0,y0);
			if(i%(width+4) > width)
				putpixel(x0,y0,BLACK);
			else
				putpixel(x0,y0,WHITE);
			if(p<0)
			{
				if(dx<0)
					x0 = x0-1;
				else
					x0 = x0+1;
				p = p + 2*abs(dy);
			}
			else{
				if(dy<0)
					y0 = y0-1;
				else
					y0 = y0+1;
				if(dx<0)
					x0 = x0-1;
				else
					x0 = x0+1;
				p = p + 2*abs(dy) - 2*abs(dx);
			}
			i++;
		}	
	}
	else{
		p = 2*abs(dx)-abs(dy);
		while(x0!=x2 || y0!=y2)
		{
			//printf("%d,%d\n",x0,y0);
			if(i%(width+4) > width)
				putpixel(x0,y0,BLACK);
			else
				putpixel(x0,y0,WHITE);
			if(p<0)
			{
				if(dy<0)
					y0 = y0-1;
				else
					y0 = y0+1;
				p = p + 2*abs(dx);
			}
			else{
				if(dy<0)
					y0 = y0-1;
				else
					y0 = y0+1;
				if(dx<0)
					x0 = x0-1;
				else
					x0 = x0+1;
				p = p + 2*abs(dx)- 2*abs(dy);
			}
			i++;
		}
	}
}





void Breshenham_multicolor(int x1,int y1,int x2,int y2)
{
	int arr[] = {WHITE,BLUE,RED,MAGENTA,BROWN,LIGHTGRAY,YELLOW,GREEN,CYAN};
	int temp_x,temp_y;	
	int dx = x2 - x1;
	int dy = y2 - y1;
	int p;
	int x0 = x1,y0 = y1;
	int slope;
	if(dx == 0)
		slope = 999;
	else
		slope = abs(dy/dx);
	int i=0;
	if((0 <= slope && slope <= 1) || (slope<=0 && slope>=-1))
	{
		p = 2*abs(dy)-abs(dx);
		while(x0!=x2 || y0!=y2)
		{
			delay(5);
			//printf("%d,%d\n",x0,y0);
			putpixel(x0,y0,arr[i%9]);
			if(p<0)
			{
				if(dx<0)
					x0 = x0-1;
				else
					x0 = x0+1;
				p = p + 2*abs(dy);
			}
			else{
				if(dy<0)
					y0 = y0-1;
				else
					y0 = y0+1;
				if(dx<0)
					x0 = x0-1;
				else
					x0 = x0+1;
				p = p + 2*abs(dy) - 2*abs(dx);
			}
			i++;
		}	
	}
	else{
		p = 2*abs(dx)-abs(dy);
		while(x0!=x2 || y0!=y2)
		{
			//printf("%d,%d\n",x0,y0);
			putpixel(x0,y0,arr[i%9]);
			if(p<0)
			{
				if(dy<0)
					y0 = y0-1;
				else
					y0 = y0+1;
				p = p + 2*abs(dx);
			}
			else{
				if(dy<0)
					y0 = y0-1;
				else
					y0 = y0+1;
				if(dx<0)
					x0 = x0-1;
				else
					x0 = x0+1;
				p = p + 2*abs(dx)- 2*abs(dy);
			}
			i++;
		}
	}
}


void square(int x1,int y1,int x2,int y2)
{
	Breshenham(x1,y1,x1,y2);
	Breshenham(x1,y2,x2,y2);
	Breshenham(x1,y1,x2,y1);
	Breshenham(x2,y1,x2,y2);
}


void triangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
	Breshenham(x1,y1,x2,y2);
	Breshenham(x2,y2,x3,y3);
	Breshenham(x1,y1,x3,y3);
}






int main(){
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int x0,y0,x1,y1;
	//printf("Enter the points::");
	//scanf("%d%d%d%d",&x0,&y0,&x1,&y1);
	//Breshenham(x0,y0,x1,y1);
	//Breshenham_multicolor(x0,y0,x1,y1);
	//Breshenham_dash(300,200,500,50,11);
	//shapes
	//square(400,400,100,100);
	//triangle(100,200,100,400,300,400);
	//square(100,100,200,400);
	//dig 1 
	/*square(100,100,400,400);
	Breshenham(200,100,200,400);
	Breshenham(300,100,300,400);
	Breshenham(100,200,400,200);
	Breshenham(100,300,400,300);
	outtextxy(150,150,"1");
	outtextxy(350,350,"9");
	outtextxy(250,250,"5");
	outtextxy(150,250,"4");
	outtextxy(350,250,"6");
	outtextxy(150,350,"7");
	outtextxy(250,150,"2");
	outtextxy(250,350,"8");
	outtextxy(350,150,"3");*/
	//dig 2
	square(300,50,400,550);
	square(200,150,500,250);
	square(100,250,600,350);
	square(200,350,500,450);
	Breshenham(200,250,200,350);
	Breshenham(500,250,500,350);
	outtextxy(350,100,"2");
	outtextxy(250,200,"1");
	outtextxy(450,200,"3");
	outtextxy(550,300,"6");
	outtextxy(150,300,"4");
	outtextxy(350,300,"5");
	outtextxy(250,400,"7");
	outtextxy(450,400,"9");
	outtextxy(350,500,"8");
	getch();
	closegraph();
	return 0;
}
