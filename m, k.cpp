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

// Điều kiện của ngày và tháng sinh
int dk_m_k(int &m, int &k){
	int ngay_tr_thang[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(k < 1 || k > 12){
		return 0;
	}
	if(m < 1 || m > ngay_tr_thang[k - 1]){
		return 0;
	}
	return 1;
}

// Nhập ngày và tháng sinh
void nhap_ngay_thang(int &m, int &k){
	while (dk_m_k(m, k) != 1){
		printf("\nNhap ngay sinh: ");
	    scanf("%d", &m);
	    printf("Nhap thang sinh (1 <= k <= 12): ");
	    scanf("%d", &k);
	    if(dk_m_k(m, k) != 1) printf("\nGia tri khong phu hop. Vui long nhap lai!!!");
	}
}

// Tìm số âm lớn nhất chia hết cho m nhưng không chia hết cho k
int soamlonnhat(int Phuc51[], int &n, int &m, int &k){
	int max_am = -1000000;
	for(int i = 0; i < n; i++){
		if(Phuc51[i] < 0 && Phuc51[i] % m == 0 && Phuc51[i] % k != 0){
			if(Phuc51[i] > max_am){
				max_am = Phuc51[i];
			}
		}
	}
	return max_am;
}

// In kết quả ra màn hình
void Ketqua(int max_am){
	if(max_am != -1000000){
		printf("So am lon nhat chia het cho m va khong chia het cho k la: %d", max_am);
    }else {
    	printf("Khong co gia tri thoa man.");
	}
}

int main() {
	int Phuc51[1000], n, m, k;
	Nhapmang(Phuc51, n);
	Xuatmang(Phuc51, n);
	nhap_ngay_thang(m, k);
	int max_am = soamlonnhat(Phuc51, n, m, k);
	Ketqua(max_am);
	return 0;
}