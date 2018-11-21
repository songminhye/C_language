#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main (void)
{
  FILE*fp;
  char name[100];
  char get[100];
  int i;
  int j=0;

  if((fp=fopen("grade.txt","w"))==NULL)
  { printf("파일이 열리지 않습니다.\n");
  exit(1);
  }

  printf("여러줄의 성명,중간고사,기말고사 점수를 입력하세요(q 입력 시 종료)\n");
  
  for(i=0; ; i++) {
  gets(name);
  
  if (name[0] == 'q'){
   break; }

     fprintf(fp,"%s\n",name);
        
  }
  fclose(fp);
  fp = fopen("grade.txt","r");
   printf("파일 입력이 종료되었습니다.\n");

   if(fp==NULL)
   {printf("파일이 열리지 않습니다.\n");
  exit(1);
  }
   fgets(get,100,fp);
   while(!feof(fp))
   {
  printf("%s",get);
  fgets(get,100,fp);
   }
    
  
     fclose(fp);


   return 0;
}
