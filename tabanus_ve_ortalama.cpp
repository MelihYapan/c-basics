#include<stdio.h>

int main(void){
	
	// TABAN US
	/*
	int i,taban,us,toplam=1;
		printf("Taban ve Us giriniz");
		scanf("%d %d",&taban,&us);
		
	for(i=1;i<=us;i++){
		toplam =+ toplam*taban;
	}
	printf("%d Uzeri %d = %d",taban,us,toplam);
	*/
	
	//ORTALAMA
	/*
	int sayidizisi[5];
	int i,toplam;
	float ortalama;
	
	printf("5 Sayi Giriniz");
	for(i=0;i<5;i++){
		scanf("%d",&sayidizisi[i]);
		toplam += sayidizisi[i];
	}
	ortalama = float(toplam/5);
	printf("Girilen Sayilarin Ortalamasi: %f",ortalama);
	*/
	
	
	// BOZUK, SAYILARIN TEK ÇÝFT BULMA ORTALAMA ALMA 
	/*
	int sayidizisi[5],teksayilar=0,ciftsayilar=0;
	
	int i,teksayiToplam,ciftsayiToplam;
	float teksayiort,ciftsayiort;
	
	for(i=1;i<=5;i++){
		printf("%d. Sayiyi Giriniz",i);
		scanf("%d",&sayidizisi[i]);
		if(sayidizisi[i]%2==0){
			ciftsayilar++;
			ciftsayiToplam += sayidizisi[i];
		}
		else{
			teksayilar++;
			teksayiToplam += sayidizisi[i];
		}
	}
	for(i=1;i<=5;i++){
		if(sayidizisi[i]%2==0){
			printf("%d Cift sayi \n",sayidizisi[i]);
		}
		else{
			printf("%d Tek sayi \n",sayidizisi[i]);
		}
	}
	printf("---------\n %d Tek Toplam \n",teksayiToplam);
	printf("%d Cift Toplam \n-----------\n",ciftsayiToplam);
	printf("----------\n Tek Sayi Adedi %d \n",teksayilar);
	printf("Cift Sayi Adedi %d \n",ciftsayilar);

	teksayiort = float(teksayiToplam/teksayilar);
	ciftsayilar = float(ciftsayiToplam/ciftsayilar);
	printf("Tek Sayi Ortlamasi %1.f \n",teksayiort);
	printf("Cift Sayi Ortlamasi %1.f",ciftsayiort);
	*/
}

