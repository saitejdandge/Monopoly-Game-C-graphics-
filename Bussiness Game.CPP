#include<stdlib.h>
#include<stdio.h>

#include<graphics.h>
#include<conio.h>
#include<iostream.h>

class places
{

public :
int x,y;
int own;
int pcolor;
int index;
int rent;
int hotel;
int house;
int d1x,d1y,d2x,d2y;
char *name;
int price;
int housep;
int hotelp;
}ob[40];
void cal();
void card(places *);
int numplay=0;
void fun()
{

ob[1].name="MUMBAI";
ob[2].name="WATERWORKS";
ob[3].name="RAILWAY";
ob[4].name="AHMEDABAD";
ob[5].name="INCOMETAX";
ob[6].name="INDORE";
ob[7].name="CHANCE";
ob[8].name="JAIPUR";
ob[9].name="JAIL";
 ob[10].name="NEWDELHI";
 ob[11].name="CHANDIGARH";
 ob[12].name="ELECTRIC";
 ob[13].name="BEST";
 ob[14].name="SHIMLA";
 ob[15].name="AMRISTER";
 ob[16].name="ComCHEST";
 ob[17].name="SRINAGAR";
 ob[18].name="CLUB";
 ob[19].name="AGRA";
 ob[20].name="CHANCE";
 ob[21].name="KANPUR";
 ob[22].name="PATNA";
 ob[23].name="DARJEELING";
 ob[24].name="AIRINDIA";
 ob[25].name="KOLKATA";
 ob[26].name="HYDERABAD";
 ob[27].name="RESTROOM";
ob[29].name="KOCHI";
ob[28].name="CHENNAI";
ob[0].name="START";

ob[0].price=0;
ob[1].price=8500;
ob[2].price=3200;
ob[3].price=9500;
ob[4].price=4000;
ob[5].price=0;
ob[6].price=1500;
ob[7].price=0;
ob[8].price=3000;

ob[9].price=0;
ob[10].price= 6000;
ob[11].price=2500;
ob[12].price=2500;
ob[13].price=3500;
ob[14].price=2200;
ob[15].price=3300;
ob[16].price=0;
ob[17].price=5000;

ob[18].price=0;
ob[19].price=2500;
ob[20].price=0;



 ob[21].price=4000;
ob[22].price=2000;
ob[23].price=2500;
 ob[24].price=10500;
 ob[25].price=6500;
      ob[26].price=3500;
      ob[27].price=0;
      ob[28].price=7000;
       ob[29].price=3000;

ob[0].housep=0;
ob[1].housep=3000;
ob[2].housep=0;
ob[3].housep=0;
ob[4].housep=1500;
ob[5].housep=0;
ob[6].housep=600;
ob[7].housep=0;
ob[8].housep=1000;
ob[9].housep=0;
ob[10].housep=2000;
ob[11].housep=900;
ob[12].housep=0;
ob[13].housep=0;
ob[14].housep=700;
ob[15].housep=1200;
ob[16].housep=0;
ob[17].housep=2000;
ob[18].housep=0;
ob[19].housep=1000;
ob[20].housep=0;
ob[21].housep=1500;
ob[22].housep=600;

ob[23].housep=800;
ob[24].housep=0;
ob[25].housep=2000;
ob[26].housep=1000;
ob[27].housep=0;
ob[28].housep=3000;
ob[29].housep=1000;


ob[0].hotelp=0;
ob[1].hotelp=4000;
ob[2].hotelp=0;
ob[3].hotelp=0;
ob[4].hotelp=2000;
ob[5].hotelp=0;
ob[6].hotelp=900;
ob[7].hotelp=0;
ob[8].hotelp=1500;
ob[9].hotelp=0;
ob[10].hotelp=3000;
ob[11].hotelp=1000;
ob[12].hotelp=0;
ob[13].hotelp=0;
ob[14].hotelp=1000;
ob[15].hotelp=1300;
ob[16].hotelp=0;
ob[17].hotelp=2500;
ob[18].hotelp=0;
ob[19].hotelp=1000;
ob[20].hotelp=0;
ob[21].hotelp=2000;
ob[22].hotelp=1000;
ob[23].hotelp=1000;
ob[24].hotelp=0;
ob[25].hotelp=3200;
ob[26].hotelp=1500;
ob[27].hotelp=0;
ob[28].hotelp=3500;
ob[29].hotelp=1500;


 ob[0].rent=0;
 ob[1].rent=3000;
 ob[2].rent=0;
 ob[3].rent=4000;
 ob[4].rent=2000;
 ob[5].rent=0;
 ob[6].rent=800;
 ob[7].rent=0;
 ob[8].rent=1000;
 ob[9].rent=0;
 ob[10].rent=2000;
 ob[11].rent=900;
 ob[12].rent=0;
 ob[13].rent=1000;
 ob[14].rent=700;
 ob[15].rent=1000;
 ob[16].rent=0;
 ob[17].rent=2000;
 ob[18].rent=0;
 ob[19].rent=700;
 ob[20].rent=0;
 ob[21].rent=1500;
 ob[22].rent=600;
 ob[23].rent=800;
 ob[24].rent= 5000;
 ob[25].rent=5000;
 ob[26].rent=2000;
 ob[27].rent=1200;
 ob[28].rent=4000;
 ob[29].rent=1000;
 ob[0].pcolor=YELLOW;
 ob[1].pcolor=MAGENTA;
  ob[2].pcolor=YELLOW;
ob[3].pcolor=YELLOW;
ob[4].pcolor=MAGENTA;
ob[5].pcolor=YELLOW;
ob[6].pcolor=BLUE;
ob[7].pcolor=YELLOW;
ob[8].pcolor=BLUE;
ob[9].pcolor=YELLOW;
ob[10].pcolor=GREEN;
ob[11].pcolor=GREEN;
ob[12].pcolor=YELLOW;
ob[13].pcolor=YELLOW;
ob[14].pcolor=RED;
ob[15].pcolor=RED;
ob[16].pcolor=YELLOW;
ob[17].pcolor=RED;
ob[18].pcolor=YELLOW;
ob[19].pcolor=BLUE;
ob[20].pcolor=YELLOW;
ob[21].pcolor=BLUE;
ob[22].pcolor=BLUE;
ob[23].pcolor=MAGENTA;
ob[24].pcolor=YELLOW;
ob[25].pcolor=MAGENTA;
ob[26].pcolor=GREEN;
ob[27].pcolor=YELLOW;
ob[28].pcolor=RED;
ob[29].pcolor=GREEN;



}
class player
{
	   public :
places *now;
     public :
     char namepl[50];
     long long int ocash;
long long int cash;
int color;
public:
player()
{
cash=250000;
}
};
player *gp;

