#include<stdio.h>
//FONKSÝYONLAR
/*
int toplam(int sayi1,int sayi2);
int cikar(int sayi1,int sayi2);
float ortalama(int sayi1,int sayi2);
int main(){

	int s1,s2;
	printf("IKI SAYI GIRINIZ \n");
	scanf("%d%d",&s1,&s2);
	
	printf("TOPLAM: %d \n",toplam(s1,s2));
	printf("CIKAR: %d \n",cikar(s1,s2));
	printf("ORTALAMA: %.1f \n",ortalama(s1,s2));

	return 0;
}
int toplam(int sayi1,int sayi2){
	return (sayi1+sayi2);
}
int cikar(int sayi1,int sayi2){
	return (sayi1-sayi2);
}
float ortalama(int sayi1,int sayi2){
	float sonuc;
	sonuc=float(toplam(sayi1,sayi2))/2;
	return sonuc;
}
*/


//YARICAP
/*
#define pi 3.14
float daireninalani(int r){
	return (pi*r*r);
}

float dairenincevresi(int r){
	return (2*pi*r);
}


int main(){
	int yaricap;
	printf("YARICAP GIR \n");
	scanf("%d",&yaricap);
	printf("\nAlani %2.f \n",daireninalani(yaricap));
	printf("Cevresi %2.f",dairenincevresi(yaricap));
}
*/

//FAKTÖRÝYEL 
/*
int faktoriyel(int sayi){
	
	int i,sonuc=1;
	
	for(i=1;i<=sayi;i++){
		sonuc *=i;
	}
	return sonuc;
}
	int main(){
		int deger;
		printf("SAYI GIR \n");
		scanf("%d",&deger);
		printf("%d!=%d",deger,faktoriyel(deger));
		return 0;
}
*/

//PERMUTASYON KOMBÝNASYIN
/*
int faktoriyel(int sayi);
int permutasyon(int n,int r){
	int sonuc;
	sonuc = faktoriyel(n)/faktoriyel(n-r);
	return 2;
}

int kombinasyon(int n,int r){
	int sonuc;
	sonuc = faktoriyel(n)/(faktoriyel(n-r)*faktoriyel(r));
	return 1;
}

int faktoriyel(int sayi){
	
	int i,sonuc=1;
	
	for(i=1;i<=sayi;i++){
		sonuc *=i;
	}
	return sonuc;
}

int main(){
		int deger,nn,rr;
		printf("SAYI GIR \n");
		scanf("%d",&deger);
		printf("Sirasiyla n ve r degerlerini giriniz:\n");
		scanf("%d %d",&nn,&rr);
		printf("%d!=%d \n",deger,faktoriyel(deger));
		printf("P(%d,%d)=%d\n",nn,rr,permutasyon(nn,rr));
		printf("C(%d,%d)=%d\n",nn,rr,kombinasyon(nn,rr));
		return 0;
}
*/

//Recursion(YINELEME)
/*
int faktoriyel(int n){
	if(n <=1){
		return 1;
	}
	else{
		return n*faktoriyel(n-1);
	}
}
int main(){
	int sayi;
	scanf("%d",&sayi);
	printf("%d",faktoriyel(sayi));
}
*/

//BOZUK ARTIK YÝL
/*
void artikyil(int);
int main(){
	int yil;
	printf("Bir Yil Giriniz: \n");
	scanf("%d",&yil);

	if(artikyil(yil)){
		printf("%d Artik Yildir",yil);
	}
	else{
		printf("%d Artik Yil Degildir",yil);
	}
	return 0;
}

void artikyil(int yil){
	if(yil%4==400&& yil%100!=0 || yil%400==0){
		return 1;
	}
	else{
		printf("Artik Yil Degildir");
	}
}
*/




