//
// Created by LEGION on 2022/11/19.
//
#include <stdio.h>

int main() {
    int a;
    for (a = 1; a <=3 ; ++a) {
        printf("%d out\n",a);
        for (a = 1; a < 3; ++a) {
            printf("%d in\n",a);
        }
    }

    printf("\n");

    for (int b = 1; b <= 3 ; ++b) {
        printf("%d out\n",b);
        for (int b = 1; b < 3; ++b) {
            printf("%d in\n",b);
        }
    }
}