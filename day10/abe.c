//
// Created by LEGION on 2022/11/27.
//
//数组之间的赋值
#include <stdio.h>
#include <memory.h>
int main() {
    int a[4] = {1,2,3,4};
    int b[4] = {};
//用循环进行赋值
    for (int i = 0; i <4 ; ++i) {
        b[i] = a[i];
        printf("%d\t",b[i]);
    }

    printf("\n");

//用memcpy函数进行内存复制，头文件要加<memory.h>或者<string.h>
    int c[4];
    memcpy(c, a, sizeof(int)*4);    //size后面填复制的字节数
    for (int i = 0; i <4 ; ++i) {
        printf("%d\t",c[i]);
    }

    int d[3][2] = {1,2,3,4,5,6};
    printf("\n");
    int e[3][2];
    memcpy(e, d, sizeof(int)*3*2);    //size后面填复制的字节数
    for (int i = 0; i < 3 ; ++i) {
        for (int j = 0; j < 2 ; ++j) {
            printf("%d\t",e[i][j]);
        }
    }
    return 0;
}