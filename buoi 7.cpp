/*Cap phat bo nho
--malloc() la ham duoc dung de thuc hien viec cap phat bo nho tu vung nho con tu do
int *p = malloc(4); con tro p chi chua duoc 4 byte
malloc (int size)
--calloc(int num,int size)
vd *p=malloc(5)
   *p=calloc(3,5) 3 mang 5byte
   --> cap phat voi size mong muon
--free

 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
		/*
	int *ptr,i;
	ptr = (int*)calloc(5, sizeof(int*));
	if(*ptr != NULL)
	{
		*(ptr+0) = 1; //tuong ung ptr[0]=1
		*(ptr+1) = 2;
		*(ptr+2) = 4;
		*(ptr+3) = 8;
		*(ptr+4) = 16;
		printf("address : %d, value : %d\n",&(*(ptr+0)),*(ptr+0));
		printf("address : %d, value : %d\n",&(*(ptr+1)),*(ptr+1));
		printf("address : %d, value : %d\n",&(*(ptr+2)),*(ptr+2));
		printf("address : %d, value : %d\n",&(*(ptr+3)),*(ptr+3));
		printf("address : %d, value : %d\n",&(*(ptr+4)),*(ptr+4));
	}
	/*2
	/*int *ptr,a;
	ptr = &a;
	for(int i=0;i<5;i++)
	{
		*(ptr) = i;
		printf("address a: %d, address ptr: %d,value%d\n",&a,ptr,*ptr);
	}
	2*/
	char A[] = "12345"
	char B[] = "abcde"
	//strcat(A,B)
	printf("%s",strcat(A, B));
	return 0;
}

