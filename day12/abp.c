//
// Created by LEGION on 2022/12/3.
//
#include <stdio.h>
int fun(void) {
    printf("�޷���ֵ �в��� ����\n");
    return 4;   //�з���ֵҲ���Բ�����ᣬֱ�ӵ��ú���
}

int main() {
    fun();   //ֻҪ����fun()���ͻ����һ�κ���
    int a = fun();   //fun()�൱��һ������
    printf("%d\n%d\n",a,fun());   //ִ������һ��fun()֮��Ž�ֵ����

    fun();
    int b = fun() + 12;   //������ֵ��return����������ʱע��()���������ú�����ַ��������
    printf("%d\n",b);

    return 0;
}