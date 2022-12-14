//
// Created by LEGION on 2022/11/13.
//
#include <stdio.h>

int main(void) {
    printf("year:%d\nmonth:%d\n",2023,11);  //输出多个数时顺序填充
    printf("day:%d\n",13);   //形如%d格式化输出符或转移字符，\n换行，\t空格
    printf("%d\t%f\t%o\t%x\t",24,24.0,24,24);  //%d十进制，%f十进制浮点数，%o八进制，%x十六进制
    return 0;
}
