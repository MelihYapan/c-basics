#include<stdio.h>

main(void){
	int x,y,obeb,okek,xx,yy,sayac=0;
	printf("Sayi Giriniz");
	scanf("%d%d",&x,&y);
	xx=x;
	yy=y;
	while(x!=y){
		if(x>y)x=x-y; //x6 y12
		else y=y-x; //x6 y6
		sayac++;
	}
	obeb = x;
	okek = (xx*yy)/obeb;
	printf("OBEB %d\nOKEK %d\nSayac %d",obeb,okek,sayac);
}
