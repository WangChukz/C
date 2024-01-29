#include <stdio.h>
void nhap_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Nhap cac phan tu a[%d]: ", i);
	    scanf("%d", &a[i]);
	}
}
void xuat_mang(int a[], int n){
	int max, min;
	if(max == min){
		printf("Khong co gia tri lon nhat, nho nhat!");
	} else {
		printf("Gia tri lon nhat trong mang: %d", max);
	    printf("\nGia tri nho nhat trong mang: %d", min);
	}
}
void Find_max_min(int a[], int n){
	int max = a[0];
	int min = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] > max){
		  max = a[i];
		} 
        else if(a[i] < min){
       	  min = a[i];
		} 
    } 	 
}
int main(){
	int a[1000], n;
	printf("Nhap gia tri n (n > 0): ");
	scanf("\n%d", &n);
	if(n < 0){
		printf("Gia tri n khong phu hop. Hay nhap lai!");									 
	} else {
        nhap_mang(a, n);
        Find_max_min(a, n);
        xuat_mang(a, n);  
	}
	printf("\n-----------------------------------------\n");      
	return main(); 
}
