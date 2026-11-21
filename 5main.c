
#include <stdio.h>

int daraja(int a, int n) {
    if (n == 0 ) {
        return 1;
    }

    return a *  daraja(a,n - 1);
}

int main() {
    int a,n;

    printf("Son kiriting: ");
    scanf("%d %d", &a,&n);

    printf("Faktorial: %d",  daraja(a,n));

    return 0;
}
