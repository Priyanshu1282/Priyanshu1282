#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K); // Read N and K for each test case

        int count = 0;
        for (int i = 0; i < N; i++) {
            int characteristic;
            scanf("%d", &characteristic); // Read each characteristic value

            // Check if the new characteristic value is divisible by 7
            if ((characteristic + K) % 7 == 0) {
                count++;
            }
        }

        printf("%d\n", count); // Output the result for the current test case
    }

    return 0;
}