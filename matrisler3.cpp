#include<stdio.h>

main(void){
	
	//2x2 MATRÝS ÇARPIMI
	int matris[2][2]={{1,2},{3,4}},i,j,k=1;
	int matris2[2][2]={{5,6},{7,8}};
	int c[2][2];
	
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=(matris[i][0]*matris2[0][j])+(matris[i][1]*matris2[1][j]);
			printf("%dx%d ve %dx%d = %d \t",matris[i][0],matris2[0][j],matris[i][1],matris2[1][j],c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	/*
	matris[0][0]=(matris[0][0])*(matris2[0][0]) + (matris[0][1])*(matris2[1][0]);
	matris[1][0]=(matris[1][0])*(matris2[0][0]) + (matris[1][1])*(matris2[1][0]);
	matris[0][1]=(matris[0][0])*(matris2[0][1]) + (matris[0][1])*(matris2[1][1]);
	matris[1][1]=(matris[1][0])*(matris2[0][1]) + (matris[1][1])*(matris2[1][1]);
	*/
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d. satirin %d. sutununun degeri %d \n",i+1,j+1,c[i][j]);	
		}
		printf("\n");
	}
}
