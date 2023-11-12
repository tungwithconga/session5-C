#include <stdio.h>

int main() {
    float doanhThu;
    printf("Nhap doanh thu ban hang cua dai ly: ");
    scanf("%f", &doanhThu);

    float hoaHong;
    if (doanhThu <= 100000000) {
        hoaHong = doanhThu * 0.05;
    } else if (doanhThu <= 300000000) {
        hoaHong = doanhThu * 0.1;
    } else {
        hoaHong = doanhThu * 0.2;
    }
    printf("Hoa hong cua dai ly la: %.2f\n", hoaHong);

    return 0;
}

