//
// Created by LEGION on 2022/11/22.
//
#include <stdio.h>

int main() {
    int score;
    scanf("%d",&score);

    if(score >= 0 && score <= 60) {
        printf("fail");
    }
    if(score >= 60 && score <= 100) {
        printf("pass");
    }

    return 0;
}
