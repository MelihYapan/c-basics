#include<stdio.h>

main(void){
	int a,b,t=0,k,sayac=1;
	scanf("%d%d",&a,&b);
	while(b>=1){
		k=b%2; 
		t=t+(a*k);
		a=a*2;
		b=b/2;
		printf("%d. dongunun %d x %d degeri toplam %d \n",sayac,a,b,t);
		sayac++;
	}
	printf("\nSONUC %d",t);
}
