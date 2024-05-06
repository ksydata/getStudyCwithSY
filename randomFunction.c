// #include "json.h"
#include <stdio.h> 
    // io
#include <stdlib.h> 
    // library | rand() 함수 사용을 위한 header file
#include <time.h> 
    // time() 함수 사용

#define NUM 45

int main(void) {

    int cnt = 0;
    printf("1 ~ 45 중에서 숫자 6개를 출력합니다. \n");
    printf("rand() : ");

    for (cnt = 1; cnt <= 6; cnt++)
        printf(" %d ", rand()); 
            // 범위를 지정하지 않은 출력
            // rand() 함수의 범위는 0 ~ 32.767, rand()만 사용하면 난수가 seed가 걸려 계속 같은 값만 출력
    
    printf(" \n\n");
        // 범위 조정 후 난수 출력
    printf("rand() %% 45 : ");

    for (cnt = 1; cnt <= 6; cnt++)
        printf(" %d ", (rand() % 45));
            // 범위를 지정한 출력
            // 0 ~ 44 사이의 값 출력
    
    printf(" \n\n");
    printf("1 + (rand() %% 45) : ");

    for (cnt = 1; cnt <= 6; cnt++)
        printf(" %d ", 1 + (rand() % 45));
            // 1 ~ 45 사이의 값 출력
    
    printf(" \n\n");

    printf("1 ~ 45까지 임의의 숫자 6개를 출력합니다. \n");
        // void srand(int) {}, 시간은 계속 흐르기 때문에 특정 시점을 잡아 난수 생성
    // srand(unsigned)time(NULL);
    for (cnt = 1; cnt <= 6; cnt++) {
        printf(" %d, 1 + (rand() % NUM)");
    }

    printf(" \n\n");
    return 0;
}