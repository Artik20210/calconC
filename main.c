#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <wchar.h>
int main() {
    system("chcp 1251");
    system("cls");
    float a;
    printf("������� 1 �����: ");
    scanf("%f", &a);
    float b;
    printf("������� 2 �����: ");
    scanf("%f", &b);
    float vop;
    printf("������ �����: (1 - ��������, 2 - ������, 3 - ���������, 4 - ��������) ");
    scanf("%f", &vop);

    if (vop == 1) {
        float c;
        c = a + b;
        printf("%f + %f = %f\n", a,b,c);
    } else if (vop == 2) {
        float c;
        c = a - b;
        printf("%f - %f = %f\n", a,b,c);
    } else if (vop == 3) {
        float c;
        c = a / b;
        printf("%f / %f = %.2f\n", a,b,c);
    } else {
        float c;
        c = a * b;
        printf("%f * %f = %f\n", a,b,c);
    }
}