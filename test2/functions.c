#include "functions.h"
#include <stdio.h>

void insole(int n) {
    if (n < 1) {
        printf("Loi: Khong the in so le voi gia tri n am hoac bang 0!\n");
        return;
    }
    for (int i = 1; i <= n; i += 2) { 
        printf("%d ", i);
    }
    // printf("\n");
}

void nhaphaisoduong(int *a, int *b) {
    do {
        printf("Nhap lan luot 2 so a va b: ");
        scanf("%d %d", a, b);
        if (*a <= 0 || *b <= 0) {
            printf("Loi: ca hai so phai la so nguyen duong!\n");
        }
    } while (*a <= 0 || *b <= 0);
}

void Doivitri(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int ktrsonguyenduong(int n) {
    return n > 0;
}

long long giaithua(int n) {
    if (n < 0) {
        printf("Loi: khong the tinh giai thua so am!\n");
        return -1;
    }
    if (n >= 20) {
        printf("Loi: gia tri lon gay tran so\n");
        return -1;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int ucln(int a, int b) {
    if (a == 0 && b == 0) {
        printf("Lỗi: Không xác định UCLN cho cả hai số đều bằng 0!\n");
        return -1;
    }
   
    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

