//
// Created by LEGION on 2022/12/3.
//
#include <stdio.h>
int fun(void) {
    printf("fun\n");
    return 4;   //��ֹ������Ĵ��붼��ִ����
    printf("fun");
}

int main() {
    fun();

    return 0;
}