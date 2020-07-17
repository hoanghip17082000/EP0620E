/* chuong trinh bao gom tih tong va tich cua 2 ma tran */
#include<stdio.h>
#define SIZE 3
int a[SIZE][SIZE];
int b[SIZE][SIZE];

int tinh_tong_2_matrix(int size) //matrix vuong
{
	for(int i=0;i<size*size;i++)
	{
	  for(int j=0;j<size;j++)
	    {
	  	  printf("Moi nhap phan tu a[i][j] = ",i,j);scanf("%d",&a[i][j]);
	  	  printf("Moi nhap phan tu b[i][j] = ",i,j);scanf("%d",&b[i][j]);
		}	
	}
}
int main(void)
{
	tinh_tong_2_matrix(SIZE);
	return 0;
}
