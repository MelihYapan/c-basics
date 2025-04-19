#include <stdio.h>

int main(void){
	
	
	
	//DONGULER 
		//ÇIFT SAYI , TEK SAYI
			/*
			int i=22;
			
			while(i<=100){
				if(i%2 != 0){
					printf("%d \n",i);
				}
				i++;
			}
			*/
			
			
			
			//Sayi
			/*
			int sayi1,sayi2,sayac;
			bool i;
			printf("2 Sayi Giriniz \n");
			scanf("%d %d",&sayi1,&sayi2);
			sayac = sayi1;
			printf("------------ \n");
			while(sayac <= sayi2){
				printf("%d \n",sayi1);
				sayac++;
				sayi1++;
			}
			*/
			
			
			// FAKTORIYEL
			
			int sayac,sonuc,sayi;
			    sonuc = 1;
			    sayac = 1;
			    printf("Sayi Giriniz:");
			    scanf("%d",&sayi);
			    
			    while(sayac <= sayi){
			        sonuc *= sayac;
			            printf("%d != %d \n",sayi,sonuc);
			        sayac++;
			    }
			    printf("Sonuc: %d",sonuc);
				
				
				
				//DO WHILE
				/*
				int i=10;
				
				do{
					if(i%5==0 && i%11==0){
						printf("Sayi: %d \n",i);
					}
					i++;
				}
				while(i <=500);
				*/
				
				//FOR DÖNGÜSÜ
				/*
				int i,toplam,sayi1,sayi2;
				toplam = 0;
				
				printf("Iki Sayi Giriniz:");
				scanf("%d %d",&sayi1,&sayi2);
				for(i=sayi1;i<=sayi2;i++){
					printf("Sayi %d \n",i);
					toplam += i;
				}
				printf("Toplam: %d",toplam);	
				*/
			return 0;
}
