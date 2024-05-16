#include <stdio.h>
#include "labs.h"

int main() {
    int variant;
    int correctVariant = 0; // Флаг для проверки правильности ввода
    int laba = 0;
    int pravlab = 0;
    do {
        printf("Viberete kakuy labu vi xotite: \n");
        printf("Esli vi hotite uvidet variant osnovnoi raboti napisite 1: \n");
        printf("Esli vi hotite uvidet dopolnitelnoe zadanie osnovnoi raboti napisite 2: \n");
        scanf_s("%d", &laba);
        if (laba == 1) {
            pravlab = 1;
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
                else {
                    printf("Varianta net \n");
                }
            } while (!correctVariant); // Повторяем, пока флаг не установлен
        }
        if (laba == 2) {
            pravlab = 1;
            do {
                printf("Vvedite nomer lab: \n");
                scanf_s("%d", &variant);

                if (variant == 3) {
                    Doplabs3();
                    correctVariant = 1; // Устанавливаем флаг, если вариант правильный
                }
                else if (variant == 4) {
                    Doplabs4();
                    correctVariant = 1;
                }
                else if (variant == 5) {
                    Doplabs5();
                    correctVariant = 1;
                }
                else if (variant == 6) {
                    Doplabs6();
                    correctVariant = 1;
                }

                else {
                    printf("Varianta net. Y 1,2,7 net dopolnitelnogo zadania \n");
                    printf("Libo vi veli variant bolshe 7 \n");
                }
            } while (!correctVariant); // Повторяем, пока флаг не установлен
        }
        } while (!pravlab);
    return 0;
}
