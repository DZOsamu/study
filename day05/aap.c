//
// Created by LEGION on 2022/11/19.
//
#include <stdio.h>

int main() {
    for (int i = 1; i <=3; i++) {
        printf("%d OUT\n",i);
        for (int j = 1; j < 3 ; j++) {
            printf("%d IN\n",j);
        }
    }

    printf("\n");

    int m = 1, n = 1;
    for ( ; m <=3 ; ++m) {
        printf("%d out\n",m);
        for ( ; n < 3; ++n) {
            printf("%d in\n",n);
        }
    }
}

//注意变量赋值的位置（内层循环语句1）
//for循环比while循环更清晰