#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        
        if (a > b) {
            printf("First\n");
        } else if (b > a) {
            printf("Second\n");
        } else {
            if (c % 2 != 0) {
                printf("First\n");
            } else {
                printf("Second\n");
            }
        }
    }
    return 0;
}