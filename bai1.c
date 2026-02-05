/******************************************************************************
 * Họ và tên: [TRẦN VĂN HUY]
 * MSSV:      [PS48688]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY
#include <stdio.h>

int main() {
    int n, sum = 0, count = 0;
    float average;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            sum += arr[i];
            count++;
        }
    }
    if (count > 0) {
        average = (float)sum / count;
        printf("Trung bình tổng các số chia hết cho 3 trong mảng: %.2f\n", average);
    } else {
        printf("Không có số nào chia hết cho 3 trong mảng.\n");
    }

    return 0;
}

