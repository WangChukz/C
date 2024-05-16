#include <stdio.h>

//Nhập số lượng phần tử và nhập mảng
void Nhapmang(int Phuc51[], int &n) {
	while(n <= 0) {
		printf("Nhap so luong phan tu trong mang (n > 0): ");
		scanf("%d", &n);
		if(n <= 0) printf("Gia tri khong phu hop. Vui long nhap lai!!!\n");
	}
	for(int i = 0; i < n; i++) {
		printf("Nhap phan tu Phuc51[%d]: ", i);
		scanf("%d", &Phuc51[i]);
	}
}

// Xuất mảng ra màn hình
void Xuatmang(int Phuc51[], int &n) {
	printf("Mang vua nhap la: ");
	for(int i = 0; i < n; i++) {
		printf("%d ", Phuc51[i]);
	}
}

int soduonglonthu2(int Phuc51[], int n) {
	int max = -1000000, max2 = -1000000;
	for (int i = 0; i < n; i++) {
		if (Phuc51[i] > 0) {
			if (Phuc51[i] > max) {
				max2 = max;
				max = Phuc51[i];
			} else if (Phuc51[i] > max2 && Phuc51[i] != max) {
				max2 = Phuc51[i];
			}
		}
	}
	return max2;
}

void printResult(int Ketqua) {
	if (Ketqua != 1000000) {
		printf("\nGia tri duong lon thu hai trong mang la: %d\n", Ketqua);
	} else {
		printf("\nKhong co gia tri duong lon thu hai.\n");
	}
}

int main() {
	int Phuc51[1000], n;
	Nhapmang(Phuc51, n);
	Xuatmang(Phuc51, n);
	int Ketqua = soduonglonthu2(Phuc51, n);
	printResult(Ketqua);
	return 0;
}