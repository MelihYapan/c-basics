#include<stdio.h>

//FAKTORÝYEL
/*
main(void){
	int sayi,i,toplam=1;
	printf("METIN GIRIN");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++){
		toplam*=i;
	}
	printf("\n %d",toplam);
}
*/

//KUVVET
/*
main(void){
	int sayi,kuvvet,i,toplam=1;
	printf("METIN GIRIN ve KUVVET");
	scanf("%d %d",&sayi,&kuvvet);
	toplam = sayi;
	for(i=1;i<kuvvet;i++){
		toplam*=sayi;
	}
	printf("\n %d",toplam);
}
*/

//ASAL
/*
main(void) {

  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  if (n == 0 || n == 1){
  	flag = 1;
  }


  for (i = 2; i <= n / 2; ++i) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)	printf("%d is a prime number.", n);
  else	printf("%d is not a prime number.", n);
}
*/
/*
main(void){
		int sayi,i,asalmi,j;
		printf("METING GIRIN");
		scanf("%d",&sayi);	
		
		if(sayi==1||sayi==0){
			asalmi = 1;
		}
		else{
			j=sayi/2;
			for(i=2;i<=j;i++){
				if((sayi%i)==0){
					asalmi=0;
					break;
				}
				else{
					asalmi=1;
				}
			}
		}
		if(asalmi==1)printf("\n ASAL");
		else{
			printf("\n ASALDEGIL");
		}
}
*/

//EBOB
/*
main(void){
	int s1,s2,ebob,i,s11,s22,ekok;
	printf("IKI SAYI GIRINIZ");
	scanf("%d%d",&s1,&s2);
	s11=s1;
	s22=s2;
	for(i=1;i<=s1;i++){
		if((s1%i)==0 && (s2%i)==0){
			ebob = i;
		}
	}
	ekok=(s11*s22)/ebob;
	printf("\n EBOB %d , EKOK %d",ebob,ekok);
}
*/

//EKOKBOZUK

main(void){
	int s1,s2,toplam=1,i;
	printf("IKI SAYI GIRINIZ");
	scanf("%d",&s1);
	scanf("%d",&s2);
	for(i=1;i<=s2;i++){
		if((s1%i)==0){
			printf("%d. dongude toplam , 1.sayinin degeri %d,2.sayinin degeri  %d  \n TOPLAM %d \n" ,i,s1,s2,toplam);
			toplam *=i;
			s1=s1/i;
		}
		if((s2%i)==0){
			printf("%d. dongude toplam , 1.sayinin degeri %d,2.sayinin degeri  %d  \n TOPLAM %d  \n" ,i,s1,s2,toplam);
			toplam *=i;
			s2=s2/i;
		}
	}
	printf("\n EKOK %d",toplam);
}



