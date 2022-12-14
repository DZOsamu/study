//
// Created by LEGION on 2022/11/24.
//
#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a >= 60)
        if(a >= 90)   //当输入的a<60时，下面的if语句和else语句都不执行
            printf("good");
            else {   //这个else和前面紧挨着的if配套
            printf("pass");   //不加{}，容易出现理解上的偏差
            }
//    else {
//        printf("fail");
//    }

    return 0;
}