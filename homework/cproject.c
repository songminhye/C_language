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

 

 fp1 = fopen("text.txt", "r");//text 파일을 읽는다.

 if (fp1 == NULL)
 {
  printf("파일을 열 수 없습니다.\n");
  exit(1);
 }

 fgets(line, LINE, fp1); // 파일의 한 행에서 문자 LINE개를 읽어서 문자 배열 line 에 저장한다.
 

 printf("%s\n", line);

 ptr = strtok(line, ","); // 문자열에서 ,를 찾아낸다.

 while (NULL != ptr)
 {
  strcpy(name[i], ptr);
  ptr = strtok(NULL, ",");
  i++;
 }  // , 를 잘라낸다. name에 ptr을 넣는다.


 
 
 fclose(fp1);

 char kim[10] = "김"; char lee[10] = "이";

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
  // 앞에 한글자씩 비교하여 성씨를 구분해낸다.
  

 }

 printf("\n김씨는 %d명, 이씨는 %d명 입니다.\n", countk, countl);


 char ljy[20] = "이재영";

 for (i = 0; i < 17; i++) {

  if (!strcmp(name[i], ljy))
  {
   countljy++;
  }
 } // 문자열 전체를 비교하여 이재영 개수를 찾는다.

 printf("이재영은 %d번 반복된다.\n", countljy);

 printf("\n중복을 제거한 이름을 오름차순으로 정렬하고 모니터 및 파일로 출력하세요.\n");

 int p, k = 0;

 

 for (p = 0; p < 17; p++)
 {
  for (k = p + 1; k < 17; k++)
  {
   if (!strcmp(name[p], name[k]))
    *name[k] = '\0'; // 비교해서 같을때 없앤다.
  } 
 }

 printf("\n중복을 제거:");
 for (i = 0; i < 17; i++)
 {
  printf("%s ", name[i]);
 } // 같은이름을 제거한 후 배열

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
 } //  오름 차순으로 정렬한다.


 printf("정렬 결과 :");

 

 for (i = 0; i < 17; i++)
  printf("%s ", name[i]);
 printf("\n");


 FILE *fp2 = fopen("end.txt", "w");
 for (i = 0; i < 17; i++)
  fprintf(fp2, "%s ", name[i]);
 // 파일 쓰기 코드

 return 0;
}
 
