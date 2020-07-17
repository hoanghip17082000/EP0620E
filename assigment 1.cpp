//assigment 1: +Nhap vao-int-mang A
//+Tinh GTTB =(A[0]+A[1]+...+A[20])/20
//+In if A[i]<valueTB
#include<stdio.h>
#define count 20
int main(void)
{
	int a[20];
	int tong;
    for(int i=0;i<count;i++)
    {
    	printf("Xin moi nhap a[%d] :",i); scanf("%d",&a[i]);
    	tong += a[i];
    }
    printf("Trung binh cong : %d \n ",(tong/count));
    for(int i=0;i<count;i++)
    {
    	if(a[i]<(tong/count))
    	{
    		printf("Gia tri nho hon TBC : %d \n",a[i]);
		}
	}
return 0;
}

