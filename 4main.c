
#include <stdio.h>

int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * faktorial(n - 1);
}

int main() {
    int n;

    printf("N sonini kiriting: ");
    scanf("%d", &n);

    printf("Faktorial: %d", faktorial(n));

    return 0;
}
