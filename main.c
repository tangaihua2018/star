#include <stdio.h>

/**
 * 打印直角三角形/等腰三角形
 */
int main() {
    for (int i = 0; i < 10; i++) {
        // 打一行空格，10-（i+1）个
        for (int j = 0; j < 10 - (i + 1); j++) {
            printf(" ");
            fflush(stdout);
        }

        // 打i+1个星号
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
            fflush(stdout);
        }

        // 换行
        printf("\n");
    }
    return 0;
}
