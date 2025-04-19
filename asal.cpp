#include<stdio.h>

/*
int main(void){
	int sayi,i,durum=1;
	printf("Sayi Giriniz.");
	scanf("%d",&sayi);
	if(sayi == 1)durum=0;
	else
		for(i=sayi/2;(i>1)&&(durum ==1); i++)
			if(sayi%i==0) durum = 0;
	if(durum==1)printf("Sayi Asaldir");
		else printf("Sayi Asal Degildir");
}
*/
/*
int main(void){
		int sayi,i;
		bool asal;
		printf("Sayi Giriniz");
		scanf("%d",&sayi);
		for(i=2;i<sayi;i++){
			if((sayi%i)==0){
				asal = false;
			}
			else{
				asal = true;
			}
		}
		if(asal == true){
			printf("Sayi Asal Degildir");
		}
		else{
			printf("Sayi Asaldir");
		}
}
*/
int main(void){
	int sayi,i,durum=1;
	printf("Sayi Giriniz");
	scanf("%d",&sayi);
	if(sayi==1) durum=0;
	else
		for(i=sayi/2;(i>1)&&(durum==1);i++)
		{
			if(sayi%i==0){durum=0; printf("\n Sayi %d ye kalansiz bolunmekte",i-1,i);}
			else printf("\n %d. Sayi %d e kalansýz bolunememektedir",i-1,i);
		}
		if(durum == 1)printf("\n Sayi Asaldir");
		else printf("\n Sayi asal degildir");
	}