int flp=0;
void display();
int main()
{
fun();
	    int k;
for(k=0;k<40;k++)
{ob[k].house=ob[k].hotel=0;
ob[k].index=k;
}
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
for(int i=0;i<30;i++)
{
ob[i].x=ob[i].y=0;
ob[i].own=0;

ob[i].house=ob[i].hotel=0;
}
setcolor(YELLOW);
display();
setviewport(100,100,500,350,1);

display();
setviewport(100,100,500,350,1);

setcolor(YELLOW);
outtextxy(0,0,"WELCOME TO BUSSINESS GAME");
 setcolor(BROWN);
outtextxy(0,20,"RULES OF THE GAMES ARE :");
outtextxy(0,40,"1.Left most corner of place in grid denotes the owner of that place");
outtextxy(0,60,"2.Range of Dice values is 2-12");
outtextxy(0,80,"3.Colour of house is ");
setcolor(GREEN);
outtextxy(130,80,"Green ");
setcolor(BROWN);
outtextxy(0,100,"4.Colour of hotel is ");
setcolor(YELLOW);
outtextxy(130,100,"Yellow");
setcolor(BROWN);
outtextxy(0,120,"5.Right most corner of place in grid denotes number of houses and hotels in that place");
outtextxy(0,140,"6.Not more than 3 hotels or houses can be at same place");
outtextxy(0,160,"7.Rent of Hotel is 700 per each Hotel");
outtextxy(0,180,"8.Rent of House is 500 per each House");
outtextxy(0,200,"9.Winning factor is decided by cash present finally at players");
getch();
cleardevice();
display();
setcolor(GREEN);
outtextxy(100,100,"ENTER NUMBER OF PLAYERS ");
cin>>numplay;
gp=new player [numplay];
cleardevice();
display();
setviewport(100,100,500,350,1);
for( k=0;k<numplay;k++)
{
(gp+k)->now=&ob[0];
(gp+k)->cash=250000;
(gp+k)->ocash=250000;
}
cleardevice();
display();
setviewport(100,100,500,350,1);
	   outtextxy(20,20,"ENTER NAMES OF PLAYERS ");
for( k=0;k<numplay;k++)
cin>>(gp+k)->namepl;
cleardevice();
display();
	  setviewport(100,100,500,350,1);
	   outtextxy(20,20,"SELECT COLORS FOR PLAYERS ");
	   for(int c=0;c<numplay;c++)
	   {                        labelc:
	      outtextxy(20,40,(gp+c)->namepl);
			  char choice ='0';
	      setcolor(RED);
	      outtextxy(20,60,"1.RED");
	      setcolor(YELLOW);
	      outtextxy(20,80,"2.YELLOW");
	      setcolor(GREEN);
	      outtextxy(20,100,"3.GREEN");
	      setcolor(BLUE);
	      outtextxy(20,120,"4.BLUE");
	      cin>>choice;

		switch(choice)
		{

		 case '1':
			(gp+c)->color=RED;
			break;



		 case '2':
			(gp+c)->color=YELLOW;
			break;



		 case '3':
			(gp+c)->color=GREEN;
			break;



		 case '4':
			(gp+c)->color=BLUE;
			break;


		default :
			cout<<"ENTER PROPERLY\n";
			goto labelc;



		}




cleardevice();
display();
	  setviewport(100,100,500,350,1);

	   }
flp=1;
display();
int count=0;
char r;
char ch='y';
int dice;
display();
setviewport(100,100,500,350,1);
while(ch!='n')
{

label1:

if(count==numplay)
count=0;
cleardevice();
display();
setviewport(100,100,500,350,1);
outtextxy(10,20,(gp+count)->namepl);
outtextxy(40,20," enter r to roll the dice :\n");

cin>>r;
if(r!='r')
goto label1;
else
{
dice1 :
int flagq=1;
dice=rand()%13;

if(dice==0||dice==1)
goto dice1;
		     char *d2='\0';
		     sprintf(d2,"%d",dice);

outtextxy(50,50,"dice rolled succesfully");
setcolor(YELLOW);
outtextxy(10,50,d2);
       setcolor(GREEN);

(gp+count)->now=(gp+count)->now+dice;

	  if( (gp+count)->now->index>=30)
	  {

		      (gp+count)->now=&ob[(gp+count)->now->index%30];
	setcolor((gp+count)->color);
	outtextxy(15,100,(gp+count)->namepl);
	(gp+count)->cash+=1500;
	  (gp+count)->ocash+=1500;
	setcolor(GREEN);
	outtextxy(40,100,"awarded 1500 for one round ");
		getch();
	}




labels :
getch();
cleardevice();
card((gp+count)->now);
char y;
display();
setviewport(100,100,500,350,1);

if((gp+count)->now->index==9)
{
 char jail='n';

 labeljail :
 cleardevice();
 display();
setviewport(100,100,500,350,1);
 outtextxy(10,10,"you are in jail  please enter y to make transaction of 500");
  cin>>jail;
  if(jail=='y')
  {
  outtextxy(10,40,"transaction succesful");
 (gp+count)->cash-=500;
  (gp+count)->ocash-=500;

  getch();
  cleardevice();
 display();

  }
  else
  goto labeljail;
}
else if((gp+count)->now->index==5)

{
 int charge=0;
 for(int chg=0;chg<30;chg++)
 {
  if(ob[chg].own==count+1)
  charge=charge+100;


 }
 char l='n';

 labell :
 cleardevice();
 display();
setviewport(100,100,500,350,1);
 outtextxy(10,10,"you are in incometax raid please enter y to make transaction ");

  outtextxy(10,40,"you will be charged 100 per each site ");
  outtextxy(10,70,"total amount to be paid is ");
  char *hel;
    sprintf(hel,"%d",charge);
  outtextxy(230,70,hel);


  cin>>l;
  if(l=='y')
  {
  outtextxy(10,100,"transaction succesful");
 (gp+count)->cash-=charge;
  (gp+count)->ocash-=charge;

  getch();
  cleardevice();
 display();

  }
  else
  goto labell;

}
else if((gp+count)->now->index==18)
{
char club='n';
 labelcl :
 cleardevice();
 display();
setviewport(100,100,500,350,1);
 outtextxy(0,10,"you are in club enter y to make transaction 100 for remaining players");
  cin>>club;
if(club=='y')
{
 for(int u=0;u<numplay;u++)
 {
  if(u==count)
  continue;

  else
  {

   (gp+count)->ocash-=100;
   (gp+count)->cash-=100;
   (gp+u)->cash+=100;
   (gp+u)->ocash+=100;

  }
 }
outtextxy(10,40,"transaction succesful");
getch();
cleardevice();
display();


}
else
goto labelcl;
}


else if((gp+count)->now->index==27)
{
char rest='n';
 labelres :
 cleardevice();
 display();
setviewport(100,100,500,350,1);
 outtextxy(0,10,"you are in restroom enter y to get transaction 100 from remaining players");
  cin>>rest;
if(rest=='y')
{
 for(int u=0;u<numplay;u++)
 {
  if(u==count)
  continue;

  else
  {

   (gp+count)->ocash+=100;
   (gp+count)->cash+=100;
   (gp+u)->cash-=100;
   (gp+u)->ocash-=100;

  }
 }
outtextxy(10,40,"transaction succesful");
getch();
cleardevice();
display();


}
else
goto labelres;
}


else if((gp+count)->now->index==7 || (gp+count)->now->index==20)
{


 cleardevice();
 display();
setviewport(100,100,500,350,1);


 outtextxy(10,10,"2.Loss in share 2000");
 outtextxy(10,30,"3. Lottery prize 2500");
 outtextxy(10,50,"4.fine for accident 1000");
 outtextxy(10,70,"5.crossword comptetion 1000");
 outtextxy(10,90,"6. house reqiues 1500");
  outtextxy(10,110,"7.jackpot 7000");
 outtextxy(10,130,"8.Loss due to fire 3000");
 outtextxy(10,150,"9.go to mumbai and recieve 1500 ");
 outtextxy(10,170,"10.go to jail");
 outtextxy(10,190,"11.prize for best performance 3000");
 outtextxy(10,210,"12.go to rest room ");
 setcolor(YELLOW);
 char *sd;
 sprintf(sd,"%d",dice);
 outtextxy(10,230,sd);
 setcolor(GREEN);
 outtextxy(25,230,"is rolled");

switch(dice)
{

 case 2 :
	(gp+count)->cash-=2000;
	(gp+count)->ocash-=2000;
	 break;

 case 3 :
	(gp+count)->cash+=2500;
	(gp+count)->ocash+=2500;
	 break;

 case 4 :
	(gp+count)->cash-=1000;
	(gp+count)->ocash-=1000;
	 break;

 case 5 :
	(gp+count)->cash+=1000;
	(gp+count)->ocash+=1000;
	 break;

 case 6 :
	(gp+count)->cash-=1500;
	(gp+count)->ocash-=1500;

	 break;

 case 7 :
	(gp+count)->cash+=7000;
	(gp+count)->ocash+=7000;
	 break;

 case 8 :
	(gp+count)->cash-=3000;
	(gp+count)->ocash-=3000;
	 break;

 case 9 :
	(gp+count)->cash+=1500;
	(gp+count)->ocash+=1500;
		(gp+count)->now=&ob[1];
	goto labels;



 case 10 :

	(gp+count)->now=&ob[9];
	goto labels;

 case 11 :
	(gp+count)->cash+=3000;
	(gp+count)->ocash+=3000;
	 break;

 case 12 :
       (gp+count)->now=&ob[27];
       goto labels;


}

}















else if((gp+count)->now->index==16)
{


 cleardevice();
 display();
setviewport(100,100,500,350,1);


 outtextxy(10,10,"2.Birthday GIft from each player each 500");
 outtextxy(10,30,"3.Go to jail");
 outtextxy(10,50,"4.Beauty contest prize 2500");
 outtextxy(10,70,"5. School fees  1000");
 outtextxy(10,90,"6. Income tax refund 2000");
  outtextxy(10,110,"7.Marriage celebrations 2000");
 outtextxy(10,130,"8.Go to rest room");
 outtextxy(10,150,"9.house repairs  3500 ");
 outtextxy(10,170,"10.Recieve intrest on shares 1500");
 outtextxy(10,190,"11.pay insurance 1500");
 outtextxy(10,210,"12.sale on stocks 3000 ");
 setcolor(YELLOW);
 char *sd;
 sprintf(sd,"%d",dice);
 outtextxy(10,230,sd);
 setcolor(GREEN);
 outtextxy(25,230,"is rolled");
    int pl;

switch(dice)
{

 case 2 :
	for( pl=0;pl<numplay;pl++)
	{
	 if(pl==count)
	 continue;
	 else
	 {
	  (gp+count)->cash+=500;
	  (gp+count)->ocash+=500;
	  (gp+pl)->cash-=500;
	  (gp+pl)->ocash-=500;

	 }
	}
	break;
 case 3 :

	(gp+count)->now=&ob[9];
	goto labels;

 case 4 :
	(gp+count)->cash+=2500;
	(gp+count)->ocash+=2500;
	 break;

 case 5 :
	(gp+count)->cash-=1000;
	(gp+count)->ocash-=1000;
	 break;

 case 6 :
	(gp+count)->cash+=2000;
	(gp+count)->ocash+=2000;

	 break;

 case 7 :
	(gp+count)->cash-=2000;
	(gp+count)->ocash-=2000;
	 break;

 case 8 :


       (gp+count)->now=&ob[27];
       goto labels;



 case 9 :
	(gp+count)->cash-=3500;
	(gp+count)->ocash-=3500;

	 break;


 case 10 :


	(gp+count)->cash+=1500;
	(gp+count)->ocash+=1500;
	 break;
 case 11 :
	(gp+count)->cash-=1500;
	(gp+count)->ocash-=1500;
	 break;

 case 12 :

		(gp+count)->cash+=3000;
	(gp+count)->ocash+=3000;

	 break;

}

}



else if((gp+count)->now->index==0)
{
 outtextxy(10,10,"you are at start");

}


else if((gp+count)->now->own==0)
 {

outtextxy(10,10,"enter y to buy the property");
cin>>y;
if(y=='y')
{
   (gp+count)->now->own=count+1;
   (gp+count)->cash-= (gp+count)->now->price;
      (gp+count)->ocash-= (gp+count)->now->price;
   outtextxy(10,50,"transaction succesful");
   getch();
   card((gp+count)->now);

   display();

 }
 else   if(y!='y')
 {

     outtextxy(10,50,"transaction cancelled bank fined 1500 for refusal");
     (gp+count)->ocash-=1500;
     (gp+count)->cash-=1500;
	getch();
	card((gp+count)->now);

	display();

 }
}
else     if((gp+count)->now->own!=count+1)


{
	  labelr:
	card((gp+count)->now);
   getch();
   display();

setviewport(100,100,500,350,1);
setcolor(BROWN);
outtextxy(0,180,"Rent at particular place doubles ");
outtextxy(0,200,"if owner of that place has minimum");
outtextxy(0,220,"3 cards of same colour");
outtextxy(10,10,"owner of the property is :");

setcolor((gp+((gp+count)->now->own-1) )->color);
outtextxy(180,10,(gp+((gp+count)->now->own-1) )->namepl);
setcolor(GREEN);
outtextxy(10,50,"rent to be paid is :");
char *exp;
if((gp+count)->now->rent!=0)
{

int cd=(gp+count)->now->pcolor;
int counter=0;
int dou=1;
for(int q=0;q<30;q++)
{
 if(ob[q].pcolor==cd)
 {

  if(ob[q].own-1==(gp+count)->now->own-1)
  counter++;
 }


}
if(counter>=3)
dou=2;
else if(counter!=3)
dou=1;
cout<<counter<<endl;
sprintf(exp,"%d",dou*((gp+count)->now->rent + ((gp+count)->now->house*500)  +((gp+count)->now->hotel*700)));
setcolor(YELLOW);
outtextxy(170,50,exp);
setcolor(GREEN);
   outtextxy(10,70,"enter y to pay the rent ");
   char chy;
   cin>>chy;
   if(chy=='y')
{

	outtextxy(10,90," rent paid succesfully ");
	(gp+count)->cash-=dou*((gp+count)->now->rent + ((gp+count)->now->house*500)+((gp+count)->now->hotel*700));
	 (gp+count)->ocash-=dou*((gp+count)->now->rent + ((gp+count)->now->house*500)+((gp+count)->now->hotel*700));
       (gp+((gp+count)->now->own-1) )->ocash+=dou*((gp+count)->now->rent + ((gp+count)->now->house*500)  +((gp+count)->now->hotel*700 ));
	 (gp+((gp+count)->now->own-1) )->cash+=(gp+count)->now->rent + ((gp+count)->now->house*500)  +((gp+count)->now->hotel*700 );
	 getch();
	 cleardevice();
	 display();



}
   else
   goto labelr;

 ;
 }
 else
 {

     sprintf(exp,"%d",100*dice);
     outtextxy(200,50,exp);
     (gp+count)->cash-=(100*dice);
     (gp+count)->ocash-=(100*dice);
   (gp+((gp+count)->now->own-1))->cash+=(100*dice);

      (gp+((gp+count)->now->own-1))->ocash+=(100*dice);



 }
}
else
{
	      labelcp:
cleardevice();

display();
setviewport(100,100,500,350,1);
char cond='1';
do

{
   card((gp+count)->now);
 display();
 setviewport(100,100,500,350,1);
 outtextxy(50,30,"This property already owned by you");
      char *ptr;

 setcolor(GREEN);
    outtextxy(50,70,"2.HOUSE");
       sprintf(ptr,"%d",(gp+count)->now->housep);
      outtextxy(100,70,ptr);
      setcolor(YELLOW);
      outtextxy(50,50,"1.HOTEL");
	   sprintf(ptr,"%d",(gp+count)->now->hotelp);
      outtextxy(100,50,ptr);
      setcolor(BROWN);
      outtextxy(50,90,"3.CANCEL");

      setcolor(YELLOW);
      outtextxy(50,110,"enter your choice");
      char cp;
      cin>>cp;

	    char *ho;
      if(cp!='3')
      switch(cp)
      {
       case '2':
		if((gp+count)->now->house<3)
		{

		outtextxy(50,150,"houses present are :");
		(gp+count)->now->house++;
		sprintf(ho,"%d",(gp+count)->now->house);
		outtextxy(200,130,ho);
		  outtextxy(50,130,"new house is built :");
		  (gp+count)->cash-=(gp+count)->now->housep;
		   (gp+count)->ocash-=(gp+count)->now->housep;

		   getch();
		   display();
		   card((gp+count)->now);

		}
		else
		{

		outtextxy(50,130,"houses present are :");
		char *ho;
		sprintf(ho,"%d",(gp+count)->now->house);
		outtextxy(200,130,ho);
			 outtextxy(50,150,"only 3 houses are allowed ");
				   getch();
		   display();
		   card((gp+count)->now);

			 break;



		}
		break;
       case '1':






		if((gp+count)->now->hotel<3)
		{

		outtextxy(50,150,"hotels present are :");
		    (gp+count)->now->hotel++;
		sprintf(ho,"%d",(gp+count)->now->hotel);
		outtextxy(200,150,ho);
		  outtextxy(50,130,"new hotel is built :");
		  (gp+count)->cash-=(gp+count)->now->hotelp;
		   (gp+count)->ocash-=(gp+count)->now->hotelp;

		     getch();
		   display();
		   card((gp+count)->now);


		}
		else
		{

		outtextxy(50,130,"hotels present are :");

		sprintf(ho,"%d",(gp+count)->now->hotel);
		outtextxy(200,130,ho);
			 outtextxy(50,150,"only 3 hotels are allowed ");
			   getch();
		   display();
		   card((gp+count)->now);

			 break;



		}
		break;
       default:
		 outtextxy(50,140,"enter choice 1-3");
		 getch();
		 goto labelcp;





      }
setviewport(100,100,500,350,1);
if(cp!='3')
{
outtextxy(50,160,"enter 0 to cancel operation");
cin>>cond;
}
if(cp=='3')
break;
}
while(cond!='0');
   card((gp+count)->now);
   getch();
   display();

 }
 }
count++;
outtextxy(120,250,"enter n to end the game and justify the winner \n");
graphdefaults();
cin>>ch;
if(ch=='n')
cal();
}


return 0;
}
void display()

