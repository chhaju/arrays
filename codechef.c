#include <stdio.h>

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--) {
        int L, R, M; // L: Pages to read, R: Pages to write, M: Minutes available
        scanf("%d %d %d", &L, &R, &M);

        int satisfaction = 0;

        for (int i = L; i <= R; i++) {
            int remaining_time = M - i;
            if (remaining_time >= 0 && remaining_time % i == 0) {
                satisfaction = i;
                break;
            }
            int completed_pages = M / i;
            int remaining_lines = M % i;

            if (remaining_lines <= R - L && completed_pages * i + remaining_lines >= L) {
                satisfaction = completed_pages * i + remaining_lines;
                break;
            }
        }

        printf("%d\n", satisfaction);
    }

    return 0;
}

