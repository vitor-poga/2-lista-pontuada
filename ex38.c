#include <stdio.h>
#include <math.h>

int main() {
    long double produto = 1.0;
    int num, i, eh_primo_flag;

    for (num = 92; num <= 1478; num++) {
        eh_primo_flag = 1;

        if (num <= 1) {
            eh_primo_flag = 0;
        } else {
            for (i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    eh_primo_flag = 0;
                    break;
                }
            }
        }

        if (eh_primo_flag == 1) {
            produto *= num;
        }
    }

    printf("O produto dos números primos entre 92 e 1478 é: %Le\n", produto);

    return 0;
}