#include <stdio.h>

int main() {
    int repeat;
    scanf("%d", &repeat);

    for(int loop = 0; loop < repeat; loop++) {
        int n;
        scanf("%d", &n);
        int a[n];

        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int x, flag = -1;
        scanf("%d", &x);
        
        for(int l = 0; l < n; l++) {
            if(a[l] == x && flag == -1) {flag = l;}
        }

        if(flag != -1) {
            printf("index = %d\n", flag);
        } else {
            printf("Not found\n");
        }
    }
}