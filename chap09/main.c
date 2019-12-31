#include <stdio.h>

int main() {
    int i = 1;
    for (; i <= 9; i++) {
        int j = 1;
        for (; j <= 9; j++) {
            printf("%3d", i * j);
        }
        printf("\n");
    }
    return 0;
}
