#include<stdio.h>
#include<stdlib.h>
#include <time.h>

struct list {
 int a[7];
};

int main (void)
{ 
int i,j;
struct list st1,st2;
 int card[14];
 int a=0,b=0,c=0,d=0;
 char y[13]={'A','2','3','4','5','6','7','8','9','10','J','Q','K'};

    srand(time(NULL));
 
 for(i=0;i<14;i++)
 {
 card[i]=rand()%52;
 for (j=0;j<i;j++) {
  if (card[j]==card[i])
   i--;
 }
 }

for(i=0;i<7;i++){
 st1.a[i]=card[i];
 st2.a[i]=card[13-i]; } // st1.a 에 7장카드 st2.a에 7장카드 배열해줌

for(i=0;i<7;i++){
if(st1.a[i]/13==0) printf("♥%c ",y[st1.a[i]%13]);
if(st1.a[i]/13==1) printf("◆%c ",y[st1.a[i]%13]);
if(st1.a[i]/13==2) printf("♣%c ",y[st1.a[i]%13]);
if(st1.a[i]/13==3) printf("♠%c ",y[st1.a[i]%13]);
}

for(i=0;i<7;i++){
  if((st1.a[i]/13)==0)
   a++;
  if((st1.a[i]/13)==1)
   b++;
  if((st1.a[i]/13)==2)
   c++;
  if((st1.a[i]/13)==3)
   d++;
 }


if((a>=5)||(b>=5)||(c>=5)||(d>=5))
 printf("학생1은 플러쉬입니다.\n");

else 
printf("플러쉬가 아닙니다.\n");

 


puts("\n");
for(i=0;i<7;i++){
if(st2.a[i]/13==0) printf("♥%c ",y[st2.a[i]%13]);
if(st2.a[i]/13==1) printf("◆%c ",y[st2.a[i]%13]);
if(st2.a[i]/13==2) printf("♣%c ",y[st2.a[i]%13]);
if(st2.a[i]/13==3) printf("♠%c ",y[st2.a[i]%13]);
}

  a=0,b=0,c=0,d=0;

for(i=0;i<7;i++){
  if((st2.a[i]/13)==0)
   a++;
  if((st2.a[i]/13)==1)
   b++;
  if((st2.a[i]/13)==2)
   c++;
  if((st2.a[i]/13)==3)
   d++;
 }


if((a>=5)||(b>=5)||(c>=5)||(d>=5))
 printf("학생2은 플러쉬입니다.\n");

else 
printf("플러쉬가 아닙니다.\n");


   return 0;
}
