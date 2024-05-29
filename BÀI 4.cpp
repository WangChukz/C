 #include <stdio.h>
#include <string.h>


// Input: NgUyEn HoAnG PHUc
// Output: Nguyen Hoang Phuc

void nhap(char s[]) {
	printf("Nhap vao mot chuoi cac ky tu (toi da 100 tu): ");
	gets(s);
	while (strlen(s) > 100){
		printf("Ban nhap qua gioi han!! Vui long nhap chuoi toi da 100 tu: ");
		gets(s);
	}
}

char khoangtrang(char c) {
	return c == ' ' || c == '\t' || c == '\n';
}

int demtu(char s[]) {
	int dem = 0;
	if(!khoangtrang(s[0])) dem++;
	for(int i = 0; i < strlen(s) - 1; i++) {
		if(khoangtrang(s[i]) && !khoangtrang(s[i + 1])) {
			dem++;
		}
	}
	return dem;
}


void hienthi(char s[]) {
	printf("So tu co trong chuoi la: %d", demtu(s));
}

int main() {
	char s[100];
	nhap(s);
	demtu(s);
	hienthi(s);

}