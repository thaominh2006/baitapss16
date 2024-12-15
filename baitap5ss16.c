#include <stdio.h>
void capNhatPhanTu(int *arr, int viTri, int giaTriMoi, int size);
int main() {
    int mang[] = {10,2,3,4,5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]); 
    printf("Mang ban dau la:\n");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
    int viTriCapNhat;
    printf("Nhap vi tri can them phan tu: ");
    scanf("%d",&viTriCapNhat);
    int giaTriMoi;   
    printf("Nhap gia tri can them: ");
    scanf("%d",&giaTriMoi);
    capNhatPhanTu(mang, viTriCapNhat, giaTriMoi, kichThuoc);
    printf("Mang sau khi cap nhat:\n");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}
void capNhatPhanTu(int *arr, int viTri, int giaTriMoi, int size) {
    if (viTri < 0 || viTri >= size) { 
        printf("Vi tri %d khong hop le.\n", viTri);
        return;
    }
    arr[viTri] = giaTriMoi; 
}
