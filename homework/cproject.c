#pragma warning(disable : 4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LINE 2000

int main(void)
{
 FILE* fp1;
 char line[LINE];
 char * ptr;
 char name[50][100] = { "", };
 int i=0, j, countk = 0, countl = 0, countljy = 0;

 

 fp1 = fopen("text.txt", "r");//text ������ �д´�.

 if (fp1 == NULL)
 {
  printf("������ �� �� �����ϴ�.\n");
  exit(1);
 }

 fgets(line, LINE, fp1); // ������ �� �࿡�� ���� LINE���� �о ���� �迭 line �� �����Ѵ�.
 

 printf("%s\n", line);

 ptr = strtok(line, ","); // ���ڿ����� ,�� ã�Ƴ���.

 while (NULL != ptr)
 {
  strcpy(name[i], ptr);
  ptr = strtok(NULL, ",");
  i++;
 }  // , �� �߶󳽴�. name�� ptr�� �ִ´�.


 
 
 fclose(fp1);

 char kim[10] = "��"; char lee[10] = "��";

 for (i = 0; i < 17; i++)
 {
  if (!strncmp(name[i], kim, 2))
  {
   countk++;
  }

  if (!strncmp(name[i], lee, 2) )
  {
   countl++;
  }
  // �տ� �ѱ��ھ� ���Ͽ� ������ �����س���.
  

 }

 printf("\n�达�� %d��, �̾��� %d�� �Դϴ�.\n", countk, countl);


 char ljy[20] = "���翵";

 for (i = 0; i < 17; i++) {

  if (!strcmp(name[i], ljy))
  {
   countljy++;
  }
 } // ���ڿ� ��ü�� ���Ͽ� ���翵 ������ ã�´�.

 printf("���翵�� %d�� �ݺ��ȴ�.\n", countljy);

 printf("\n�ߺ��� ������ �̸��� ������������ �����ϰ� ����� �� ���Ϸ� ����ϼ���.\n");

 int p, k = 0;

 

 for (p = 0; p < 17; p++)
 {
  for (k = p + 1; k < 17; k++)
  {
   if (!strcmp(name[p], name[k]))
    *name[k] = '\0'; // ���ؼ� ������ ���ش�.
  } 
 }

 printf("\n�ߺ��� ����:");
 for (i = 0; i < 17; i++)
 {
  printf("%s ", name[i]);
 } // �����̸��� ������ �� �迭

 printf("\n");

 int u;
 char temp[17];
 
 for (p = 0; p < 17; p++)
 {
  u = p;
  for (k = p + 1; k < 17; k++)
  {
   if (strcmp(name[u], name[k]) > 0)
    u = k;
  }
  strcpy(temp, name[p]);
  strcpy(name[p], name[u]);
  strcpy(name[u], temp);
 } //  ���� �������� �����Ѵ�.


 printf("���� ��� :");

 

 for (i = 0; i < 17; i++)
  printf("%s ", name[i]);
 printf("\n");


 FILE *fp2 = fopen("end.txt", "w");
 for (i = 0; i < 17; i++)
  fprintf(fp2, "%s ", name[i]);
 // ���� ���� �ڵ�

 return 0;
}
 
