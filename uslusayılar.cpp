#include<stdio.h>

main(void){
	int i,kuvvet,sonuc=2;
	printf("2'nin kacýncý kuvveti elde edilecek");
	scanf("%d",&kuvvet);
	if(kuvvet==0)sonuc=1;
	else{
		for(i = 2 ; i<=kuvvet;i++){
			sonuc=sonuc*2;
			printf("\n 2 Sayisinin %d. kuvveti %d",i,sonuc);
		}
	}	
}
