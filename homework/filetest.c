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
  { printf("������ ������ �ʽ��ϴ�.\n");
  exit(1);
  }

  printf("�������� ����,�߰����,�⸻��� ������ �Է��ϼ���(q �Է� �� ����)\n");
  
  for(i=0; ; i++) {
  gets(name);
  
  if (name[0] == 'q'){
   break; }

     fprintf(fp,"%s\n",name);
        
  }
  fclose(fp);
  fp = fopen("grade.txt","r");
   printf("���� �Է��� ����Ǿ����ϴ�.\n");

   if(fp==NULL)
   {printf("������ ������ �ʽ��ϴ�.\n");
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
