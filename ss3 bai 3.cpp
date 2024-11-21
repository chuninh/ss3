#include<stdio.h>

int main(){
	
	float ban_kinh,chu_vi,dien_tich;
	printf("moi ban nhap ban kinh");
	
	scanf("%f",&ban_kinh);
	
	chu_vi = 2 * ban_kinh * 3.14;
	
	printf("chu vi hinh tron = %f\n",chu_vi);
	
	dien_tich = 3.14 * ban_kinh * ban_kinh;
	
	
	printf("dien tich hinh tron =%f\n",dien_tich);
	
	
	return 0;
	
}
