/*bai tap ve chuoi
chuoi la 1 dang dac biet mang,nam trong bang ma ASCII
char : mystring[] = {}; //la chuoi rong
+cho mot chuoi bat ki
+Nhap vao 1 ki tu bat ki
+tim xem co bao nhieu ki tu va vi tri xuat hien trong chuoi
*/
#include<stdio.h>
#include<string.h>

char myarr[] = "hguzhisagbvujajnsuyebcnewhuhenduwygijsxnbsjnajbvhnxjf";
int main(void)
{
	char myvar;
	int kitu = 0;
	printf("Xin moi nhap vao ky tu ban muon : ");
	scanf("%c",&myvar);
	printf("ban da nhap vao c:%c\n ",myvar);
	int count = 0;
	for(int i=0;i<strlen(myarr);i++)
	{
		if(myarr[i]== myvar && (myarr[i]>= 'a' && myarr[i]<='z'))
		{
			count +=1;
			kitu++;
			printf("Tim thay ki tu %c tai vi tri %d\n",myvar,i);
			myarr[i]=myarr[i]-32;
		}
	}
	printf("%s",myarr);
	printf("so ki tu : %d",kitu);
	return 0;
}
