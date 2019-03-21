//printing the numbers in wordings
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int n,b,i,*p;
 long g;
 char a[50][50];
 clrscr();
 printf("enter the number");
 scanf("%ld",&g);
 if(g==0)
  printf("zero");
 else
 {
 for(i=0;g!=0;i++)
 {
 b=g%10;
 p[i]=b;
 g=g/10;
 }
 n=i;
 for(i=0;i<n;i++)
 {
  if(p[i]==1)
  strcpy (a[i],"one");
  else if(p[i]==2)
  strcpy (a[i],"two");
  else if(p[i]==3)
  strcpy (a[i],"three");
  else if(p[i]==4)
  strcpy (a[i],"four");
  else if(p[i]==5)
  strcpy (a[i],"five");
  else if(p[i]==6)
  strcpy (a[i],"six");
  else if(p[i]==7)
  strcpy (a[i],"seven");
  else if(p[i]==8)
  strcpy (a[i],"eight");
  else if(p[i]==9)
  strcpy (a[i],"nine");
  else if(p[i]==0)
  strcpy (a[i],"zero");
  }
  /*if(n==1)
  {
  puts(a[0]);
  }*/
  if(n==2)
  {
   if(p[1]==1)
    {
  strcpy(a[1],0);
  if(p[0]==0)
  strcpy (a[0],"ten");
  else if(p[0]==2)
  strcpy (a[0],"twelve");
  else if(p[0]==3)
  strcpy (a[0],"thirteen");
  else if(p[0]==4)
  strcpy (a[0],"fourteen");
  else if(p[0]==5)
  strcpy (a[0],"fivteen");
  else if(p[0]==6)
  strcpy (a[0],"sixteen");
  else if(p[0]==7)
  strcpy (a[0],"seventeen");
  else if(p[0]==8)
  strcpy (a[0],"eighteen");
  else if(p[0]==9)
  strcpy (a[0],"ninteen");
  else if(p[0]==1)
  strcpy (a[0],"eleven");
  }
  else if(p[1]==2)
  strcpy (a[1],"twenty");
  else if(p[1]==3)
  strcpy (a[1],"thirty");
  else if(p[1]==4)
  strcpy (a[1],"fourty");
  else if(p[1]==5)
  strcpy (a[1],"fifty");
  else if(p[1]==6)
  strcpy (a[1],"sixty");
  else if(p[1]==7)
  strcpy (a[1],"seventy");
  else if(p[1]==8)
  strcpy (a[1],"eighty");
  else if(p[1]==9)
  strcpy (a[1],"ninty");
  }
  else if(n==3)
  {
  if(p[2]==1)
  strcpy (a[2],"one hundred");
  else if(p[2]==2)
  strcpy (a[2],"two hundred");
  else if(p[2]==3)
  strcpy (a[2],"three hundred");
  else if(p[2]==4)
  strcpy (a[2],"four hundred");
  else if(p[2]==5)
  strcpy (a[2],"five hundred");
  else if(p[2]==6)
  strcpy (a[2],"six hundred");
  else if(p[2]==7)
  strcpy (a[2],"seven hundred");
  else if(p[2]==8)
  strcpy (a[2],"eight hundred");
  else if(p[2]==9)
  strcpy (a[2],"nine hundred");
  if(p[1]==1)
    {
  strcpy(a[1],0);
  if(p[0]==0)
  strcpy (a[0],"ten");
  else if(p[0]==2)
  strcpy (a[0],"twelve");
  else if(p[0]==3)
  strcpy (a[0],"thirteen");
  else if(p[0]==4)
  strcpy (a[0],"fourteen");
  else if(p[0]==5)
  strcpy (a[0],"fivteen");
  else if(p[0]==6)
  strcpy (a[0],"sixteen");
  else if(p[0]==7)
  strcpy (a[0],"seventeen");
  else if(p[0]==8)
  strcpy (a[0],"eighteen");
  else if(p[0]==9)
  strcpy (a[0],"ninteen");
  else if(p[0]==1)
  strcpy (a[0],"eleven");
  }
  else if(p[1]==2)
  strcpy (a[1],"twenty");
  else if(p[1]==3)
  strcpy (a[1],"thirty");
  else if(p[1]==4)
  strcpy (a[1],"fourty");
  else if(p[1]==5)
  strcpy (a[1],"fifty");
  else if(p[1]==6)
  strcpy (a[1],"sixty");
  else if(p[1]==7)
  strcpy (a[1],"seventy");
  else if(p[1]==8)
  strcpy (a[1],"eighty");
  else if(p[1]==9)
  strcpy (a[1],"ninty");
  }
  else if(n==4)
  {
  if(p[3]==1)
  strcpy (a[3],"one thousand");
  else if(p[3]==2)
  strcpy (a[3],"two thousand");
  else if(p[3]==3)
  strcpy (a[3],"three thousand");
  else if(p[3]==4)
  strcpy (a[3],"four thousand");
  else if(p[3]==5)
  strcpy (a[3],"five thousand");
  else if(p[3]==6)
  strcpy (a[3],"six thousand");
  else if(p[3]==7)
  strcpy (a[3],"seven thousand");
  else if(p[3]==8)
  strcpy (a[3],"eight thousand");
  else if(p[3]==9)
  strcpy (a[3],"nine thousand");
  if(p[2]==1)
  strcpy (a[2],"one hundred");
  else if(p[2]==2)
  strcpy (a[2],"two hundred");
  else if(p[2]==3)
  strcpy (a[2],"three hundred");
  else if(p[2]==4)
  strcpy (a[2],"four hundred");
  else if(p[2]==5)
  strcpy (a[2],"five hundred");
  else if(p[2]==6)
  strcpy (a[2],"six hundred");
  else if(p[2]==7)
  strcpy (a[2],"seven hundred");
  else if(p[2]==8)
  strcpy (a[2],"eight hundred");
  else if(p[2]==9)
  strcpy (a[2],"nine hundred");
  if(p[1]==1)
    {
  strcpy(a[1],0);
  if(p[0]==0)
  strcpy (a[0],"ten");
  else if(p[0]==2)
  strcpy (a[0],"twelve");
  else if(p[0]==3)
  strcpy (a[0],"thirteen");
  else if(p[0]==4)
  strcpy (a[0],"fourteen");
  else if(p[0]==5)
  strcpy (a[0],"fivteen");
  else if(p[0]==6)
  strcpy (a[0],"sixteen");
  else if(p[0]==7)
  strcpy (a[0],"seventeen");
  else if(p[0]==8)
  strcpy (a[0],"eighteen");
  else if(p[0]==9)
  strcpy (a[0],"ninteen");
  else if(p[0]==1)
  strcpy (a[0],"eleven");
  }
  else if(p[1]==2)
  strcpy (a[1],"twenty");
  else if(p[1]==3)
  strcpy (a[1],"thirty");
  else if(p[1]==4)
  strcpy (a[1],"fourty");
  else if(p[1]==5)
  strcpy (a[1],"fifty");
  else if(p[1]==6)
  strcpy (a[1],"sixty");
  else if(p[1]==7)
  strcpy (a[1],"seventy");
  else if(p[1]==8)
  strcpy (a[1],"eighty");
  else if(p[1]==9)
  strcpy (a[1],"ninty");
  }
  else if(n==5)
  {
   if(p[4]==1)
    {
  strcpy(a[4],0);
  if(p[3]==0)
  {
  strcpy (a[3],"ten thousand");
  p[3]=0;
  }
  else if(p[3]==2)
  {
  strcpy (a[3],"twelve thousand");
  p[3]=0;
  }
  else if(p[3]==3)
  {
  strcpy (a[3],"thirteen thousand");
  p[3]=0;
  }
  else if(p[3]==4)
  {
  strcpy (a[3],"fourteen thousand");
  p[3]=0;
  }
  else if(p[3]==5)
  {
  strcpy (a[3],"fivteen thousand");
  p[3]=0;
  }
  else if(p[3]==6)
  {
  strcpy (a[3],"sixteen thousand");
  p[3]=0;
  }
  else if(p[3]==7)
  {
  strcpy (a[3],"seventeen thousand");
  p[3]=0;
  }
  else if(p[3]==8)
  {
  strcpy (a[3],"eighteen thousand");
  p[3]=0;
  }
  else if(p[3]==9)
  {
  strcpy (a[3],"ninteen thousand");
  p[3]=0;
  }
  else if(p[3]==1)
  {
  strcpy (a[3],"eleven thousand");
  p[3]=0;
  }
  }
  else if(p[4]==2 && p[3]==0)
  strcpy (a[4],"twenty thousand");
  else if(p[4]==3 && p[3]==0)
  strcpy (a[4],"thirty thousand");
  else if(p[4]==4 && p[3]==0)
  strcpy (a[4],"fourty thousand");
  else if(p[4]==5 && p[3]==0)
  strcpy (a[4],"fifty thousand");
  else if(p[4]==6 && p[3]==0)
  strcpy (a[4],"sixty thousand");
  else if(p[4]==7 && p[3]==0)
  strcpy (a[4],"seventy thousand");
  else if(p[4]==8 && p[3]==0)
  strcpy (a[4],"eighty thousand");
  else if(p[4]==9 && p[3]==0)
  strcpy (a[4],"ninty thousand");
  else if(p[4]==2)
  strcpy (a[4],"twenty");
  else if(p[4]==3)
  strcpy (a[4],"thirty");
  else if(p[4]==4)
  strcpy (a[4],"fourty");
  else if(p[4]==5)
  strcpy (a[4],"fifty");
  else if(p[4]==6)
  strcpy (a[4],"sixty");
  else if(p[4]==7)
  strcpy (a[4],"seventy");
  else if(p[4]==8)
  strcpy (a[4],"eighty");
  else if(p[4]==9)
  strcpy (a[4],"ninty");
  if(p[3]==1)
  strcpy (a[3],"one thousand");
  else if(p[3]==2)
  strcpy (a[3],"two thousand");
  else if(p[3]==3)
  strcpy (a[3],"three thousand");
  else if(p[3]==4)
  strcpy (a[3],"four thousand");
  else if(p[3]==5)
  strcpy (a[3],"five thousand");
  else if(p[3]==6)
  strcpy (a[3],"six thousand");
  else if(p[3]==7)
  strcpy (a[3],"seven thousand");
  else if(p[3]==8)
  strcpy (a[3],"eight thousand");
  else if(p[3]==9)
  strcpy (a[3],"nine thousand");
  if(p[2]==1)
  strcpy (a[2],"one hundred");
  else if(p[2]==2)
  strcpy (a[2],"two hundred");
  else if(p[2]==3)
  strcpy (a[2],"three hundred");
  else if(p[2]==4)
  strcpy (a[2],"four hundred");
  else if(p[2]==5)
  strcpy (a[2],"five hundred");
  else if(p[2]==6)
  strcpy (a[2],"six hundred");
  else if(p[2]==7)
  strcpy (a[2],"seven hundred");
  else if(p[2]==8)
  strcpy (a[2],"eight hundred");
  else if(p[2]==9)
  strcpy (a[2],"nine hundred");
  if(p[1]==1)
    {
  strcpy(a[1],0);
  if(p[0]==0)
  strcpy (a[0],"ten");
  else if(p[0]==2)
  strcpy (a[0],"twelve");
  else if(p[0]==3)
  strcpy (a[0],"thirteen");
  else if(p[0]==4)
  strcpy (a[0],"fourteen");
  else if(p[0]==5)
  strcpy (a[0],"fivteen");
  else if(p[0]==6)
  strcpy (a[0],"sixteen");
  else if(p[0]==7)
  strcpy (a[0],"seventeen");
  else if(p[0]==8)
  strcpy (a[0],"eighteen");
  else if(p[0]==9)
  strcpy (a[0],"ninteen");
  else if(p[0]==1)
  strcpy (a[0],"eleven");
  }
  else if(p[1]==2)
  strcpy (a[1],"twenty");
  else if(p[1]==3)
  strcpy (a[1],"thirty");
  else if(p[1]==4)
  strcpy (a[1],"fourty");
  else if(p[1]==5)
  strcpy (a[1],"fifty");
  else if(p[1]==6)
  strcpy (a[1],"sixty");
  else if(p[1]==7)
  strcpy (a[1],"seventy");
  else if(p[1]==8)
  strcpy (a[1],"eighty");
  else if(p[1]==9)
  strcpy (a[1],"ninty");
  }
  else if(n==6)
  {
  if(p[5]==1)
  strcpy (a[5],"one lakh");
  else if(p[5]==2)
  strcpy (a[5],"two lakh");
  else if(p[5]==3)
  strcpy (a[5],"three lakh");
  else if(p[5]==4)
  strcpy (a[5],"four lakh");
  else if(p[5]==5)
  strcpy (a[5],"five lakh");
  else if(p[5]==6)
  strcpy (a[5],"six lakh");
  else if(p[5]==7)
  strcpy (a[5],"seven lakh");
  else if(p[5]==8)
  strcpy (a[5],"eight lakh");
  else if(p[5]==9)
  strcpy (a[5],"nine lakh");
  if(p[4]==1)
    {
  strcpy(a[4],0);
  if(p[3]==0)
  {
  strcpy (a[3],"ten thousand");
  p[3]=0;
  }
  else if(p[3]==2)
  {
  strcpy (a[3],"twelve thousand");
  p[3]=0;
  }
  else if(p[3]==3)
  {
  strcpy (a[3],"thirteen thousand");
  p[3]=0;
  }
  else if(p[3]==4)
  {
  strcpy (a[3],"fourteen thousand");
  p[3]=0;
  }
  else if(p[3]==5)
  {
  strcpy (a[3],"fivteen thousand");
  p[3]=0;
  }
  else if(p[3]==6)
  {
  strcpy (a[3],"sixteen thousand");
  p[3]=0;
  }
  else if(p[3]==7)
  {
  strcpy (a[3],"seventeen thousand");
  p[3]=0;
  }
  else if(p[3]==8)
  {
  strcpy (a[3],"eighteen thousand");
  p[3]=0;
  }
  else if(p[3]==9)
  {
  strcpy (a[3],"ninteen thousand");
  p[3]=0;
  }
  else if(p[3]==1)
  {
  strcpy (a[3],"eleven thousand");
  p[3]=0;
  }
  }
  else if(p[4]==2 && p[3]==0)
  strcpy (a[4],"twenty thousand");
  else if(p[4]==3 && p[3]==0)
  strcpy (a[4],"thirty thousand");
  else if(p[4]==4 && p[3]==0)
  strcpy (a[4],"fourty thousand");
  else if(p[4]==5 && p[3]==0)
  strcpy (a[4],"fifty thousand");
  else if(p[4]==6 && p[3]==0)
  strcpy (a[4],"sixty thousand");
  else if(p[4]==7 && p[3]==0)
  strcpy (a[4],"seventy thousand");
  else if(p[4]==8 && p[3]==0)
  strcpy (a[4],"eighty thousand");
  else if(p[4]==9 && p[3]==0)
  strcpy (a[4],"ninty thousand");
  else if(p[4]==2)
  strcpy (a[4],"twenty");
  else if(p[4]==3)
  strcpy (a[4],"thirty");
  else if(p[4]==4)
  strcpy (a[4],"fourty");
  else if(p[4]==5)
  strcpy (a[4],"fifty");
  else if(p[4]==6)
  strcpy (a[4],"sixty");
  else if(p[4]==7)
  strcpy (a[4],"seventy");
  else if(p[4]==8)
  strcpy (a[4],"eighty");
  else if(p[4]==9)
  strcpy (a[4],"ninty");
  if(p[3]==1)
  strcpy (a[3],"one thousand");
  else if(p[3]==2)
  strcpy (a[3],"two thousand");
  else if(p[3]==3)
  strcpy (a[3],"three thousand");
  else if(p[3]==4)
  strcpy (a[3],"four thousand");
  else if(p[3]==5)
  strcpy (a[3],"five thousand");
  else if(p[3]==6)
  strcpy (a[3],"six thousand");
  else if(p[3]==7)
  strcpy (a[3],"seven thousand");
  else if(p[3]==8)
  strcpy (a[3],"eight thousand");
  else if(p[3]==9)
  strcpy (a[3],"nine thousand");
  if(p[2]==1)
  strcpy (a[2],"one hundred");
  else if(p[2]==2)
  strcpy (a[2],"two hundred");
  else if(p[2]==3)
  strcpy (a[2],"three hundred");
  else if(p[2]==4)
  strcpy (a[2],"four hundred");
  else if(p[2]==5)
  strcpy (a[2],"five hundred");
  else if(p[2]==6)
  strcpy (a[2],"six hundred");
  else if(p[2]==7)
  strcpy (a[2],"seven hundred");
  else if(p[2]==8)
  strcpy (a[2],"eight hundred");
  else if(p[2]==9)
  strcpy (a[2],"nine hundred");
  if(p[1]==1)
    {
  strcpy(a[1],0);
  if(p[0]==0)
  strcpy (a[0],"ten");
  else if(p[0]==2)
  strcpy (a[0],"twelve");
  else if(p[0]==3)
  strcpy (a[0],"thirteen");
  else if(p[0]==4)
  strcpy (a[0],"fourteen");
  else if(p[0]==5)
  strcpy (a[0],"fivteen");
  else if(p[0]==6)
  strcpy (a[0],"sixteen");
  else if(p[0]==7)
  strcpy (a[0],"seventeen");
  else if(p[0]==8)
  strcpy (a[0],"eighteen");
  else if(p[0]==9)
  strcpy (a[0],"ninteen");
  else if(p[0]==1)
  strcpy (a[0],"eleven");
  }
  else if(p[1]==2)
  strcpy (a[1],"twenty");
  else if(p[1]==3)
  strcpy (a[1],"thirty");
  else if(p[1]==4)
  strcpy (a[1],"fourty");
  else if(p[1]==5)
  strcpy (a[1],"fifty");
  else if(p[1]==6)
  strcpy (a[1],"sixty");
  else if(p[1]==7)
  strcpy (a[1],"seventy");
  else if(p[1]==8)
  strcpy (a[1],"eighty");
  else if(p[1]==9)
  strcpy (a[1],"ninty");
  }
  else if(n==7)
  {
   if(p[6]==1)
    {
  strcpy(a[6],0);
  if(p[5]==0)
  {
  strcpy (a[5],"ten lakh");
  p[5]=0;
  }
  else if(p[5]==2)
  {
  strcpy (a[5],"twelve lakh");
  p[5]=0;
  }
  else if(p[5]==3)
  {
  strcpy (a[5],"thirteen lakh");
  p[5]=0;
  }
  else if(p[5]==4)
  {
  strcpy (a[5],"fourteen lakh");
  p[5]=0;
  }
  else if(p[5]==5)
  {
  strcpy (a[5],"fivteen lakh");
  p[5]=0;
  }
  else if(p[5]==6)
  {
  strcpy (a[5],"sixteen lakh");
  p[5]=0;
  }
  else if(p[5]==7)
  {
  strcpy (a[5],"seventeen lakh");
  p[5]=0;
  }
  else if(p[5]==8)
  {
  strcpy (a[5],"eighteen lakh");
  p[5]=0;
  }
  else if(p[5]==9)
  {
  strcpy (a[5],"ninteen lakh");
  p[5]=0;
  }
  else if(p[5]==1)
  {
  strcpy (a[5],"eleven lakh");
  p[5]=0;
  }
  }
  else if(p[6]==2 && p[5]==0)
  strcpy (a[6],"twenty lakh");
  else if(p[6]==3 && p[5]==0)
  strcpy (a[6],"thirty lakh");
  else if(p[6]==4 && p[5]==0)
  strcpy (a[6],"fourty lakh");
  else if(p[6]==5 && p[5]==0)
  strcpy (a[6],"fifty lakh");
  else if(p[6]==6 && p[5]==0)
  strcpy (a[6],"sixty lakh");
  else if(p[6]==7 && p[5]==0)
  strcpy (a[6],"seventy lakh");
  else if(p[6]==8 && p[5]==0)
  strcpy (a[6],"eighty lakh");
  else if(p[6]==9 && p[5]==0)
  strcpy (a[6],"ninty lakh");
  else if(p[6]==2)
  strcpy (a[6],"twenty");
  else if(p[6]==3)
  strcpy (a[6],"thirty");
  else if(p[6]==4)
  strcpy (a[6],"fourty");
  else if(p[6]==5)
  strcpy (a[6],"fifty");
  else if(p[6]==6)
  strcpy (a[6],"sixty");
  else if(p[6]==7)
  strcpy (a[6],"seventy");
  else if(p[6]==8)
  strcpy (a[6],"eighty");
  else if(p[6]==9)
  strcpy (a[6],"ninty");
  if(p[5]==1)
  strcpy (a[5],"one lakh");
  else if(p[5]==2)
  strcpy (a[5],"two lakh");
  else if(p[5]==3)
  strcpy (a[5],"three lakh");
  else if(p[5]==4)
  strcpy (a[5],"four lakh");
  else if(p[5]==5)
  strcpy (a[5],"five lakh");
  else if(p[5]==6)
  strcpy (a[5],"six lakh");
  else if(p[5]==7)
  strcpy (a[5],"seven lakh");
  else if(p[5]==8)
  strcpy (a[5],"eight lakh");
  else if(p[5]==9)
  strcpy (a[5],"nine lakh");
  if(p[4]==1)
    {
  strcpy(a[4],0);
  if(p[3]==0)
  {
  strcpy (a[3],"ten thousand");
  p[3]=0;
  }
  else if(p[3]==2)
  {
  strcpy (a[3],"twelve thousand");
  p[3]=0;
  }
  else if(p[3]==3)
  {
  strcpy (a[3],"thirteen thousand");
  p[3]=0;
  }
  else if(p[3]==4)
  {
  strcpy (a[3],"fourteen thousand");
  p[3]=0;
  }
  else if(p[3]==5)
  {
  strcpy (a[3],"fivteen thousand");
  p[3]=0;
  }
  else if(p[3]==6)
  {
  strcpy (a[3],"sixteen thousand");
  p[3]=0;
  }
  else if(p[3]==7)
  {
  strcpy (a[3],"seventeen thousand");
  p[3]=0;
  }
  else if(p[3]==8)
  {
  strcpy (a[3],"eighteen thousand");
  p[3]=0;
  }
  else if(p[3]==9)
  {
  strcpy (a[3],"ninteen thousand");
  p[3]=0;
  }
  else if(p[3]==1)
  {
  strcpy (a[3],"eleven thousand");
  p[3]=0;
  }
  }
  else if(p[4]==2 && p[3]==0)
  strcpy (a[4],"twenty thousand");
  else if(p[4]==3 && p[3]==0)
  strcpy (a[4],"thirty thousand");
  else if(p[4]==4 && p[3]==0)
  strcpy (a[4],"fourty thousand");
  else if(p[4]==5 && p[3]==0)
  strcpy (a[4],"fifty thousand");
  else if(p[4]==6 && p[3]==0)
  strcpy (a[4],"sixty thousand");
  else if(p[4]==7 && p[3]==0)
  strcpy (a[4],"seventy thousand");
  else if(p[4]==8 && p[3]==0)
  strcpy (a[4],"eighty thousand");
  else if(p[4]==9 && p[3]==0)
  strcpy (a[4],"ninty thousand");
  else if(p[4]==2)
  strcpy (a[4],"twenty");
  else if(p[4]==3)
  strcpy (a[4],"thirty");
  else if(p[4]==4)
  strcpy (a[4],"fourty");
  else if(p[4]==5)
  strcpy (a[4],"fifty");
  else if(p[4]==6)
  strcpy (a[4],"sixty");
  else if(p[4]==7)
  strcpy (a[4],"seventy");
  else if(p[4]==8)
  strcpy (a[4],"eighty");
  else if(p[4]==9)
  strcpy (a[4],"ninty");
  if(p[3]==1)
  strcpy (a[3],"one thousand");
  else if(p[3]==2)
  strcpy (a[3],"two thousand");
  else if(p[3]==3)
  strcpy (a[3],"three thousand");
  else if(p[3]==4)
  strcpy (a[3],"four thousand");
  else if(p[3]==5)
  strcpy (a[3],"five thousand");
  else if(p[3]==6)
  strcpy (a[3],"six thousand");
  else if(p[3]==7)
  strcpy (a[3],"seven thousand");
  else if(p[3]==8)
  strcpy (a[3],"eight thousand");
  else if(p[3]==9)
  strcpy (a[3],"nine thousand");
  if(p[2]==1)
  strcpy (a[2],"one hundred");
  else if(p[2]==2)
  strcpy (a[2],"two hundred");
  else if(p[2]==3)
  strcpy (a[2],"three hundred");
  else if(p[2]==4)
  strcpy (a[2],"four hundred");
  else if(p[2]==5)
  strcpy (a[2],"five hundred");
  else if(p[2]==6)
  strcpy (a[2],"six hundred");
  else if(p[2]==7)
  strcpy (a[2],"seven hundred");
  else if(p[2]==8)
  strcpy (a[2],"eight hundred");
  else if(p[2]==9)
  strcpy (a[2],"nine hundred");
  if(p[1]==1)
    {
  strcpy(a[1],0);
  if(p[0]==0)
  strcpy (a[0],"ten");
  else if(p[0]==2)
  strcpy (a[0],"twelve");
  else if(p[0]==3)
  strcpy (a[0],"thirteen");
  else if(p[0]==4)
  strcpy (a[0],"fourteen");
  else if(p[0]==5)
  strcpy (a[0],"fivteen");
  else if(p[0]==6)
  strcpy (a[0],"sixteen");
  else if(p[0]==7)
  strcpy (a[0],"seventeen");
  else if(p[0]==8)
  strcpy (a[0],"eighteen");
  else if(p[0]==9)
  strcpy (a[0],"ninteen");
  else if(p[0]==1)
  strcpy (a[0],"eleven");
  }
  else if(p[1]==2)
  strcpy (a[1],"twenty");
  else if(p[1]==3)
  strcpy (a[1],"thirty");
  else if(p[1]==4)
  strcpy (a[1],"fourty");
  else if(p[1]==5)
  strcpy (a[1],"fifty");
  else if(p[1]==6)
  strcpy (a[1],"sixty");
  else if(p[1]==7)
  strcpy (a[1],"seventy");
  else if(p[1]==8)
  strcpy (a[1],"eighty");
  else if(p[1]==9)
  strcpy (a[1],"ninty");
  }
  else if(n==8)
  {
  if(p[7]==1)
  strcpy (a[7],"one crore");
  else if(p[7]==2)
  strcpy (a[7],"two crore");
  else if(p[7]==3)
  strcpy (a[7],"three crore");
  else if(p[7]==4)
  strcpy (a[7],"four crore");
  else if(p[7]==5)
  strcpy (a[7],"five crore");
  else if(p[7]==6)
  strcpy (a[7],"six crore");
  else if(p[7]==7)
  strcpy (a[7],"seven crore");
  else if(p[7]==8)
  strcpy (a[7],"eight crore");
  else if(p[7]==9)
  strcpy (a[7],"nine crore");
  if(p[6]==1)
    {
  strcpy(a[6],0);
  if(p[5]==0)
  {
  strcpy (a[5],"ten lakh");
  p[5]=0;
  }
  else if(p[5]==2)
  {
  strcpy (a[5],"twelve lakh");
  p[5]=0;
  }
  else if(p[5]==3)
  {
  strcpy (a[5],"thirteen lakh");
  p[5]=0;
  }
  else if(p[5]==4)
  {
  strcpy (a[5],"fourteen lakh");
  p[5]=0;
  }
  else if(p[5]==5)
  {
  strcpy (a[5],"fivteen lakh");
  p[5]=0;
  }
  else if(p[5]==6)
  {
  strcpy (a[5],"sixteen lakh");
  p[5]=0;
  }
  else if(p[5]==7)
  {
  strcpy (a[5],"seventeen lakh");
  p[5]=0;
  }
  else if(p[5]==8)
  {
  strcpy (a[5],"eighteen lakh");
  p[5]=0;
  }
  else if(p[5]==9)
  {
  strcpy (a[5],"ninteen lakh");
  p[5]=0;
  }
  else if(p[5]==1)
  {
  strcpy (a[5],"eleven lakh");
  p[5]=0;
  }
  }
  else if(p[6]==2 && p[5]==0)
  strcpy (a[6],"twenty lakh");
  else if(p[6]==3 && p[5]==0)
  strcpy (a[6],"thirty lakh");
  else if(p[6]==4 && p[5]==0)
  strcpy (a[6],"fourty lakh");
  else if(p[6]==5 && p[5]==0)
  strcpy (a[6],"fifty lakh");
  else if(p[6]==6 && p[5]==0)
  strcpy (a[6],"sixty lakh");
  else if(p[6]==7 && p[5]==0)
  strcpy (a[6],"seventy lakh");
  else if(p[6]==8 && p[5]==0)
  strcpy (a[6],"eighty lakh");
  else if(p[6]==9 && p[5]==0)
  strcpy (a[6],"ninty lakh");
  else if(p[6]==2)
  strcpy (a[6],"twenty");
  else if(p[6]==3)
  strcpy (a[6],"thirty");
  else if(p[6]==4)
  strcpy (a[6],"fourty");
  else if(p[6]==5)
  strcpy (a[6],"fifty");
  else if(p[6]==6)
  strcpy (a[6],"sixty");
  else if(p[6]==7)
  strcpy (a[6],"seventy");
  else if(p[6]==8)
  strcpy (a[6],"eighty");
  else if(p[6]==9)
  strcpy (a[6],"ninty");
  if(p[5]==1)
  strcpy (a[5],"one lakh");
  else if(p[5]==2)
  strcpy (a[5],"two lakh");
  else if(p[5]==3)
  strcpy (a[5],"three lakh");
  else if(p[5]==4)
  strcpy (a[5],"four lakh");
  else if(p[5]==5)
  strcpy (a[5],"five lakh");
  else if(p[5]==6)
  strcpy (a[5],"six lakh");
  else if(p[5]==7)
  strcpy (a[5],"seven lakh");
  else if(p[5]==8)
  strcpy (a[5],"eight lakh");
  else if(p[5]==9)
  strcpy (a[5],"nine lakh");
  if(p[4]==1)
    {
  strcpy(a[4],0);
  if(p[3]==0)
  {
  strcpy (a[3],"ten thousand");
  p[3]=0;
  }
  else if(p[3]==2)
  {
  strcpy (a[3],"twelve thousand");
  p[3]=0;
  }
  else if(p[3]==3)
  {
  strcpy (a[3],"thirteen thousand");
  p[3]=0;
  }
  else if(p[3]==4)
  {
  strcpy (a[3],"fourteen thousand");
  p[3]=0;
  }
  else if(p[3]==5)
  {
  strcpy (a[3],"fivteen thousand");
  p[3]=0;
  }
  else if(p[3]==6)
  {
  strcpy (a[3],"sixteen thousand");
  p[3]=0;
  }
  else if(p[3]==7)
  {
  strcpy (a[3],"seventeen thousand");
  p[3]=0;
  }
  else if(p[3]==8)
  {
  strcpy (a[3],"eighteen thousand");
  p[3]=0;
  }
  else if(p[3]==9)
  {
  strcpy (a[3],"ninteen thousand");
  p[3]=0;
  }
  else if(p[3]==1)
  {
  strcpy (a[3],"eleven thousand");
  p[3]=0;
  }
  }
  else if(p[4]==2 && p[3]==0)
  strcpy (a[4],"twenty thousand");
  else if(p[4]==3 && p[3]==0)
  strcpy (a[4],"thirty thousand");
  else if(p[4]==4 && p[3]==0)
  strcpy (a[4],"fourty thousand");
  else if(p[4]==5 && p[3]==0)
  strcpy (a[4],"fifty thousand");
  else if(p[4]==6 && p[3]==0)
  strcpy (a[4],"sixty thousand");
  else if(p[4]==7 && p[3]==0)
  strcpy (a[4],"seventy thousand");
  else if(p[4]==8 && p[3]==0)
  strcpy (a[4],"eighty thousand");
  else if(p[4]==9 && p[3]==0)
  strcpy (a[4],"ninty thousand");
  else if(p[4]==2)
  strcpy (a[4],"twenty");
  else if(p[4]==3)
  strcpy (a[4],"thirty");
  else if(p[4]==4)
  strcpy (a[4],"fourty");
  else if(p[4]==5)
  strcpy (a[4],"fifty");
  else if(p[4]==6)
  strcpy (a[4],"sixty");
  else if(p[4]==7)
  strcpy (a[4],"seventy");
  else if(p[4]==8)
  strcpy (a[4],"eighty");
  else if(p[4]==9)
  strcpy (a[4],"ninty");
  if(p[3]==1)
  strcpy (a[3],"one thousand");
  else if(p[3]==2)
  strcpy (a[3],"two thousand");
  else if(p[3]==3)
  strcpy (a[3],"three thousand");
  else if(p[3]==4)
  strcpy (a[3],"four thousand");
  else if(p[3]==5)
  strcpy (a[3],"five thousand");
  else if(p[3]==6)
  strcpy (a[3],"six thousand");
  else if(p[3]==7)
  strcpy (a[3],"seven thousand");
  else if(p[3]==8)
  strcpy (a[3],"eight thousand");
  else if(p[3]==9)
  strcpy (a[3],"nine thousand");
  if(p[2]==1)
  strcpy (a[2],"one hundred");
  else if(p[2]==2)
  strcpy (a[2],"two hundred");
  else if(p[2]==3)
  strcpy (a[2],"three hundred");
  else if(p[2]==4)
  strcpy (a[2],"four hundred");
  else if(p[2]==5)
  strcpy (a[2],"five hundred");
  else if(p[2]==6)
  strcpy (a[2],"six hundred");
  else if(p[2]==7)
  strcpy (a[2],"seven hundred");
  else if(p[2]==8)
  strcpy (a[2],"eight hundred");
  else if(p[2]==9)
  strcpy (a[2],"nine hundred");
  if(p[1]==1)
    {
  strcpy(a[1],0);
  if(p[0]==0)
  strcpy (a[0],"ten");
  else if(p[0]==2)
  strcpy (a[0],"twelve");
  else if(p[0]==3)
  strcpy (a[0],"thirteen");
  else if(p[0]==4)
  strcpy (a[0],"fourteen");
  else if(p[0]==5)
  strcpy (a[0],"fivteen");
  else if(p[0]==6)
  strcpy (a[0],"sixteen");
  else if(p[0]==7)
  strcpy (a[0],"seventeen");
  else if(p[0]==8)
  strcpy (a[0],"eighteen");
  else if(p[0]==9)
  strcpy (a[0],"ninteen");
  else if(p[0]==1)
  strcpy (a[0],"eleven");
  }
  else if(p[1]==2)
  strcpy (a[1],"twenty");
  else if(p[1]==3)
  strcpy (a[1],"thirty");
  else if(p[1]==4)
  strcpy (a[1],"fourty");
  else if(p[1]==5)
  strcpy (a[1],"fifty");
  else if(p[1]==6)
  strcpy (a[1],"sixty");
  else if(p[1]==7)
  strcpy (a[1],"seventy");
  else if(p[1]==8)
  strcpy (a[1],"eighty");
  else if(p[1]==9)
  strcpy (a[1],"ninty");
  }
  else if(n==9)
  {
   if(p[8]==1)
    {
  strcpy(a[8],0);
  if(p[7]==0)
  {
  strcpy (a[7],"ten crore");
  p[7]=0;
  }
  else if(p[7]==2)
  {
  strcpy (a[7],"twelve crore");
  p[7]=0;
  }
  else if(p[7]==3)
  {
  strcpy (a[7],"thirteen crore");
  p[7]=0;
  }
  else if(p[7]==4)
  {
  strcpy (a[7],"fourteen crore");
  p[7]=0;
  }
  else if(p[7]==5)
  {
  strcpy (a[7],"fivteen crore");
  p[7]=0;
  }
  else if(p[7]==6)
  {
  strcpy (a[7],"sixteen crore");
  p[7]=0;
  }
  else if(p[7]==7)
  {
  strcpy (a[7],"seventeen crore");
  p[7]=0;
  }
  else if(p[7]==8)
  {
  strcpy (a[7],"eighteen crore");
  p[7]=0;
  }
  else if(p[7]==9)
  {
  strcpy (a[7],"ninteen crore");
  p[7]=0;
  }
  else if(p[7]==1)
  {
  strcpy (a[7],"eleven crore");
  p[7]=0;
  }
  }
  else if(p[8]==2 && p[7]==0)
  strcpy (a[8],"twenty crore");
  else if(p[8]==3 && p[7]==0)
  strcpy (a[8],"thirty crore");
  else if(p[8]==4 && p[7]==0)
  strcpy (a[8],"fourty crore");
  else if(p[8]==5 && p[7]==0)
  strcpy (a[8],"fifty crore");
  else if(p[8]==6 && p[7]==0)
  strcpy (a[8],"sixty crore");
  else if(p[8]==7 && p[7]==0)
  strcpy (a[8],"seventy crore");
  else if(p[8]==8 && p[7]==0)
  strcpy (a[8],"eighty crore");
  else if(p[8]==9 && p[7]==0)
  strcpy (a[8],"ninty crore");
  else if(p[8]==2)
  strcpy (a[8],"twenty");
  else if(p[8]==3)
  strcpy (a[8],"thirty");
  else if(p[8]==4)
  strcpy (a[8],"fourty");
  else if(p[8]==5)
  strcpy (a[8],"fifty");
  else if(p[8]==6)
  strcpy (a[8],"sixty");
  else if(p[8]==7)
  strcpy (a[8],"seventy");
  else if(p[8]==8)
  strcpy (a[8],"eighty");
  else if(p[8]==9)
  strcpy (a[8],"ninty");
  if(p[7]==1)
  strcpy (a[7],"one crore");
  else if(p[7]==2)
  strcpy (a[7],"two crore");
  else if(p[7]==3)
  strcpy (a[7],"three crore");
  else if(p[7]==4)
  strcpy (a[7],"four crore");
  else if(p[7]==5)
  strcpy (a[7],"five crore");
  else if(p[7]==6)
  strcpy (a[7],"six crore");
  else if(p[7]==7)
  strcpy (a[7],"seven crore");
  else if(p[7]==8)
  strcpy (a[7],"eight crore");
  else if(p[7]==9)
  strcpy (a[7],"nine crore");
  if(p[6]==1)
    {
  strcpy(a[6],0);
  if(p[5]==0)
  {
  strcpy (a[5],"ten lakh");
  p[5]=0;
  }
  else if(p[5]==2)
  {
  strcpy (a[5],"twelve lakh");
  p[5]=0;
  }
  else if(p[5]==3)
  {
  strcpy (a[5],"thirteen lakh");
  p[5]=0;
  }
  else if(p[5]==4)
  {
  strcpy (a[5],"fourteen lakh");
  p[5]=0;
  }
  else if(p[5]==5)
  {
  strcpy (a[5],"fivteen lakh");
  p[5]=0;
  }
  else if(p[5]==6)
  {
  strcpy (a[5],"sixteen lakh");
  p[5]=0;
  }
  else if(p[5]==7)
  {
  strcpy (a[5],"seventeen lakh");
  p[5]=0;
  }
  else if(p[5]==8)
  {
  strcpy (a[5],"eighteen lakh");
  p[5]=0;
  }
  else if(p[5]==9)
  {
  strcpy (a[5],"ninteen lakh");
  p[5]=0;
  }
  else if(p[5]==1)
  {
  strcpy (a[5],"eleven lakh");
  p[5]=0;
  }
  }
  else if(p[6]==2 && p[5]==0)
  strcpy (a[6],"twenty lakh");
  else if(p[6]==3 && p[5]==0)
  strcpy (a[6],"thirty lakh");
  else if(p[6]==4 && p[5]==0)
  strcpy (a[6],"fourty lakh");
  else if(p[6]==5 && p[5]==0)
  strcpy (a[6],"fifty lakh");
  else if(p[6]==6 && p[5]==0)
  strcpy (a[6],"sixty lakh");
  else if(p[6]==7 && p[5]==0)
  strcpy (a[6],"seventy lakh");
  else if(p[6]==8 && p[5]==0)
  strcpy (a[6],"eighty lakh");
  else if(p[6]==9 && p[5]==0)
  strcpy (a[6],"ninty lakh");
  else if(p[6]==2)
  strcpy (a[6],"twenty");
  else if(p[6]==3)
  strcpy (a[6],"thirty");
  else if(p[6]==4)
  strcpy (a[6],"fourty");
  else if(p[6]==5)
  strcpy (a[6],"fifty");
  else if(p[6]==6)
  strcpy (a[6],"sixty");
  else if(p[6]==7)
  strcpy (a[6],"seventy");
  else if(p[6]==8)
  strcpy (a[6],"eighty");
  else if(p[6]==9)
  strcpy (a[6],"ninty");
  if(p[5]==1)
  strcpy (a[5],"one lakh");
  else if(p[5]==2)
  strcpy (a[5],"two lakh");
  else if(p[5]==3)
  strcpy (a[5],"three lakh");
  else if(p[5]==4)
  strcpy (a[5],"four lakh");
  else if(p[5]==5)
  strcpy (a[5],"five lakh");
  else if(p[5]==6)
  strcpy (a[5],"six lakh");
  else if(p[5]==7)
  strcpy (a[5],"seven lakh");
  else if(p[5]==8)
  strcpy (a[5],"eight lakh");
  else if(p[5]==9)
  strcpy (a[5],"nine lakh");
  if(p[4]==1)
    {
  strcpy(a[4],0);
  if(p[3]==0)
  {
  strcpy (a[3],"ten thousand");
  p[3]=0;
  }
  else if(p[3]==2)
  {
  strcpy (a[3],"twelve thousand");
  p[3]=0;
  }
  else if(p[3]==3)
  {
  strcpy (a[3],"thirteen thousand");
  p[3]=0;
  }
  else if(p[3]==4)
  {
  strcpy (a[3],"fourteen thousand");
  p[3]=0;
  }
  else if(p[3]==5)
  {
  strcpy (a[3],"fivteen thousand");
  p[3]=0;
  }
  else if(p[3]==6)
  {
  strcpy (a[3],"sixteen thousand");
  p[3]=0;
  }
  else if(p[3]==7)
  {
  strcpy (a[3],"seventeen thousand");
  p[3]=0;
  }
  else if(p[3]==8)
  {
  strcpy (a[3],"eighteen thousand");
  p[3]=0;
  }
  else if(p[3]==9)
  {
  strcpy (a[3],"ninteen thousand");
  p[3]=0;
  }
  else if(p[3]==1)
  {
  strcpy (a[3],"eleven thousand");
  p[3]=0;
  }
  }
  else if(p[4]==2 && p[3]==0)
  strcpy (a[4],"twenty thousand");
  else if(p[4]==3 && p[3]==0)
  strcpy (a[4],"thirty thousand");
  else if(p[4]==4 && p[3]==0)
  strcpy (a[4],"fourty thousand");
  else if(p[4]==5 && p[3]==0)
  strcpy (a[4],"fifty thousand");
  else if(p[4]==6 && p[3]==0)
  strcpy (a[4],"sixty thousand");
  else if(p[4]==7 && p[3]==0)
  strcpy (a[4],"seventy thousand");
  else if(p[4]==8 && p[3]==0)
  strcpy (a[4],"eighty thousand");
  else if(p[4]==9 && p[3]==0)
  strcpy (a[4],"ninty thousand");
  else if(p[4]==2)
  strcpy (a[4],"twenty");
  else if(p[4]==3)
  strcpy (a[4],"thirty");
  else if(p[4]==4)
  strcpy (a[4],"fourty");
  else if(p[4]==5)
  strcpy (a[4],"fifty");
  else if(p[4]==6)
  strcpy (a[4],"sixty");
  else if(p[4]==7)
  strcpy (a[4],"seventy");
  else if(p[4]==8)
  strcpy (a[4],"eighty");
  else if(p[4]==9)
  strcpy (a[4],"ninty");
  if(p[3]==1)
  strcpy (a[3],"one thousand");
  else if(p[3]==2)
  strcpy (a[3],"two thousand");
  else if(p[3]==3)
  strcpy (a[3],"three thousand");
  else if(p[3]==4)
  strcpy (a[3],"four thousand");
  else if(p[3]==5)
  strcpy (a[3],"five thousand");
  else if(p[3]==6)
  strcpy (a[3],"six thousand");
  else if(p[3]==7)
  strcpy (a[3],"seven thousand");
  else if(p[3]==8)
  strcpy (a[3],"eight thousand");
  else if(p[3]==9)
  strcpy (a[3],"nine thousand");
  if(p[2]==1)
  strcpy (a[2],"one hundred");
  else if(p[2]==2)
  strcpy (a[2],"two hundred");
  else if(p[2]==3)
  strcpy (a[2],"three hundred");
  else if(p[2]==4)
  strcpy (a[2],"four hundred");
  else if(p[2]==5)
  strcpy (a[2],"five hundred");
  else if(p[2]==6)
  strcpy (a[2],"six hundred");
  else if(p[2]==7)
  strcpy (a[2],"seven hundred");
  else if(p[2]==8)
  strcpy (a[2],"eight hundred");
  else if(p[2]==9)
  strcpy (a[2],"nine hundred");
  if(p[1]==1)
    {
  strcpy(a[1],0);
  if(p[0]==0)
  strcpy (a[0],"ten");
  else if(p[0]==2)
  strcpy (a[0],"twelve");
  else if(p[0]==3)
  strcpy (a[0],"thirteen");
  else if(p[0]==4)
  strcpy (a[0],"fourteen");
  else if(p[0]==5)
  strcpy (a[0],"fivteen");
  else if(p[0]==6)
  strcpy (a[0],"sixteen");
  else if(p[0]==7)
  strcpy (a[0],"seventeen");
  else if(p[0]==8)
  strcpy (a[0],"eighteen");
  else if(p[0]==9)
  strcpy (a[0],"ninteen");
  else if(p[0]==1)
  strcpy (a[0],"eleven");
  }
  else if(p[1]==2)
  strcpy (a[1],"twenty");
  else if(p[1]==3)
  strcpy (a[1],"thirty");
  else if(p[1]==4)
  strcpy (a[1],"fourty");
  else if(p[1]==5)
  strcpy (a[1],"fifty");
  else if(p[1]==6)
  strcpy (a[1],"sixty");
  else if(p[1]==7)
  strcpy (a[1],"seventy");
  else if(p[1]==8)
  strcpy (a[1],"eighty");
  else if(p[1]==9)
  strcpy (a[1],"ninty");
  }
  }
  for(i=n-1;i>=0;i--)
  {
   if(strcmp(a[i],"zero")!=0)
   printf("%s  ",a[i]);
  }
  getch();
  }
