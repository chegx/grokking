#include <stdio.h>

void countdown(int n) {
    if (n == 1) {
        printf("%d", n);
        return;
    }
    printf("%d ", n);
    countdown(n - 1);
}

int main() {
    int n = 5;
    countdown(n);
    return 0;
}