{

    graphdefaults();
  int i,k;
if(flp==1)
{
setcolor(GREEN);
outtextxy(getmaxx()-240,300,"PLAYERS ONLINE");
for(  k=0;k<numplay;k++)
{
setcolor((gp+k)->color);
char *exp='\0';
sprintf(exp,"%ld",(gp+k)->ocash);
outtextxy(getmaxx()-240,320+(k*10),exp)  ;
outtextxy(getmaxx()-180,320+(k*10),(gp+k)->namepl)   ;

}
	 for(  k=0;k<numplay;k++)
{
setcolor((gp+k)->color);
if(k==0)
outtextxy((gp+k)->now->x-30+10,(gp+k)->now->y,"P")   ;
else if(k==1)
outtextxy((gp+k)->now->x-30+30,(gp+k)->now->y,"P")   ;
else if(k==2)
outtextxy((gp+k)->now->x-30+10,(gp+k)->now->y-10,"P")   ;
else if(k==3)
outtextxy((gp+k)->now->x-30+30,(gp+k)->now->y-10,"P")   ;
}






	}	for( k=0;k<30;k++)
		{
		 switch(ob[k].own)
		 {
		  case 0:
			setcolor(BLUE);
			outtextxy(ob[k].d1x,ob[k].d1y,"B");
			break;

		   case 1:

			setcolor((gp)->color);
			outtextxy(ob[k].d1x,ob[k].d1y,"*");
			break;

		   case 2:

			setcolor((gp+1)->color);
			outtextxy(ob[k].d1x,ob[k].d1y,"*");
			break;

		   case 3:

			setcolor((gp+2)->color);
			outtextxy(ob[k].d1x,ob[k].d1y,"*");
			break;

		   case 4:

			setcolor((gp+3)->color);
			outtextxy(ob[k].d1x,ob[k].d1y,"*");
			break;

		 }



		}



			for( k=0;k<30;k++)
		{
			      setcolor(GREEN);
		 switch(ob[k].house)
		 {

		   case 1:


			outtextxy(ob[k].d2x-10,ob[k].d2y-10,"1");
			break;

		   case 2:


			outtextxy(ob[k].d2x-10,ob[k].d2y-10,"2");
			break;

		   case 3:


			outtextxy(ob[k].d2x-10,ob[k].d2y-10,"3");
			break;

			 }



		}





			for( k=0;k<30;k++)
		{
			      setcolor(YELLOW);
		 switch(ob[k].hotel)
		 {

		   case 1:


			outtextxy(ob[k].d2x-10,ob[k].d2y-60,"1");
			break;

		   case 2:


			outtextxy(ob[k].d2x-10,ob[k].d2y-60,"2");
			break;

		   case 3:


			outtextxy(ob[k].d2x-10,ob[k].d2y-60,"3");
			break;

			 }



		}













ob[0].x=40,ob[0].y=40;
ob[0].d1x=10,ob[0].d1y=10;

ob[0].d2x=70,ob[0].d2y=70;

for(i=0;i<10;i++)

{ob[i].x=40+(i*60);
ob[i].y=40;
ob[i].d1y=10;
ob[i].d2y=70;
ob[i].d1x=ob[0].d1x+(i*60);
ob[i].d2x=ob[0].d2x+(i*60);
}

for(i=0;i<10;i++)
{
setcolor(ob[i].pcolor);
rectangle(ob[i].d1x,ob[i].d1y,ob[i].d2x,ob[i].d2y);
settextstyle(2,HORIZ_DIR,4);
outtextxy(ob[i].d1x+4,ob[i].y+20,ob[i].name);

char *exp2='\0';
				sprintf(exp2,"%d",ob[i].price);
outtextxy(ob[i].d1x+10,ob[i].y-30,exp2);



}


for(i=10;i<16;i++)

{ob[i].y=ob[9].y+((i-9)*60);
ob[i].x=ob[9].x;
ob[i].d1x=ob[9].d1x;
ob[i].d2x=ob[9].d2x;

ob[i].d1y=ob[9].d1y+((i-9)*60);
ob[i].d2y=ob[9].d2y+((i-9)*60);
 setcolor(ob[i].pcolor);
rectangle(ob[i].d1x,ob[i].d1y,ob[i].d2x,ob[i].d2y);



settextstyle(2,HORIZ_DIR,4);
outtextxy(ob[i].d1x+4,ob[i].y+20,ob[i].name);

char *exp2='\0';
				sprintf(exp2,"%d",ob[i].price);
outtextxy(ob[i].d1x+10,ob[i].y-30,exp2);
}

for(i=16;i<25;i++)

{ob[i].x=ob[15].x-((i-15)*60);
ob[i].y=ob[15].y;
ob[i].d1y=ob[15].d1y;
ob[i].d2y=ob[15].d2y;
ob[i].d1x=ob[15].d1x-((i-15)*60);
ob[i].d2x=ob[15].d2x-((i-15)*60);
setcolor(ob[i].pcolor);
settextstyle(2,HORIZ_DIR,4);
outtextxy(ob[i].d1x+4,ob[i].y+20,ob[i].name);
rectangle(ob[i].d1x,ob[i].d1y,ob[i].d2x,ob[i].d2y);

char *exp2='\0';
				sprintf(exp2,"%d",ob[i].price);
outtextxy(ob[i].d1x+10,ob[i].y-30,exp2);
}



for(i=25;i<30;i++)

{ob[i].y=ob[24].y-((i-24)*60);
ob[i].x=ob[24].x;
ob[i].d1x=ob[24].d1x;
ob[i].d2x=ob[24].d2x;
ob[i].d1y=ob[24].d1y-((i-24)*60);
ob[i].d2y=ob[24].d2y-((i-24)*60);
setcolor(ob[i].pcolor);
settextstyle(2,HORIZ_DIR,4);
char *exp2='\0';
sprintf(exp2,"%d",ob[i].price);
outtextxy(ob[i].d1x+10,ob[i].y-30,exp2);
outtextxy(ob[i].d1x+4,ob[i].y+20,ob[i].name);
rectangle(ob[i].d1x,ob[i].d1y,ob[i].d2x,ob[i].d2y);
}


}
void cal()
{

cleardevice();
display();
setviewport(100,100,500,350,1);
char *ptr;

outtextxy(20,20,"FINAL DETAILS");


getch();
}

