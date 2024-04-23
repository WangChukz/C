#include <stdio.h>

//Cách 1: Sử dụng thuật toán
void sodaonguoc(int n, int &sdn) {
	do {
		sdn = sdn * 10 + n % 10;
	} while (n/=10);
}

int main() {
	int n, sdn = 0;
	char choose;
	do {
		do {
			printf("Nhap n (n > 0): ");
			scanf("%d", &n);
			if(n <= 0) {
				printf("Vui long nhap gia tri n duong.");
			}
		} while(n < 0);
		sodaonguoc(n, sdn);
		printf("So dao nguoc la: %d", sdn);
		printf("\nBan co muon tiep tuc khong ? (y or n)");
		scanf(" %c", &choose);
		if(choose == 'n') {
			printf("Chuong trinh da dung.");
		}
	} while(choose == 'y');
}

//Cách 2: Sử dụng mảng

//Khai báo biến cho toàn chương trình
int i;
int n, a[100];
char choose;

//Nhập mảng
void nhapmang() {
	printf("Nhap cac phan tu trong mang:\n");
	for(i = 0; i < n; i++) {
		printf("Nhap phan tu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

//Kiểm tra mảng đã nhập
void xuatmang() {
	printf("Mang phan tu sau khi nhap la: ");
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}
//Đảo ngược mảng đã nhập
void daonguocmang() {
	for(i = n - 1; i >= 0; i--) {
		printf("%d ", a[i]);
	}
}

int main() {

	do {
		do {
			printf("Nhap so luong phan tu mang(n > 0): ");
			scanf("%d", &n);
			if(n <= 0) {
				printf("Vui long nhap gia tri n duong.");
			}
		} while (n <= 0);
		nhapmang();
		xuatmang();
		printf("\nMang sau khi dao nguoc la: ");
		daonguocmang();
		printf("\nBan co muon tiep tuc khong ? (y or n)"); //Kiểm tra lựa chọn của người dùng nếu y là tiếp tục, n là dừng chương trình
		scanf(" %c", &choose);
		if(choose == 'n'){
			printf("Chuong trinh da dung.");
		}
	} while(choose == 'y');
}
