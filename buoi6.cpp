//CON TRO
//int *ptr1
#include<stdio.h>

int *ptr1 = (int*)12;

int a =4206610  , b = 20 , c = 45 ;

int main(void)
{
   printf("ptr1 address : %d\n",&ptr1);
   printf("ptr1 value : %d\n",ptr1);
   printf(" \"a\" address : %d\n",&a);
   printf(" \"a\"value: %d\n",a);
   
   
   ptr1 = &a;
   printf(" \"new ptr1\"value: %d , %d\n",&a,a);
   printf(" \"new ptr1\"value: %d\n",*((int*)(*(ptr1)))); //ep kieu dua gia tri ptr1 vao dia chi khac co gia tri bang 0
   
   return 0;	
}
