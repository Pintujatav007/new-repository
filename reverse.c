#include <stdio.h>

int main() {
    int num = 123, reverse = 0, remainder;

    while(num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    printf("Reversed Number = %d", reverse);
    return 0;
}
