//
// Created by LEGION on 2022/12/3.
//
#include <stdio.h>
//�޲����޷���ֵ
void fun(void) {   //()���治�ܼ�;
    printf("���Ǻ���\n");
}
int main() {
    fun();   //��������

    printf("%d\n",fun);
    printf("%p\n",fun);   //�������־��Ǻ�����ַ
    printf("%p\n",&fun);

    (&fun)();   //Ҳ�Ǻ�������

    return 0;
}