#include <stdio.h>
#include <math.h>
int main(int argc, char** argv) {

    int n = 100;
    int endNum;
    int flag = 1;
     for (int i = 2; i < 100; ++i) {
        endNum = sqrt(i);
        flag = 1;
        for (int j = 2; j <= endNum; ++j) {

            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            printf("%3d", i);
        }
    }

    return 0;
}
