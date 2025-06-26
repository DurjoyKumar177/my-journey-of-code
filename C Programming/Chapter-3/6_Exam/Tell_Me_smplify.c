#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, m;
        scanf("%d", &n);
        int ar[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &ar[i]);
        }

        scanf("%d", &m);

        int match = 0;
        for (int i = 0; i < n; i++) {
            if (ar[i] == m) {
                match = 1;
                break;
            }
        }

        printf(match ? "YES\n" : "NO\n");
    }

    return 0;
}
