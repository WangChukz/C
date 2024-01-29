#include <stdio.h>
void nhap_mang(int a[], int n){
	for(int i = 0; i < n; i++){
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
	}
}
void xuat_mang(int a[], int n){
	int sum;
	printf("Tong cua cac phan tu trong mang la: %d", sum);
}
int sum_array(int a[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i];
	}
	return sum;
}
int main(){
	int a[100], n;
	printf("Nhap gia tri n (n > 0): ");
	scanf("\n%d", &n);
	if(n < 0){
		printf("Gia tri n khong phu hop. Hay nhap lai!");
	} else{
	nhap_mang(a, n);
	sum_array(a, n);
	xuat_mang(a, n);
   }
   printf("\n-----------------------------------------\n");
   main();
	return 0;
}