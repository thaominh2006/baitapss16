#include<stdio.h>

int main(){
	int n = 10;
	int *ptr = &n;
    printf("Cach 1 (truc tiep):\n");
    printf("Gia tri cua bien: %d\n", n);
    printf("Dia chi cua bien: %d\n", &n);
    
    printf("\nCach 2 (Thong qua con tro):\n");
    printf("Gia tri cua bien (qua con tro): %d\n", *ptr);
    printf("Dia chi cua bien (qua con tro): %d\n", (void*)ptr);

    return 0;
}
	
