#include <stdio.h>
#include <stdlib.h> // For abs function

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        // Calculate the minimum time required for the policeman to catch the thief
        int time = abs(X - Y);
        
        // Output the result for the current test case
        printf("%d\n", time);
    }
    
    return 0;
}

