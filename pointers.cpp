#include<stdio.h>

//POINTERLER
/*
int main(void){
	int a=33;
	int *p=&a;
	int s=sizeof(a);
	
	printf("a'nin degeri(icerik):%d\n",a);
	printf("a'nin Adresi:%p\n",&a);
	printf("p'nin Adresi:%p\n",p);
	printf("p'nin degeri(icerik):%d\n",*p);
	printf("s'nin degeri:%d\n",s);
}
*/

//DÝZÝLER VE POINTERLER
/*
int main(void){
	int dizi[3] ={50,100,150};
	int sayac=1;
	int *p=dizi; //Dizinin ilk elemanýn adresini tutar
	
	for(int i=0;i<3;i++){
		printf("Dizi[%d] = %d , Adresi: %p\n",sayac,*(p+i),(p+i));
		sayac++;
	}
}
*/



//FONKSÝYON
/*
void degeriDegistir(int *p){
		*p=100; //isaretcini gösterdigi adresteki degeri degistir.
		
	}
int main(void){
	int a =50;
	printf("a'nin ilk degeri: %d \n",a);
	degeriDegistir(&a);
	printf("Yeni Degeri %d",a);
}
*/

/*
int main(void){
	int sayi=5;
	int *p=&sayi;
	
	printf("Sayinin Degeri: %d ve Adresi: %p \n",sayi,p);
	printf("Sayinin Degeri: %d ve Adresi: %p \n",sayi,p);
}
*/
