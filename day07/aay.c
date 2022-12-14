//
// Created by LEGION on 2022/11/24.
//
#include <stdio.h>
int main() {
    int score;
    scanf("%d",&score);

    if(score < 60) {
        printf("fail");
    } else if(score >= 60 && score < 75) {
        printf("pass");
    } else if(score >= 75 && score < 90) {
        printf("good");
    } else {
        printf("perfect");
    }

    return 0;
}