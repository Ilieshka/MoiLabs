#include <stdio.h>
#include "labs.h"

int main() {
    int variant;
    int correctVariant = 0; // Флаг для проверки правильности ввода

    do {
        printf("Vvedite nomer lab: \n");
        scanf_s("%d", &variant);

        if (variant == 1) {
            labs1();
            correctVariant = 1; // Устанавливаем флаг, если вариант правильный
        }
        else if (variant == 2) {
            labs2();
            correctVariant = 1;
        }
        else if (variant == 3) {
            labs3();
            correctVariant = 1;
        }
        else if (variant == 4) {
            labs4();
            correctVariant = 1;
        }
        else if (variant == 5) {
            labs5();
            correctVariant = 1;
        }
        else if (variant == 6) {
            labs6();
            correctVariant = 1;
        }
        else if (variant == 7) {
            labs7();
            correctVariant = 1;
        }
        else if (variant == 8) {
            labs8();
            correctVariant = 1;
        }
        else {
            printf("Varianta net \n");
        }
    } while (!correctVariant); // Повторяем, пока флаг не установлен

    return 0;
}
