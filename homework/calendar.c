#include <stdio.h>
int main(void)
{
 int year;
 int line;
 int leap_year;
 int first_day;
    int start_day[12];
 int i,j, k=-1;
 int max_day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
 int count,t,month;
 int print_day[12] = {1,1,1,1,1,1,1,1,1,1,1,1};

 printf("연도를 입력하세요.\n");
 scanf("%d",&year);
 printf("열 수를 입력하세요.\n");
 scanf("%d",&line);

 leap_year = year/4 + year/400 - year/100; // 윤년의 갯수 구하기
 first_day = ((year-1) * 365 + leap_year)%7; // (윤년 일수 + 그냥 일수) 나누기 7의 나머지

 if((year%4==0&&year%100!=0)||year%400==0)
  max_day[1] = 29;

 for (i=0; i<12; i++)
 {
 start_day[i] = first_day;

     for(j=0; j<i; j++) {
  switch(j+1)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
   start_day[i]+=31;
   break;
  case 4:
  case 6:
  case 9:
  case 11:
   start_day[i] += 30;
   break;
  case 2:
   start_day[i] += 28;
   break;
  }
  if(i>1&&(year%4==0&&year%100!=0)||year%400==0)
   start_day[i] += 1;
  start_day[i] = start_day[i] % 7;
 }
 printf("%d년의 달력~\n", year);
    for (i=0; i<12; i++)
 { printf("%2d월                   ",i+1);
 if((i+1)% line ==0) {
  printf("\n");
  k++;
  for(j=0; j<line; j++){
   printf("월 화 수 목 금 토 일   ");}
  printf("\n");

  for(t=0; t<line; t++)
  {
   month = k*line+t;
   count = start_day[month];
   for (j=0; j<7; j++)
   {
    if(j<count){
     printf("   ");}
    else {
     printf("%2d ", print_day[month]);
    print_day[month]++;}
   }
   printf("  ");
  }
  printf("\n");

  for (j=0; j<5; j++) 
  {
   for(t=0; t<line; t++)
  {
   month = k*line+t;
   
   for (count=0; count<7; count++)
   {
    if(print_day[month]<=max_day[month]){
    printf("%2d ", print_day[month]);
    print_day[month]++;}
    else
    {
     printf("   ");
   }
   }
   printf("  ");
  }
  printf("\n");
   }
  printf("\n");
  }
 }
}
