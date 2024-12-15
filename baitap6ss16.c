#include <stdio.h>
int timKiemPhanTu(int *arr, int size, int giaTri);
int main() {
    int mang[] = {5,8,2,4,7,1};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]); 
    int giaTriCanTim ;
    printf("Nhap phan tu muon tim kiem: ");
    scanf("%d", &giaTriCanTim);
    int viTri = timKiemPhanTu(mang, kichThuoc, giaTriCanTim);
    if (viTri != -1) {
        printf("Gia tri %d duoc tim thay o vi tri %d\n", giaTriCanTim, viTri);
    } else {
        printf("Gia tri %d khong ton tai trong mang.\n", giaTriCanTim);
    }

    return 0;
}
int timKiemPhanTu(int *arr, int size, int giaTri) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == giaTri) {
            return i;
        }
    }
    return -1;
}
