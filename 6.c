/*
0 
0 1 
0 1 0 
0 1 0 1 
0 1 0 1 0 
*/

#include<stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                printf("%d ",1);
            }
            else {
                printf("%d ",0);
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}