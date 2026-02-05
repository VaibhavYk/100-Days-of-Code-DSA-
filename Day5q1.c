#include <stdio.h>

int main() {
    int p, q;
    int log1[100], log2[100], merged[200];

    // Read first log
    scanf("%d", &p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &log1[i]);
    }

    // Read second log
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &log2[i]);
    }

    int i = 0, j = 0, k = 0;

    // Merge both sorted logs
    while (i < p && j < q) {
        if (log1[i] <= log2[j]) {
            merged[k++] = log1[i++];
        } else {
            merged[k++] = log2[j++];
        }
    }

    // Copy remaining elements
    while (i < p) {
        merged[k++] = log1[i++];
    }
    while (j < q) {
        merged[k++] = log2[j++];
    }

    // Print merged log
    for (int i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
