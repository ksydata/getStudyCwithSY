// #include "json.h"
#include <stdio.h> 
    // io
#include <stdlib.h> 
    // library | rand() 함수 사용을 위한 header file

int main(void) {

    int cnt = 0;
    printf("1 ~ 45 중에서 숫자 6개를 출력합니다 \n");
    printf("rand() : ");

    for (cnt = 1; cnt <= 6; cnt++)
        printf(" %d ", rand()); 
            // 범위를 지정하지 않은 출력
    
    printf(" \n");
    printf("rand() %% 45 : ");

    for (cnt = 1; cnt <= 6; cnt++)
        printf(" %d ", (rand() % 45));
            // 0 ~ 44 사이의 값 출력
    
    printf(" \n");
    printf("1 + (rand() %% 45) : ");

    for (cnt = 1; cnt <= 6; cnt++)
        printf(" %d ", 1 + (rand() % 45));
            // 1 ~ 45 사이의 값 출력
    
    printf(" \n");
    return 0;
}