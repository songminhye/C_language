
#include <stdio.h>

#include <stdlib.h>

#include <time.h>




struct card{

	int a[7];

};




int main(void)

{

	int number[14] = { 0, };

	int i,j,temp,hi;

	int a=0,b=0,c=0,d=0;

	struct card st1,st2;

	char rym[13][3]={"K","A","2","3","4","5","6","7","8","9","10","J","Q"};

	enum shape{��,��,��,��};

	srand((unsigned)time(NULL));//�ʱ�ȭ




	for(i=0;i<14;i++){

		number[i]=rand()%52;

		for(j=0;j<i;j++){

			if(number[j]==number[i])

				i--;

		}

		if(i<7)

			st1.a[i]=number[i];

		if(i>=7)

			st2.a[i-7]=number[i];

	}

	

	printf("1�� ī���: ");

	for(i=0;i<7;i++){

		hi=st1.a[i]/13;

		if(hi==��){

			printf("�� %s ",rym[st1.a[i]%13]);

		}

		if(hi==��){

			printf("�� %s ",rym[st1.a[i]%13]);

		}

		if(hi==��){

			printf("�� %s ",rym[st1.a[i]%13]);

		}

		if(hi==��){

			printf("�� %s ",rym[st1.a[i]%13]);

		}

	}//1ī�� ���

	for(i=0;i<7;i++){

		if((st1.a[i]/13)==0){

			a++;

			}

		if((st1.a[i]/13)==1){

			b++;

		}

		if((st1.a[i]/13)==2){

			c++;

		}

		if((st1.a[i]/13)==3){

			d++;

		}

	}

	if((a>=5)||(b>=5)||(c>=5)||(d>=5)){

		printf(" �÷����Դϴ�.");

	}

	puts("\n===================================================");

	a=0,b=0,c=0,d=0;

	printf("2�� ī���: ");

	for(i=0;i<7;i++){

		hi=st2.a[i]/13;

		if(hi==��){

			printf("�� %s ",rym[st2.a[i]%13]);

		}

		if(hi==��){

			printf("�� %s ",rym[st2.a[i]%13]);

		}

		if(hi==��){

			printf("�� %s ",rym[st2.a[i]%13]);

		}

		if(hi==��){

			printf("�� %s ",rym[st2.a[i]%13]);

		}

	}//2ī�� ���

	for(i=0;i<7;i++){

		if((st2.a[i]/13)==0){

			a++;

			}

		if((st2.a[i]/13)==1){

			b++;

		}

		if((st2.a[i]/13)==2){

			c++;

		}

		if((st2.a[i]/13)==3){

			d++;

		}

	}

	if((a>=5)||(b>=5)||(c>=5)||(d>=5)){

		printf(" �÷����Դϴ�.\n");

	}




	return 0;

}
