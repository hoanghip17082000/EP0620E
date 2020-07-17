//viet 1 ham tinh dien tich cua hinh chu nhat cho biet duong cheo va chu vi
//Nhap chu vi va duong cheo
#include<stdio.h>
float s_hcn(float num1 , float num2) // num1 la do dai duong cheo num2 la chu vi
{
	if(num2 <= (2*num1)) //kiem tra dau vao
	{
		printf("Vui long xem lai dieu kien ! ");
		return 0;
	}
	else
	{
	return (float)((num2*num2 / 4 - num1*num1)/2); //gia he phuong trinh
    }
}
int main(void)
{
	printf("%f",s_hcn(5.123,17.4));
	return 0;
}

