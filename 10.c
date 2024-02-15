/*
01 02 03 04 05 
06 07 08 09 
10 11 12 
13 14 
15 
*/

#include<stdio.h>

int main() {
    int c = 1;

    for (int i = 5; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            if (c <= 9) {
                printf("%d", 0);
            }
            printf("%d ", c);
            c++;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
