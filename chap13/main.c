#include <stdio.h>

int DATA_SIZE = 3;

int main() {
    int data[DATA_SIZE];

    int i;
    for (i = 0; i < DATA_SIZE; i++) {
        int value;
        printf("%d: ", i);
        scanf("%d", &value);
        data[i] = value;
    }

    int j;
    for (j = 0; j < DATA_SIZE; j++) {
        printf("%d\n", data[DATA_SIZE - j - 1]);
    }

    return 0;
}
