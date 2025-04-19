#include<stdio.h>

int main()
{
	/*
int *ptam, tam = 33;
ptam = &tam;
printf("&tam = %p\n",&tam); printf("ptam = %p\n",ptam); printf("\n");
printf("tam	= %d\n",tam); printf("*ptam = %d\n",*ptam); printf("\n");

*ptam = 44;
printf("tam	= %d\n",tam); printf("*ptam = %d\n",*ptam);
return 0;
*/

char *kar;
int *tp,tam,*pt,sonuc;
tp = &tam;
tp++;
pt = &tam;
pt--;
sonuc = tp-pt;
double *ger;
printf("%d + %d = %d \n",tp,pt, sonuc);
printf("%d \n",tp);
printf("%d",*tp);

}
