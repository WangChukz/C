#include <stdio.h>
void nhap_mang(int a[], int n){
	for(int i = 0; i < n; i++){
      printf("Nhap vao phan tu a[%d]: ", i);
      scanf("%d", &a[i]);			 
   }
}
int find_max(int a[], int n){
 	int max = a[0];
	for(int i = 1; i < n; i++){
	if(a[i] > max){
	   max = a[i];
     }
   }
   return max;
}
int find_second_max(int a[], int n){
	int max = find_max(a, n);
	int max2 = max;
	for(int i = 0; i < n; i++){
		if(a[i] != max){
        max2 = a[i];
        break;
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i] > max2 && a[i] != max){
     	  max2 = a[i];
		}
	}
	return max2;
}
int xuat_mang(int a[], int n){
	int max = find_max(a, n);
	int max2 = find_second_max(a, n);
	if(max != max2){
		printf("gia tri lon nhat trong mang la:%d", max);
   	printf("\nSo lon thu hai trong mang la:%d", max2);
	} else {
		printf("Khong co gia tri lon thu nhat va lon thu hai trong mang!");
	}
}
int main(){
	int a[1000], n;
	printf("Nhap phan tu n (n > 0): ");
	scanf("%d", &n);
	if(n < 0){
		printf("Gia tri n khong thoa man. Hay nhap lai!");
	} else {
		nhap_mang(a, n);
      xuat_mang(a, n);
	}
	printf("\n----------------------------------\n");
	main();
	return 0;
}