#include<stdio.h>
#include <time.h>
#include <stdlib.h>

main(void){
	//RASTGELE SAYI , DÝZÝ , ORTALAMA TOPLAM
	/*
	int  i,sayilar[10];
	float toplam,ortalama;
	srand(time(NULL));
	
	printf("SAYILAR\n");
	for(i=0;i<=10;i++){
		sayilar[i]=rand()%100;
		toplam+=sayilar[i];
		printf("%d. indis:%d\n",i,sayilar[i]);
		if(i==10){
			printf("TOPLAM %.2f \n",toplam);
			ortalama = toplam/10;
			printf("ORTALAMA %.2f \n",ortalama);
		}
	}
	*/
	
	//RASTGELE SAYÝ KUCUK VE BUYUK SAYI DONGUDE ÝNDEKS BULMA
	/*
	int  kindex,bindex,i,bs,ks,sayilar[10];
	srand(time(NULL));
	
	printf("SAYILAR\n");
	for(i=0;i<10;i++){
		sayilar[i]=rand()%100;
		while(sayilar[i]<50){
			sayilar[i]=rand()%100;
		}
		printf("%d. indis:%d\n",i,sayilar[i]);
	}
	bs=sayilar[0];
	ks=sayilar[0];
	
	for(i=0;i<10;i++){
		if(sayilar[i]>bs){
			bindex=i;
			bs=sayilar[i];
		}
		if(sayilar[i]<ks){
			kindex=i;
			ks=sayilar[i];
		}
	}
	printf("Kucuk Sayi %d indexi %d \n",bs,bindex);
	printf("Buyuk Sayi %d indexi %d",ks,kindex);
	*/
	
	//MATRÝSLER ARASI TOPLAM RASTGELE SAYILARLA
	/*
	srand(time(NULL));
	int matris[5][5],matris2[5][5],toplammatris[5][5],i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			matris[i][j]=rand()%100;
			matris2[i][j]=rand()%100;
		}
	}
	printf("ILK MATRIS \n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d \t",matris[i][j]);
		}
	}
	printf("\n");
	printf("IKINCI MATRIS \n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d \t",matris2[i][j]);
		}
	}
		printf("\n \n \nTOPLAMLARI \n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			toplammatris[i][j]=matris[i][j]+matris2[i][j];
			
			printf("%d+%d=%d \n",matris[i][j],matris2[i][j],toplammatris[i][j]);
		}
		printf("\n");
	}
	*/
	
	//DEGER ARAMA
	/*
		srand(time(NULL));
		int dizi[10],i,arananDeger,bulundumu=0;
		printf("Dizinin Degerleri: \n");
		
		for(i=0;i<10;i++){
			dizi[i]=rand()%10;
			printf("%d \t",dizi[i]);
		}
		printf("\nDeger Giriniz \n");
		scanf("%d",&arananDeger);
		for(i=0;i<10;i++){
			if(dizi[i]==arananDeger){
				bulundumu=1;
				break;
			}
		}
		if(bulundumu==1){
			printf("Aranan Deger Bulundu");
		}
		else{
			printf("Aranan Deger Bulunmadi");
		}
		*/
}

