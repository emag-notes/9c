#include <stdio.h>

int main() {
    printf("西暦年(例: 2020)を入力してください: ");
    int year;
    scanf("%d", &year);

    int isSummerOlympic = (year % 4) == 0;
    int isWinterOlympic = (year % 4) == 2;

    if (isSummerOlympic) {
        printf("%d 年: 夏季オリンピック開催年\n", year);
    } else if (isWinterOlympic) {
        printf("%d 年: 冬季オリンピック開催年\n", year);
    } else {
        printf("%d 年: オリンピック不開催年\n", year);
    }

    return 0;
}
