
#include <stdio.h>

int yigindi(int n) {
    if (n == 0) {
        return 0;
    }

    return n % 10 + yigindi(n / 10);
}

int main() {
    int n;

    printf("Natural son kiriting: ");
    scanf("%d", &n);

    printf("Raqamlar yig'indisi: %d", yigindi(n));

    return 0;
}
