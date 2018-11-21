#include <stdio.h>
int main (void)
{
 
 int sum=0;
 int i;
 int k;

 for(i=1; i<1000; i++)
 {
  if(i%3==0)
  { 
   sum += i;
  }
  if (i%5==0)
  {
   sum += i;
  }
  if(i%15==0)
  {
   sum -= i;
  }
 }


 printf("3과 5의 배수의 총합은 %d이다.\n",sum);
 
 return 0;
}
