//
// Created by LEGION on 2022/11/26.
//
#include <stdio.h>
int main() {
//用循环访问数组
    int a[7] = {7,2,5};
    int i;
    for (i = 0; i <= 5 ; ++i) {
        printf("%d\t",a[i]);
    }

    printf("\n");

//打印元素的地址
    printf("%p,%p,%p\n",&a[0],&a[1],&a[2]);

//每一个元素的内存是4字节，数组的内存是连续的
    printf("%p,%p,%p\n",&a[3],&a[3]+1,&a[4]);
    //&a[3]+1是通过a[3]的地址来找a[4]的地址（地址偏移）

    printf("%d,%d\n",&a,&a+1);   //a+1是下一个数组的地址
//地址+1是加了一个类型的大小，如：a[0]+1是加了一个元素的大小，a+1是加了一个数组的大小

    return 0;
}