#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while(T--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        int max1 = (a > b) ? a : b; // Maximum of a and b
        int max2 = (c > d) ? c : d; // Maximum of c and d
        
        int maxTastiness = max1 + max2; // Maximum possible tastiness
        printf("%d\n", maxTastiness);
    }
    
    return 0;
}


