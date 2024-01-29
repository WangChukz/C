#include <stdio.h>
void Nhap_mang(int a[], int n){
     for(int i = 0; i < n; i++){
	printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
	}
}
int sort_1(int a[], int n){
     for(int i = 0; i < n; i++){
	for(int j = i + 1; j < n; j++){
          if(a[i] > a[j]){
             int temp = a[i];
             a[i] = a[j];
             a[j] = temp;
          }
        }
     }
}
int sort_2(int a[], int n){
    for(int i = 0; i < n; i++){
	for(int j = i + 1; j < n; j++){
	   if(a[i] < a[j]){
              int temp = a[i];
              a[i] = a[j];
              a[j] = temp;
	   }
         }
     }
}
void Xuat_mang(int a[], int n){
     printf("Mang sap xep tang dan la: ", sort_1(a, n));
     for(int i = 0; i < n; i++){
	printf("%d ", a[i]);
	}
     printf("\nMang sap xep gian dan la: ", sort_2(a, n));
     for(int i = 0; i < n; i++){
	printf("%d ", a[i]);
	}
}
int main(){
    int a[100], n;
    printf("Nhap gia tri n (n > 0): ");
    scanf("\n%d", &n);
    if(n < 0){
	printf("Gia tri n khong phu hop. Hay nhap lai!");
	} else {
	   Nhap_mang(a, n);
	   Xuat_mang(a, n);
   }
   printf("\n---------------------------------------------\n");
   main();
   return 0;
}
