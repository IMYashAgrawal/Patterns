/*
02
03 05
07 11 13
17 19 23 29
*/

#include<stdio.h>

int prime(int);

int main() {
    int count = 2;

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            while(prime(count) != 0) {
                count++;
            }
            if (count <= 9) {
                printf("0");
            }
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int prime(int n) {
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 1;
        }
    }
    return 0;
}