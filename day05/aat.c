//
// Created by LEGION on 2022/11/19.
//
#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        printf("%d\n",i);
        for (int j = 1; j < 3; j++) {
            printf("%d\n",j);
            if(2 == i) {
                printf("if\n");
                break;   //i = 2时跳出内层循环
            }
        }
    }

    for (int j = 1; j <= 3 ; j++) {
        printf("before\t");
        continue;   //执行下一次循环
        printf("after\t");
    }
}