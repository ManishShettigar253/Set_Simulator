#include<conio.h>
#include<graphics.h>
void main()
{
int total,e,h,f,fe,fe1,fh,fh1,eh,eh1,all,n,fonly,eonly,honly,ebh,hbe;
char totalstr[10],estr[10],hstr[10],fstr[10],festr[10],fhstr[10],ehstr[10],allstr[10],fe1str[10],fh1str[10],eh1str[10],fonlystr[10],eonlystr[10],honlystr[10],ebhstr[10],hbestr[10];
int gd=DETECT, gm;
initgraph(&gd, &gm, "c:\\turboc3\\bgi");

setbkcolor(WHITE);
printf("\033[0;35m");
printf(" Enter total number of student:");
scanf("%d",&total);
printf(" Enter number of student study French:");
scanf("%d",&f);
printf(" Enter number of student study English:");
scanf("%d",&e);
printf(" Enter number of student study Hindi:");
scanf("%d",&h);
printf(" Enter number of student study both french and English:");
scanf("%d",&fe1);
printf(" Enter number of student study both french and Hindi:");
scanf("%d",&fh1);
printf(" Enter number of student study both English and Hindi:");
scanf("%d",&eh1);
printf(" Enter number of student study all three language:");
scanf("%d",&all);

printf("\n    1.All set \n    2.French alone \n    3.Hindi alone \n    4.English alone\n    5.English but not hindi\n    6.Hindi but not french");
printf("\n    Enter your choice: ");
printf("\033[0m");
scanf("%d",&n);
eh=eh1-all;
fe=fe1-all;
fh=fh1-all;
fonly=f-fh-all-fe;
honly=h-eh-all-fh;
eonly=e-fe-all-eh;
ebh=eonly+fe;
hbe=honly+eh;

sprintf(totalstr,"%d",total);
sprintf(estr,"%d",e);
sprintf(hstr,"%d",h);
sprintf(fstr,"%d",f);
sprintf(festr,"%d",fe);
sprintf(fhstr,"%d",fh);
sprintf(ehstr,"%d",eh);
sprintf(allstr,"%d",all);
sprintf(fe1str,"%d",fe1);
sprintf(fh1str,"%d",fh1);
sprintf(eh1str,"%d",eh1);
sprintf(fonlystr,"%d",fonly);
sprintf(eonlystr,"%d",eonly);
sprintf(honlystr,"%d",honly);
sprintf(ebhstr,"%d",ebh);
sprintf(hbestr,"%d",hbe);

if(n==1)
{


setbkcolor(WHITE);
setfillstyle(1,CYAN);
circle(490,250,50);
floodfill(500,250 ,15);

setfillstyle(1,GREEN);
circle(420, 250, 50);
floodfill(420,250 ,15);

setfillstyle(1,YELLOW);
circle(460, 300,50);
floodfill(470,300 ,15);
setcolor(RED);

rectangle(320,150,600, 380);

outtextxy(390,180,"French");
outtextxy(480,180,"English");
outtextxy(445,360,"Hindi");
//outtextxy(550,165,"U");
outtextxy(550,165,totalstr);
outtextxy(455,320,hstr);
outtextxy(400,240,fstr);
outtextxy(500,240,estr);
outtextxy(450,260,allstr);
outtextxy(420,280,fhstr);
outtextxy(475,280,ehstr);
outtextxy(451,235,festr);

line(453,175,453,230);
line(360,290,420,290);
line(490,290,550,290);

outtextxy(440,165,fe1str);
outtextxy(455,165,"-");
outtextxy(462,165,allstr);

outtextxy(325,287,fh1str);
outtextxy(341,287,"-");
outtextxy(348,287,allstr);

outtextxy(560,287,eh1str);
outtextxy(576,287,"-");
outtextxy(584,287,allstr);

outtextxy(100,280,"n(F)=");
outtextxy(150,280,fstr);

outtextxy(100,300,"n(E)=");
outtextxy(150,300,estr);

outtextxy(100,320,"n(H)=");
outtextxy(150,320,hstr);

outtextxy(70,340,"n(E intersection F)=");
outtextxy(240,340,fe1str);

outtextxy(70,360,"n(E intersection H)=");
outtextxy(240,360,eh1str);

outtextxy(70,380,"n(H intersection F)=");
outtextxy(240,380,fh1str);

outtextxy(20,400,"n(F intersection E intersection H)=");
outtextxy(305,400,allstr);

setcolor(BLUE);
outtextxy(455,332,honlystr);
outtextxy(400,254,fonlystr);
outtextxy(500,250,eonlystr);

}

if(n==2)
{
setbkcolor(WHITE);
setfillstyle(1,LIGHTGRAY);
circle(460, 300,50);
floodfill(470,300 ,15);


setfillstyle(1,LIGHTGRAY);
circle(490,250,50);
floodfill(500,250 ,15);

setfillstyle(1,GREEN);
circle(420, 250, 50);
floodfill(420,250 ,15);


setcolor(RED);
rectangle(320,150,600, 380);
outtextxy(390,180,"French");
outtextxy(480,180,"English");
outtextxy(445,360,"Hindi");
//outtextxy(550,165,"U");
outtextxy(550,165,totalstr);

line(453,175,453,230);
line(364,290,420,290);

outtextxy(440,165,fe1str);
outtextxy(455,165,"-");
outtextxy(462,165,allstr);

outtextxy(325,287,fh1str);
outtextxy(341,287,"-");
outtextxy(348,287,allstr);

outtextxy(400,230,fstr);
outtextxy(100,335,fstr);
outtextxy(120,335,"-");
outtextxy(140,335,fhstr);
outtextxy(160,335,"-");
outtextxy(180,335,allstr);
outtextxy(200,335,"-");
outtextxy(220,335,festr);


outtextxy(450,260,allstr);
outtextxy(420,280,fhstr);
outtextxy(451,235,festr);
rectangle(70,320,245,380);
setcolor(BLUE);
outtextxy(400,250,fonlystr);
outtextxy(147,350,"=");
outtextxy(160,350,fonlystr);


}
if(n==3)
{
setbkcolor(WHITE);
setfillstyle(1,LIGHTGRAY);
circle(490,250,50);
floodfill(500,250 ,15);

setfillstyle(1,LIGHTGRAY);
circle(420, 250, 50);
floodfill(420,250 ,15);

setfillstyle(1,YELLOW);
circle(460, 300,50);
floodfill(470,300 ,15);
setcolor(RED);
rectangle(320,150,600, 380);
outtextxy(390,180,"French");
outtextxy(480,180,"English");
outtextxy(445,360,"Hindi");
//outtextxy(550,165,"U");
outtextxy(550,165,totalstr);


line(360,290,420,290);
line(490,290,550,290);

outtextxy(325,287,fh1str);
outtextxy(341,287,"-");
outtextxy(348,287,allstr);

outtextxy(560,287,eh1str);
outtextxy(576,287,"-");
outtextxy(584,287,allstr);

outtextxy(455,310,hstr);
outtextxy(100,335,hstr);
outtextxy(120,335,"-");
outtextxy(140,335,ehstr);
outtextxy(160,335,"-");
outtextxy(180,335,allstr);
outtextxy(200,335,"-");
outtextxy(220,335,fhstr);


outtextxy(450,260,allstr);
outtextxy(420,280,fhstr);
outtextxy(475,280,ehstr);
rectangle(70,320,245,380);
setcolor(BLUE);
outtextxy(445,325,honlystr);
outtextxy(147,350,"=");
outtextxy(160,350,honlystr);
}
if(n==4)
{

setbkcolor(WHITE);

setfillstyle(1,LIGHTGRAY);
circle(420, 250, 50);
floodfill(420,250 ,15);

setfillstyle(1,LIGHTGRAY);
circle(460, 300,50);
floodfill(470,300 ,15);

setfillstyle(1,CYAN);
circle(490,250,50);
floodfill(500,250 ,15);

setcolor(RED);
rectangle(320,150,600, 380);
outtextxy(390,180,"French");
outtextxy(480,180,"English");
outtextxy(445,360,"Hindi");
//outtextxy(550,165,"U");
outtextxy(550,165,totalstr);



line(453,175,453,230);
line(490,290,550,290);

outtextxy(440,165,fe1str);
outtextxy(455,165,"-");
outtextxy(462,165,allstr);


outtextxy(560,287,eh1str);
outtextxy(576,287,"-");
outtextxy(584,287,allstr);

outtextxy(500,230,estr);
outtextxy(100,335,estr);
outtextxy(120,335,"-");
outtextxy(140,335,festr);
outtextxy(160,335,"-");
outtextxy(180,335,allstr);
outtextxy(200,335,"-");
outtextxy(220,335,ehstr);


outtextxy(450,260,allstr);
outtextxy(451,235,festr);
outtextxy(475,280,ehstr);
rectangle(70,320,245,380);
setcolor(BLUE);
outtextxy(500,245,eonlystr);
outtextxy(147,350,"=");
outtextxy(160,350,eonlystr);
}
if(n==5)
{
setbkcolor(WHITE);


setfillstyle(1,LIGHTGRAY);
circle(460, 300,50);
floodfill(470,300 ,15);


setfillstyle(1,GREEN);
circle(490,250,50);
floodfill(500,250 ,15);

setfillstyle(1,LIGHTGRAY);
circle(420, 250, 50);
floodfill(420,250 ,15);


setcolor(RED);
rectangle(320,150,600, 380);
outtextxy(390,180,"French");
outtextxy(480,180,"English");
outtextxy(445,360,"Hindi");
//outtextxy(550,165,"U");
outtextxy(550,165,totalstr);

line(453,175,453,230);

outtextxy(440,165,fe1str);
outtextxy(455,165,"-");
outtextxy(462,165,allstr);

//outtextxy(450,260,allstr);

outtextxy(500,230,estr);

outtextxy(451,235,festr);
outtextxy(140,335,eonlystr);
outtextxy(160,335,"+");
outtextxy(170,335,festr);
rectangle(70,320,245,380);
setcolor(BLUE);
outtextxy(500,245,eonlystr);
outtextxy(140,355,"=");
outtextxy(157,355,ebhstr);
}
if(n==6)
{
setbkcolor(WHITE);

setfillstyle(1,LIGHTGRAY);
circle(420, 250, 50);
floodfill(420,250 ,15);


setfillstyle(1,YELLOW);
circle(460, 300,50);
floodfill(470,300 ,15);

 setfillstyle(1,LIGHTGRAY);
circle(490,250,50);
floodfill(500,250 ,15);


setcolor(RED);
rectangle(320,150,600, 380);
outtextxy(390,180,"French");
outtextxy(480,180,"English");
outtextxy(445,360,"Hindi");
//outtextxy(550,165,"U");
outtextxy(550,165,totalstr);

//outtextxy(450,260,allstr);

line(490,290,550,290);

outtextxy(560,287,eh1str);
outtextxy(576,287,"-");
outtextxy(584,287,allstr);

outtextxy(455,310,hstr);
outtextxy(140,335,honlystr);
outtextxy(160,335,"+");
outtextxy(170,335,ehstr);
rectangle(70,320,245,380);

outtextxy(475,280,ehstr);
setcolor(BLUE);
outtextxy(455,325,honlystr);
outtextxy(140,355,"=");
outtextxy(157,355,hbestr);
}
getch();
}