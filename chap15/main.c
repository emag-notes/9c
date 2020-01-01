#include <stdio.h>

int DATA_SIZE = 3;

void maxAndMin(const int data[], int *max, int *min);

int main() {
    int data[DATA_SIZE];

    int i;
    for (i = 0; i < DATA_SIZE; i++) {
        int value;
        printf("%d: ", i);
        scanf("%d", &value);
        data[i] = value;
    }

    int max;
    int min;
    maxAndMin(data, &max, &min);

    printf("最大値: %d\n", max);
    printf("最小値: %d\n", min);

    return 0;
}

void maxAndMin(const int data[], int *max, int *min) {
    *max = data[0];
    *min = data[0];

    int i;
    for (i = 1; i < DATA_SIZE; i++){
        if (data[i] > *max) {
            *max = data[i];
        }
        if (data[i] < *min) {
            *min = data[i];
        }
    }
}
