#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <wchar.h>
int main() {
    system("chcp 1251");
    system("cls");
    float a;
    printf("Введите 1 число: ");
    scanf("%f", &a);
    float b;
    printf("Введите 2 число: ");
    scanf("%f", &b);
    float vop;
    printf("Выбери число: (1 - добавить, 2 - отнять, 3 - разделить, 4 - умножить) ");
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