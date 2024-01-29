#include <stdio.h>
int days_in_months(int month, int year){
	int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if(year % 400 == 0){
		days[1] = 29;
	}
	return days[month - 1];
}

int main(){
	int month, year;
	printf("Month: ");
	scanf("%d", &month);
	printf("Year:");
	scanf("%d", &year);
	if(month < 0){
		printf("Gia tri khong phu hop");
	} else {
		printf("Thang %d nam %d co %d ngay", month, year, days_in_months(month, year));
	}
	printf("\n----------------------------------\n");
	main();
	return 0;
} 