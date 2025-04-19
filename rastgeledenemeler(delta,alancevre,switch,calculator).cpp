#include <stdio.h>

int main(void){
	//#define pi 3.1415
	/* CEVRE ALAN
	const float pi = 3.1415;
	float r;
	float Alan,Cevre;
	printf("Dairenin Alan ve Cevre Hesabi Için bir yaricap degeri giriniz");
	scanf("%f",&r);
	Alan = pi*r*r;
	Cevre=2*pi*r;
	printf("Dairenin Alani: %f\n",Alan);
	printf("Dairenin Alani: %f",Cevre);
	*/
	

	
	// Pozitif mi    ?'le
	/*
	int sayi;
	
	puts("Sayi Giriniz:");
	scanf("%d",&sayi);
	
	(sayi>0) ? puts("Pozitif") : puts("Negatif");
	*/
	
	//TEK mi Cift mi  ?'le
	
	/*
	int sayi;
	puts("Sayi Gir");
	scanf("%d",&sayi);
	
	(sayi%2 == 0) ? printf("Cift"): printf("Tek");
	*/
	
	
	
	//Kilo
	/*
	float kilo = 55;
	if(kilo == 50){
		printf("50 kilosunuz");
	}
	else if(kilo > 50){
		printf("Sisman");
	}
	else if(kilo < 50){
		printf("Zayif");
	} 
	*/
	
	
	//ARTIK YIL
/*	short yil;
	printf("Bir yil degeri giriniz:");
	scanf("%d",&yil);
	if((yil % 4==0 ) && (yil % 100 != 0) ||(yil%400 ==0)){
		printf("\n Artik Yil");
	}
	else{
		printf("\n Artik Yil Degil");
	}
	*/
	
	
	
	
	//0'dan Kucuk
	/*int sayi;
	printf("Bir sayi giriniz.");
	scanf("%d",&sayi);
	if(sayi < 0 ){
		printf("Sayi Negatiftir");
	}
	else if(sayi > 0){
		printf("Sayi Pozitiftir");
	}
	else if(sayi == 0){
		printf("Sayi Sifirdir");
	}
	else{
		printf("Sayi Degil");
	}*/
	
	
	//3 SAYI
	/*int sayi1,sayi2,sayi3;
	printf("Ilk Sayiyi Giriniz:");
	scanf("%d",&sayi1);
	printf("Ikinci Sayiyi Giriniz:");
	scanf("%d",&sayi2);
	printf("Ucuncu Sayiyi Giriniz:");
	scanf("%d",&sayi3);
	if((sayi1 > sayi2)&&(sayi1 > sayi3)){
		printf("Birinci Sayi Buyuktur %d",sayi1);
	}
	else if((sayi2 > sayi1)&&(sayi2 > sayi3)){
		printf("Ikinci Sayi Buyuktur %d",sayi2);
	}
	else if((sayi3 > sayi1)&&(sayi3 > sayi2)){
		printf("Ucuncu Sayi Buyuktur %d",sayi3);
	}
	else{
		printf("Esit Sayi Var");
	}*/
	
	
		//Final
		/*
		int vize,final;
		float ortalama;
		printf("Vize ve Final Notunuzu Giriniz: \n");
		scanf("%d %d", &vize , &final);
		ortalama = (vize*0.40)+(final*0.60);
		
		if(ortalama > 45){
			printf("Gecti %.2f",ortalama);
		}
		else{
			printf("Kaldi %.2f",ortalama);
		}
		*/
		
		//TEK ÇIFT
		/*
		int sayi;
		printf("Sayi Giriniz:");
		scanf("%d",&sayi);
		if((sayi % 2)==0){
			printf("Sayi Cifttir");
		}
		else{
			printf("Sayi Tektir");
		}
		*/
		
		//VÝZE FÝNAL
		/*
		int vize,final;
		printf("Vize Final Gir: \n");
		scanf("%d %d",&vize , &final);
		if(vize >= 50 && final >= 50){
			printf("Gecti");
		}
		else{
			printf("Kaldi");
		}
		*/
		
		//DELTA
		/*
		float a,b,c,x1,x2,delta,gercek_kisim,sanal_kisim;
		printf("Denklemde ki a b ve c katsayilarini giriniz: \n");
		scanf("%f %f %f",&a,&b,&c);
		
		delta = b*b-4*a*c;
		
		if(delta<0){
			gercek_kisim=(-b)/2*a);
			sanal_kisim=(sqrt(-delta)/(2*a));
			puts("Karmasik Kokler: \n");
			printf("Denklemin Real Cozumu Yoktur");
		}
		else if(delta>0){
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b+sqrt(delta))/(2*a);
			printf("Denklemin Reel Kokleri \n");
			printf("x1=%.2f",x1);
			printf("x2=%,2f",x2);
		}
		else{
			x1=x2=(-b)/(2*b);
			printf("Cakisan Reel Kokler: \n");
			printf("x1=x2= %.2f \n",x1);
		}
		*/
		
		
		//CALCULATOR
		/*
		double sayi1,sayi2,sonuc;
		char op;
		printf("Islem Operatoru (+ - * /) Giriniz:");
		scanf("%c",&op);
		printf("Iki Sayi Girini:");
		scanf("%lf %lf",&sayi1,&sayi2);
		printf("\n %c \n",op);
		if(op == '+'){
			sonuc = sayi1+sayi2;
			printf("%.2lf + %.2lf = %.2lf",sayi1,sayi2,sonuc);
		}
		else if(op == '-'){
			sonuc = sayi1-sayi2;
			printf("%.2lf - %.2lf = %.2lf",sayi1,sayi2,sonuc);
		}
		else if(op == '*'){
			sonuc = sayi1*sayi2;
			printf("%.2lf * %.2lf = %.2lf",sayi1,sayi2,sonuc);
		}
		else if(op == '/'){
			sonuc = sayi1/sayi2;
			printf("%.2lf / %.2lf = %.2lf",sayi1,sayi2,sonuc);
		}
		*/
	
		// RASTGELE SAYI
		/* int sayi1,sayi2;
		
		//Rastegele Sayilar Uretebilmek Icin Zaman Tabanli Seed Olusturuyoruz
		srand(time(0));
		
		
		//1 ile 100 arasýnda sayi üretme
		sayi1 = rand()%100;
		sayi2 = rand()%100;
		
		printf("Sayilar %d %d \n", sayi1 ,sayi2);
		if(sayi1 > sayi2){
			printf("Sayi1 Buyuktur");
		}
		else if(sayi2 > sayi1){
			printf("Sayi2 Buyuktur");
		}
		else{
			printf("Esitler");
		} */
		

		// SWITCH CALCULATOR
		/*
		int sayi1,sayi2,sonuc;
		char oprt;
		puts("2 Sayi Gir \n");
		scanf("%d %d %c", &sayi1,&sayi2,&oprt);
	
		switch(oprt){
			case '+':
				sonuc=sayi1+sayi2;
				printf("Sonuc: %d",sonuc);
			break;
			case '-':
				sonuc=sayi1-sayi2;
				printf("Sonuc: %d",sonuc);
			break;
			case '/':
				sonuc=sayi1/sayi2;
				printf("Sonuc: %d",sonuc);
			break;
			case '*':
				sonuc=sayi1*sayi2;
				printf("Sonuc: %d",sonuc);
			break;
			default:
				printf("HATA");	
			break;
	}*/
	
	
		
	//Basic Yazdýrma
	/*
	int sayi;
	float ondalik;
	char karakter;
	double Sayi;
	
		sayi = 10;
		ondalik = 3;
		karakter =  'A';
		Sayi = 3456.7123;
		
		//Ekrana Yazdirma

	printf("Tam Sayi:%d\n",sayi);
	printf("Ondalik Sayi; %f\n"),ondalik;
	printf("Karakter: %c\n", karakter);
	printf("DoubleSayi %f",Sayi);
	*/
	return 0;
}
