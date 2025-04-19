#include<stdio.h>

int main(void){
	int *pointer,sayi=1;
	pointer=&sayi;
	printf("\n %d \n",pointer);
	printf("\n %d \n",*pointer);
	printf("\n %d \n",sayi);
	printf("\n %d \n",&sayi);
}
