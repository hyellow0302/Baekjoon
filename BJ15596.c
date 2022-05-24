//2020_05_25 깃에 올리고싶다 . . .

#include <stdio.h>

int sum(int* a, int n);

int main() {
    int a[100];
    int n, b;
    int result = 0;
 
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &b);
        a[i] = b;
    }

    result = sum(a, n);

    printf("%d", result);

    return 0;
}

int sum(int* a, int n) {
    int result = 0;

    for (int i = 0; i < n; i++) {
        result += a[i];
    }

    return result;
}