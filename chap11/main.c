#include <stdio.h>

int isHeldOlympic(int year);

int main() {
    printf("西暦年(例: 2020)を入力してください: ");
    int year;
    scanf("%d", &year);

    switch (isHeldOlympic(year)) {
        case 1:
            printf("%d 年: 夏季オリンピック開催年\n", year);
            break;
        case 2:
            printf("%d 年: 冬季オリンピック開催年\n", year);
            break;
        default:
            printf("%d 年: オリンピック不開催年\n", year);
            break;
    }
    return 0;
}

int isHeldOlympic(int year) {
    if (year % 4 == 0) {
        return 1;
    } else if (year % 2 == 0) {
        return 2;
    }
    return 0;
}
