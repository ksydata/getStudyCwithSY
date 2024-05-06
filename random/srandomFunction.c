#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int arr[6] = { 0 };
        // 배열명은 곧 메모리 주소
    int i = 0;
    srand((unsigned)time(NULL));

    printf("%d\n", sizeof(arr));
        // 24byte

    for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
        arr[i] = 1 + (rand() % 10);
    }

    for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

/*
output

24
arr[0] = 8
arr[1] = 3
arr[2] = 7
arr[3] = 8
arr[4] = 3
arr[5] = 9
*/