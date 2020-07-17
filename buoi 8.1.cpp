#include<stdio.h>
#include<string.h>

char myarr[100];
int main(void)
{
	char myvar;
	int count = 0;
	printf("Xin moi nhap chuoi : ");
	scanf("%s",myarr);
	printf("ban da nhap vao la : %s",myarr);
/*	for(int i=0;i<strlen(myarr);i++)
	{
		if(myarr[i] = myvar && myarr[i] > 'a' && myarr[i] < 'z')
		{
			count +=1;
			myarr[i] = myarr[i] - 32;
		}
	} */
	while(1)
	{
		if(myarr[count] == '\0') break;
	   if('a' <= myarr[count] && myarr[count] <= 'z')
	   {
	   	myarr[count] = myarr[count] - 32;
	   }
	   else 
	   {
	   	myarr[count] = myarr[count] + 32;
	   }
	   count ++;
	}
	printf("\n%s",myarr);
	return 0;
}
