#include <stdio.h>

int main() {
    int a = 10;

    if (a >= 10) {
        a += 1;
    }
    else {
        a -= 1;
    }

    printf("%d", a);
}