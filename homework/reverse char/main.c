#include<stdio.h>
#include<string.h>
void RevChar (char *s);
int main(void)
{
	char s[] = "123456789";
	RevChar(s);
	printf("s = %s\n",s);

	return 0;
}

void RevChar(char *s)
{
	int i,length;
	length = strlen(s);
	char du[length];
	char* re;
	re = strcpy(du,s);
	for(i=0;i<length;i++){
		*(re+i)=*(s+i);
	}
	for(i=0;i<length;i++){
		*(s+i)=*(re+length-i-1);
	}
}