void card(places *real)
{

 cleardevice();
display() ;
setcolor(real->pcolor);
rectangle(350,100,490,240);
outtextxy(getmaxx()/2+80,getmaxy()/2-137,real->name);
char *exp4='\0';
sprintf(exp4,"%d",real->price);
outtextxy(getmaxx()/2+80,getmaxy()/2-120,exp4);
outtextxy(getmaxx()/2+60,getmaxy()/2-80,"RENT:");
char *exp5='\0';
sprintf(exp5,"%d",real->housep);
outtextxy(getmaxx()/2+140,getmaxy()/2-60,exp5);
outtextxy(getmaxx()/2+40,getmaxy()/2-60,"COST OF HOUSE:");




char *exp6='\0';
sprintf(exp6,"%d",real->hotelp);
outtextxy(getmaxx()/2+140,getmaxy()/2-40,exp6);
outtextxy(getmaxx()/2+40,getmaxy()/2-40,"COST OF HOTEL:");
char *exp3='\0';

sprintf(exp3,"%d",real->rent);
outtextxy(getmaxx()/2+100,getmaxy()/2-80,exp3);
outtextxy(getmaxx()/2+60,getmaxy()/2-100,"OWNER:");

       if(real->own==0)
	      {   setcolor(BLUE);
outtextxy(getmaxx()/2+100,getmaxy()/2-100,"BANK");
}
else if(real->own==1)
{setcolor((gp)->color);
outtextxy(getmaxx()/2+100,getmaxy()/2-100,(gp)->namepl);
}
else if(real->own==2)
{
setcolor((gp+1)->color);
outtextxy(getmaxx()/2+100,getmaxy()/2-100,(gp+1)->namepl);
}
else if(real->own==3)
{
setcolor((gp+2)->color);
outtextxy(getmaxx()/2+100,getmaxy()/2-100,(gp+2)->namepl);
 }
 else if(real->own==4)
{
setcolor((gp+3)->color);
outtextxy(getmaxx()/2+100,getmaxy()/2-100,(gp+3)->namepl);
}



}

