#include <stdio.h>

int main(void){

 int year,i=0,a=0,j=0,resumt=0,b=0,z=0,count=0,k=0,m=0;
  int date[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  int date_1[12]={31,29,31,30,31,30,31,31,30,31,30,31};
  printf("달력을 프린트하겠습니다.\n");
  printf("출력하려는 해를 입력하세요.\n");
  scanf_s("%d",&year);

       for(i=1;i<year;i++){
    if( (i%4==0&&i%100!=0) || i%400==0){
    a=366;
   }
   else{
    a=365;
   }
  z+=a;
  }

 b=z%7;

 for(k=0;k<12;k++){
   
    printf(" << %d 월>>\n", k+1);
    printf("\n");
    printf("월 화 수 목 금 토 일\n");
  
  if((year%4==0&&year%100!=0) || year%400==0){
    for(m=0;m<b;m++){
    printf("   ");
    count=b;}
    
    for(j=1;j<=date_1[k];j++){
     printf("%2.d ",j);
     count++;
     if(count==7){
     printf("\n");
     count=0;}
   b=(b+date_1[k])%7;}
  }

 else{
     for(m=0;m<b;m++){
    printf("   ");
    count=b;}
    
    for(j=1;j<=date_1[k];j++){
     printf("%2.d ",j);
     count++;
     if(count==7){
     printf("\n");
     count=0;}
   b=(b+date_1[k])%7;}
  }
  printf("\n");
 }
 return 0;
 }
