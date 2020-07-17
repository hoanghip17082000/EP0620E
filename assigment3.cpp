/* chuong trinh bao gom tih tong va tich cua 2 ma tran */
#include<stdio.h>
#include<ctime>
#include<stdlib.h>
#define SIZE 3
int a[SIZE][SIZE];
int b[SIZE][SIZE];
int c[SIZE][SIZE];
int count = 1; //matrix tong

int tinh_tong_ma_tran(int size) //matrix vuong
{
	srand(time(NULL));
	for(int i=0;i<=size;i++)
	{
	  for(int j=0;j<=size;j++)
	    {
	      a[i][j] = rand()%50+1;
	  	  printf("Moi nhap phan tu a[%d][%d] =\n",i,j,a[i][j]);
	  	  b[i][j] = rand()%50+1;
	  	  printf("Moi nhap phan tu b[i][j] =\n",i,j,b[i][j]);
		}	
	}
	printf("------Cong hai matrix------\n");
	   for(int i=0;i<=size;i++)
	     {
		   for(int j=0;j<size;j++)
		   {
		   	c[i][j] = a[i][j] + b[i][j];
		   	 printf("Tong cua phan tu thu %d : %d\n",count,c[i][j]);
	       count++;
		   }
	     }
	     printf("---------nhan hai matrix----------");
	     for(int i=0;i<size;i++)
	     {
	     	for(int j=0;j<size;j++)
	     	{
	     		
			 }
		 }
}
int main(void)
{
	tinh_tong_ma_tran(SIZE);
	return 0;
}
