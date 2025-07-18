#include <stdio.h>
#include <stdlib.h>

int is_leap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

long date_to_days(int day, int month, int year) {
    long total_days = 0;
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y;
    int m;

    for (y = 1; y < year; y++) {
        total_days += is_leap(y) ? 366 : 365;
    }

    for (m = 1; m < month; m++) {
        total_days += days_in_month[m];
        if (m == 2 && is_leap(year)) {
            total_days++;
        }
    }

    total_days += day;

    return total_days;
}

int main() {
    int d1, m1, y1;
    int d2, m2, y2;
    long total_days1, total_days2, difference;

    printf("--- Cálculo da Diferença de Dias Entre Datas ---\n");

    printf("Digite a primeira data (DD MM AAAA): ");
    scanf("%d %d %d", &d1, &m1, &y1);

    printf("Digite a segunda data (DD MM AAAA): ");
    scanf("%d %d %d", &d2, &m2, &y2);

    total_days1 = date_to_days(d1, m1, y1);
    total_days2 = date_to_days(d2, m2, y2);

    difference = labs(total_days2 - total_days1);

    printf("\nA diferença entre as duas datas é de %ld dias.\n", difference);

    return 0;
}