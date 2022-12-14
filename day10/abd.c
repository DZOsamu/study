//
// Created by LEGION on 2022/11/27.
//
#include <stdio.h>
int main() {
    int a[3][2];   //声明一个二维数组
// 前面[3]的表示大的数组里有3个小的一维数组，后面的[2]表示每个小的一维数组里面有2个元素
//元素个数 = 3 * 2，二维数组的大小 = 3 * 2 * 类型大小
    printf("%d\n", sizeof(a));

//二维数组的初始化
    int b[3][2] = {{1,2},{3,4},{5,6}};
    int c[3][2] = {{1,2},{3,4}};
    int d[3][2] = {1,2,3};
    int e[][2] = {1,2,3,4,5};

//二维数组的访问
    printf("\nb[3][2]=  ");
    for (int i = 0; i < 3 ; i++) {
        for (int j = 0; j < 2 ; j++) {
            printf("%d\t",b[i][j]);
        }
    }

    printf("\nc[3][2]=  ");
    for (int i = 0; i < 3 ; i++) {
        for (int j = 0; j < 2 ; j++) {
            printf("%d\t",c[i][j]);
        }
    }

    printf("\nd[3][2]=  ");
    for (int i = 0; i < 3 ; i++) {
        for (int j = 0; j < 2 ; j++) {
            printf("%d\t",d[i][j]);
        }
    }

    printf("\ne[3][2]=  ");
    for (int i = 0; i < 3 ; i++) {
        for (int j = 0; j < 2 ; j++) {
            printf("%d\t",e[i][j]);
        }
    }
}