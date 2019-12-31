#include <stdio.h>

int main() {
    int score;

    do {
        printf("点数(0 ~ 100)を入力してください: ");
        scanf("%d", &score);
    } while (score < 0 || score > 100);

    printf("入力された点数: %d\n", score);
    return 0;
}
