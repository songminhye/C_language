#include<stdio.h>

void sort3(int* a, int* b, int* c);

int main(void){

	int x,y,z;
	x = 610, y = 85, z=30;
	sort3(&x, &y, &z);
	printf("x=%d, y=%d, z=%d.\n\n",x,y,z);

	return 0;

	}

void sort3(int *a, int* b, int* c) {

	int k[] ={*a,*b,*c};
	int i,j;
	int temp = 0;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){

		if(k[i]<k[j]){
			temp = k[i];
			k[i] = k[j];
			k[j] = temp;
	 	}
		}
	}
	*a=k[0];
	*b=k[1];
	*c=k[2];

}
