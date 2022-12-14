//
// Created by LEGION on 2022/11/19.
//
#include <stdio.h>

int main() {
    int i = 5;
    do {
        printf("%d\t",i);
        i++;
    } while (i <= 3);   //条件假，跳出循环
    printf("%d\n",i);
}

//do while至少执行一次