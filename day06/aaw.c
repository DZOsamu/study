//
// Created by LEGION on 2022/11/22.
//
#include <stdio.h>

int main() {
    int score;
    scanf("%d",&score);

    if(score >= 60) {
        printf("pass\n");
    } else {
        printf("fail\n");
    }

    return 0;
}