#include<stdio.h>

int main(){
	
	float diemToan,diemVan,diemAnh,tongDiem,diemTB;
	
	printf("moi ban nhap diem toan ");
	
	scanf("%f",&diemToan);
	
	printf("moi ban nhap diem van ");
	
	scanf("%f",&diemVan);
	
	
	printf("moi ban nhap diem anh ");
	
	scanf("%f",&diemAnh);
	
	tongDiem= diemToan + diemVan + diemAnh;
	
	printf("tong diem = %f\n",tongDiem);
	
	diemTB = tongDiem / 3;
	
	printf("diem trung binh = %f\n",diemTB);
	
	return 0;
	
}
