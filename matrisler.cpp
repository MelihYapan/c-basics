#include<stdio.h>

main(void){
	int satir,sutun,i,j,k,determinant,det1,det2,det3;
	printf("Matrislerin Satir Sutun Degerini Giriniz");
	scanf("%d %d",&satir,&sutun);
	int ogr_tablo[satir][sutun],matris[satir][sutun];
	
	//ÝLK MATRÝS
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("Ilk Matrisin %d satirin %d sutunun degerini gir \n",(i+1),(j+1));
			scanf("%d",&ogr_tablo[i][j]);
		}
	}
	
	//DETERMÝNANT
	det1 = ogr_tablo[0][0]*(ogr_tablo[1][1]*ogr_tablo[2][2]-ogr_tablo[1][2]*ogr_tablo[2][1]);
	det2 = ogr_tablo[0][1]*(ogr_tablo[1][0]*ogr_tablo[2][2]-ogr_tablo[1][2]*ogr_tablo[2][0]);
	det3 = ogr_tablo[0][2]*(ogr_tablo[1][0]*ogr_tablo[2][1]-ogr_tablo[1][1]*ogr_tablo[2][0]);
	
	determinant = det1-det2+det3;
	printf("%d \n",determinant);
	//ÝKÝNCÝ MATRÝS
	/*
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("Ikinci Matrisin %d satirin %d sutunun degerini gir \n",(i+1),(j+1));
			scanf("%d",&matris[i][j]);
		}
	}
	*/
	//TOPLA
	/*
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			ogr_tablo[i][j]=ogr_tablo[i][j]+matris[i][j];
		}
	}
	*/
	//ÇARPMA
	/*
	printf("Matris Kacla Carpilacak");
	scanf("%d",&k);
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			ogr_tablo[i][j]=k*ogr_tablo[i][j];
		}
	}
	*/
		
	//YAZMA		
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("\n %d satirin %d sutunun degerini %d \t",(i+1),(j+1),ogr_tablo[i][j]);
		}
		printf("\n");
	}
}
