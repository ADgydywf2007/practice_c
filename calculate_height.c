#include <stdio.h>

int main() {
    int foot;
    int inch;

    printf("please input your height (foot inch): ");
    scanf("%d %d", &foot, &inch);

    printf("your height is %.2f meter\n", (foot + inch / 12.0) * 0.3048);
    return 0;
}