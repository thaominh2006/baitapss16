#include<stdio.h>
void inMang(int *arr, int kichThuoc);
int main(){
    int arr[]={7,8,9,10,11};
    int kichThuoc = sizeof(arr) / sizeof(arr[0]);
    inMang(arr,kichThuoc);
    return 0;
}
void inMang(int *arr,int kichThuoc){
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", *(arr + i));  
    }
    printf("\n");

}
