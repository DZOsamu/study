//
// Created by LEGION on 2022/11/14.
//

#include <stdio.h>

int main() {
    int a = 14;
    printf("before:%d\n",a);

    printf("Please enter:");   //提示输入配合printf使用，不能写在scanf里面
    scanf("%d",&a);   //scanf输入，转移字符和输入的内容与变量对应，要加寻址符&
    printf("after:%d\n",a);

    int b = 11 , c = 15;
    printf("%d\n",b,c);

    scanf("%d%d",&b,&c);   //scanf里转移字符不隔开时，默认输入用空格隔开
    printf("%d %d\n",b,c);

    scanf("%d,%d",&b,&c);   //scanf里转移字符用什么隔开，输入的时候就用什么隔开，否则后面的数输入失败
    printf("%d %d\n",b,c);
}