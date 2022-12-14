//
// Created by LEGION on 2022/11/27.
//
//数组的冒泡法排序
#include <stdio.h>
int main() {
    int a[8]={9,65,4,765,83,59,38,354};
    int i,j,temp;
    for (int i = 0; i <= 7 ; i++) {
        for (int j = 0; j <= 7 - i ; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i <= 7 ; i++) {
        printf("%d\t",a[i]);
    }
}