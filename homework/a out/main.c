#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* contain_a(char* text);

int main() 
{
	char s1[] = "There is no a here ";
	char s2[] = "I abandoned the project";
	char s3[] = "ABCDEFG";
	char* found;

	found = contain_a(s1);
	if(found) 
		printf("%s\n",found);

	found = contain_a(s2);
	if(found) 
		printf("%s\n",found);


	found = contain_a(s3);
	if(found) 
		printf("%s\n",found);

	
	return 0;
}

char* contain_a(char* text)
{

	int i,j,length;
	length = strlen(text);

	
	for(i=0; i<length; i++){
	    if(*(text+i) == 'a')
	    { 
		
		return (text+i);
	
		}
		
	      
	  }
		return (text+i);
		
	
}



