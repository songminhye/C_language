#include <stdio.h>
#include <stdlib.h>


struct students{

	char name[40];

	char address[40];

	int age;

};

 

typedef struct students student;

 

int main(void)

{

 

	FILE* fp1;

	

 

	student st1 = {"ȫ�浿", "����", 30}, st2;

	student st3 = {"�̼���", "�뿵", 56}, st4;

 

 

	if((fp1=fopen("basic.txt", "w"))==NULL)

	{

		printf("������ �� �� �����ϴ�.\n");

		exit(1);

	}

 

	fprintf(fp1, "%s %s %d\n", st1.name, st1.address, st1.age);

	fprintf(fp1, "%s %s %d\n", st3.name, st3.address, st3.age);

	fclose(fp1);

 

	

   if((fp1=fopen("basic.txt", "r"))==NULL)

	{

		printf("������ �� �� �����ϴ�.\n");

		exit(1);

	}

 

	fscanf(fp1, "%s %s %d\n", st2.name, st2.address, &st2.age);

	fscanf(fp1, "%s %s %d\n", st4.name, st4.address, &st4.age); 

	printf("�̸� : %s, ������ : %s, ���� : %d\n", st2.name, st2.address, st2.age);

	printf("�̸� : %s, ������ : %s, ���� : %d\n", st4.name, st4.address, st4.age);

 

 

	fclose(fp1);

 

	

 

	return 0;

}
