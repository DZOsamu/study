//
// Created by LEGION on 2022/11/19.
//
#include <stdio.h>

int main() {
    int i = 1;
    do {
        printf("%d\t",i);   //先执行do中语句，再进入循环
        i++;
    } while (i <= 3);   //注意while()后面要加;

    printf("\n");

    i = 1;   //重置

    while (i <= 3) {
        printf("%d\t",i);   //先判断条件，再执行语句
        i++;
    }
}