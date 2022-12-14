//
// Created by LEGION on 2022/12/3.
//
#include <stdio.h>
int fun(void) {
    printf("fun\n");
    return 4;   //终止，后面的代码都不执行了
    printf("fun");
}

int main() {
    fun();

    return 0;
}