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


 printf("3�� 5�� ����� ������ %d�̴�.\n",sum);
 
 return 0;
}
