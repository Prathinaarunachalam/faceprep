#include <stdio.h>

int main() {
    int i,a[10],b[10],c[10],d[10],e;
    char str[3][30] = {"Flipkart", "Snapdeal", "Amazon"};
    for (i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
        scanf("%d", &c[i]);
    }
    for (i = 0; i < 3; i++) {
        d[i] = a[i]-(a[i]*b[i]/100)+c[i];
    }
    for (i = 0; i < 3; i++) {
        printf("In %s: Rs.%d\n",str[i],d[i]);
    }
    e = d[0];
    for (i = 1; i < 3; i++) {
        if (d[i] < e) {
            e = d[i];
        }
    }

    for (i = 0; i < 3; i++) {
        if (e == d[i]) {
            printf("Choose %s\n",str[i]);
            break;
        }
    }

    return 0;
}
