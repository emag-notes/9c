#include <stdio.h>

int main() {
    printf("定価を入力してください: ");
    int fixedPrice;
    scanf("%d", &fixedPrice);

    printf("1 割引: %d\n", (int) (fixedPrice * (1 - 0.1)));
    printf("3 割引: %d\n", (int) (fixedPrice * (1 - 0.3)));
    printf("5 割引: %d\n", (int) (fixedPrice * (1 - 0.5)));
    printf("8 割引: %d\n", (int) (fixedPrice * (1 - 0.8)));
    return 0;
}
