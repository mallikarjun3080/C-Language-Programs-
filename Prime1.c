#include <stdio.h>

int main(int argc, char** argv) {

    int num;

    int i;
    int c;

    int flag = 1;

    printf("please enter number:");
    scanf("%d", &num);


    c = num / 2;
    for (i = 2; i <= c; ++i) {
        if (num % i == 0) {
            flag = 0;
            break;
        }

    }

    if (num > 1 && flag == 1) {
        printf("\n Given number is Prime");
    } else {
        printf("\n Given number is not a Prime");
    }
    return 0;
}
