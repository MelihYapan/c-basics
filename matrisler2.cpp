#include<stdio.h>

main(void){
	int matris[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}},i,j,temp,k=0;
	
	
	for(i=0;i<4;i++){
		for(j=k+1;j<4;j++){
			temp=matris[i][j]; matris[i][j]=matris[j][i]; matris[j][i]=temp;
		}
		k++;
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("\n %d satirin %d sutunun degerini %d \t",(i+1),(j+1),matris[i][j]);
		}
		printf("\n");
	}
}
