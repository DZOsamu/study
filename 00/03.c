//
// Created by LEGION on 2022/11/27.
//
//数组的选择法排序
#include <stdio.h>
int main() {
    int a[8]={9,65,4,765,83,59,38,354};
    int i,j,temp;
    for (i = 0; i <= 7 ; i++) {
        for (j = 0; j <= 7 ; j++) {
            if(a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i <= 7 ; i++) {
        printf("%d\t",a[i]);
    }
}