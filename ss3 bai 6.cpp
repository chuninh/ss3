#include<stdio.h>

int main(){
	
	float doDaiCanh,chieuCao,dienTich;
	printf("moi nhap do dai canh ");
	
	scanf("%f",&doDaiCanh);
	
	printf("moi nhap chieu cao");
	
	scanf("%f",&chieuCao);
	
	dienTich = 0.5 * chieuCao * doDaiCanh;
	
	printf("dien tich hinh tam giac = %f\n",dienTich);
	
	return 0;
	
}
