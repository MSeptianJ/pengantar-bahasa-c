#include <stdio.h>
#include <conio.h> //pemanggilan library
void angkaterbalik(int i);
int main(void)
{
 int nmr[1];
 printf("==========================================================\n");
 printf("= Pengurutan Bilangan dari besar - kecil =\n");
 printf("==========================================================\n");
printf("\n");
 printf("Masukkan Batas angka yang di inginkan : \n");
 scanf("%d",&nmr[0]);
 angkaterbalik(nmr[0]);
system("pause");
 return(0);
}
void angkaterbalik(int i)
{
 if(i>=1)
 {
 printf(" %d",i);
 angkaterbalik(i-1);
 }
}