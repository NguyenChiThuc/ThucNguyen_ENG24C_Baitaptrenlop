#include<stdio.h>

int main(){

	int t,n;
	int a[100];
	int MAX = -9999, MIN = 9999;
while("t =! 8"){
    for (int i = 0; i < 20; i ++)
			printf("=");
		printf("MENU");
		for (int i = 0; i < 20; i ++)
			printf("=");
            printf("\n1.Nhap so phan tu va gia tri cac phan tu\n");
            printf("2.In ra cac gia tri phan tu dang quan li\n");
            printf("3.In ra gia tri lon nhat trong mang\n");
            printf("4.In ra cac phan tu la so nguyen to trong mang\n");
            printf("5.Them mot phan tu vao rong mang\n");
            printf("6.Xoa mot phan tu trong mang\n");
            printf("7.Sap xep mang theo thu tu tang dan\n");
            printf("8.tim kiem phan tu va in ra vi tri index cua phan tu do\n");
            printf("9.Thoat\n");
        for(int i = 0; i<44 ; i++)
            printf("=");
 			printf("\nHay chon menu: ");
 				scanf("%d, &t");
 if( t==1)
        {
            printf("Nhap vao so phan tu: ");    
            scanf("%d, &n");
            printf("Nhap vao cac gia tri: ");
        for(int i =0; i <n; i++)
{
            scanf("%d, &a[i]");
    if(a[i]> MAX)
        MAX = a[i];
    if(a[i]<MIN)
        MIN = a[i];
}
            printf("\n");
        }
if(t == 2)
        {
            printf("Gia tri cua cac phan tu la: ");
			for (int i = 0; i < n; i ++)
			{
				printf("%d ", a[i]);
			}
			printf("\n");
        }
if (t == 3)
		{
			int sum = 0;
			printf("Cac phan tu chan la: ");
			for (int i = 0; i < n; i ++)
			{
				if (a[i] % 2 == 0)
				{
					printf("%d ", a[i]);
					sum += a[i];
				}
			}
			printf("\nTong cua chung la: %d", sum);
			printf("\n");
		}
if( t== 4)
		{
		int sum = 0;
			printf("Cac phan tu la so nguyen to trong mang la: ");
			for (int i = 0; i < n; i ++)
			{
				int check = 1;
				for (int j = 2; j <= a[i] / 2; j ++)
				{
					if (a[i] % j == 0)
					{
						check = 0;
						break;
					}
				}
			}
		}
if( t == 5)
		{
			printf("Phan tu can them la: ");
				int k;
			printf("Xin hay nhap mot so: ");
			scanf("%d", &k);
		}
if( t == 6)
		{
			printf("Nhap phan tu can xoa: ");
				
		}
}
		return 0;
}
