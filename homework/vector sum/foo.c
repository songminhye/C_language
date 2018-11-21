#include<stdio.h>

double SelectSum(int a[], int dim_a, double b[], int size_b);
int main(){


	double  a[] = {-1.0,0.56,1.7};
	double  b[] = {0.9,-0.7,5.6};
	printf("SelectSum(a) = %f\n",SelectSum(a,3,b,3));
	return 0;
	}

double  SelectSum(int a[], int size_a, double b[], int size_b){

	int i;
	double sum=0;
	for(i=0; i<size_a; i++){
	sum += a[i]*b[i];
	}

	return sum;		

}






	

