#include <stdio.h>
void Nhap_mang(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Nhap vao phan tu a[%d]: ", i);
	    scanf("%d", &a[i]);
	}
}
void Xuat_mang(int a[], int n){
	printf("Mang sau khi sap xep la: ");
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("Mang sau khi sap xep la: ");
	for(int t = 0; t < n; t++){
		printf("%d ", a[t]);
	}
}
void sort_1(int a[], int n){
	for(int i = 0; i > n; i++){
		for(int j = i+1; j < n; j++){
		   if(a[i] < a[j]){
              int be_lon = a[i];
			  a[i] = a[j];
			  a[j]= be_lon; 	
		   }
        }
	}
}
void sort_2(int a[], int n){
	for(int t = 0; t < n; t++){
		for(int y = t+1; y < n; y++){
		   if(a[t] > a[y]){
              int lon_be = a[y];
			  a[y] = a[t];
			  a[t]= lon_be; 	
		   }
        }
	}
}
int main(){
	int n, a[1000];
	printf("Nhap gia tri n (n > 0): ");
	scanf("\n%d", &n);
	if(n < 0){
		printf("Gia tri n khong phu hop. Hay nhap lai!");
	} else{
	Nhap_mang(a, n);
	sort_1(a,n);
	sort_2(a, n);
	Xuat_mang(a,n);
    }
    printf("\n---------------------------------------------\n");
	main();
	return 0;
}