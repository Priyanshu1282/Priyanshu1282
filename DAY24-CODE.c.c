#include <stdio.h>

int main(void) {
    int kaka,lap;
    scanf("%d", &kaka);
    while (lap<kaka) {
        int q;
        int r = 1;
        int jav = 0;
        scanf("%d", &q);
        while (q > 0) {
            if (r == 2) {
                jav++;
            }
            r = (r + 1) % 7;
            q--;
        }
        printf("%d\n", jav);
        lap=lap+1;
    }
    // your code goes here
    return 0;
}

