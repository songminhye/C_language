#include<stdio.h>

void bubble(int a[ ],int count);

 

int main(void){

	int i,j,k,min;

	int a[5];

	int b[10];

 

	printf("정수 5개를 입력하세요.\n");

	for(i=0;i<5;i++){

		scanf("%d",&a[i]);

	}

 

	bubble(a,5);

	min=a[1]-a[0];

 

	for(i=0;i<4;i++){

		if(min>(a[i+1]-a[i]))

			min=a[i+1]-a[i];

	}

	for(i=0;i<4;i++){

		if(min==a[i+1]-a[i]){

			k=i;

		}

	}

 

	printf("(%d,%d)",a[k],a[k+1]);

 

	return 0;

}

void bubble(int a[ ],int count)

{

	int i,j;

	int temp;

 

	for(i=0;i<count-1;i++){

		for(j=1;j<count-i;j++){

			if(a[j-1]>a[j]){

				temp=a[j-1];

				a[j-1]=a[j];

				a[j]=temp;

			}

		}

	}

}
