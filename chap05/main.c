#include <stdio.h>

double CONSUMPTION_TAX_RATE = 0.08;

int main() {
    int softDrink = 198;
    int milk = 138;

    int total = (softDrink * 1 + milk * 2);
    int consumptionTax = (int) (total * CONSUMPTION_TAX_RATE);
    int includingTax = total + consumptionTax;

    int payment = 1000;
    int change = payment - includingTax;

    printf("%d 円\n", change);
    return 0;
}
