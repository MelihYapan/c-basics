#include<stdio.h>

int main(void){
	
	
	//HARF FOR DONGUSU
	/*
	char harf;
	
	for(harf='A';harf<='Z';harf++){
		printf("%c\t",harf);
	}
	
	return 0;
	*/
	
	
	/*for içinde for
	int i,j;
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			printf("%d x %d = %d \n",i,j,(i*j));
		}
		printf("\n");
	}
	*/

	
	
	//100 Toplam
	/*
	int i,toplam;
	for(i=1;i<=100;i++){
		toplam = i+toplam;
		if(i==100){
			printf("%d",toplam);
		}
	}
	*/
	
	//i 2 ile artis
	/*
	int i;
	
	for(i=1;i<=100;i++){
		if(i%2==0){
			printf("%d \n",i);
		}
	}
	*/
	
	
	//TEK SAYILAR
	/*
	int sayi,top;
	for(sayi=1;sayi<=100;sayi++){
		if(sayi%2!=0){
			top = sayi+top;
		}
		if(sayi==100){
			printf("%d",top);
		}
	}
	*/
	
	
	//KÜP 
	/*
	int i,toplam,kup;
	
	for(i=1;i<=10;i++){
		kup = i*i*i;
		toplam = kup+toplam;
		printf("%d \n",kup);
		if(i==10){
			printf("TOPLAM = %d",toplam);
		}
	}
	*/
	/*
	int sayi,gecicisayi,basamaksayi=0;
	printf("SAYI GIRINIZ \n");
	scanf("%d",&sayi);
	
	gecicisayi = sayi;
	printf("Sayinin Tersi");
	
	while(gecicisayi!=0){
		printf("%d,",gecicisayi%10);
		gecicisayi/=10;
		basamaksayi++;
	}
	printf("\n%d");
	*/
	
	
	int sayi1,sayi2,ekok;
	scanf("%d",&sayi1);
	scanf("%d",&sayi2);
	
	for(int i = (sayi1*sayi2);i>0;i--){
		if(i%sayi1== 0&& sayi2% i == 0){
			ekok = i;
		}
	}
	printf("EKOK %d",ekok);
}
