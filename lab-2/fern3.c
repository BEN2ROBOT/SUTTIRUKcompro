#include <stdio.h>
struct num {
    int a [10]; 
};
int main() {
    struct num n1;
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &n1.a[i]);
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", n1.a[i]);
    }

    return 0;
}
