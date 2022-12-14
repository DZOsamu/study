//
// Created by LEGION on 2022/11/19.
//

//分别列出1~20中的奇偶数
#include <stdio.h>

int main() {
    for (int i = 1; i <= 20; ++i) {
        if(i % 2 == 0) {
            continue;
        }
        printf("%d\t",i);
    }

    printf("\n");

    for (int i = 1; i <= 20; ++i) {
        if(i % 2 != 0) {
            continue;
        }
        printf("%d\t",i);
    }
}