
#include <stdio.h>
#include "labs.h"
int main() {
    
    int variant;
do {
    printf("Vvedite nomer lab: \n");
    scanf_s("%d", &variant);
    if (variant == 1) {
        labs1();
    }
    else if (variant == 2){
    
        int labs2();
    }
    else if (variant == 3)
    {
        labs3();
    }
    else if (variant == 4) {

        labs4();
    }
    else if (variant == 5) {

        labs5();
    }
    else if (variant == 6) {

        labs6();
    }
    else if (variant == 7) {

        labs7();
    }
    else if (variant == 8) {

        labs8();
    }
    else
    {
        printf("Varianta net! \n ");
    }
     } while (!variant);
    return 0;
}
