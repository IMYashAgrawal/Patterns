/*
* * * * * 
*       * 
*       * 
*       * 
* * * * * 
*/

#include<stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("* ");
    }
    printf("\n");
    for (int i = 1; i <= 3; i++) {
        printf("* ");
        for(int j = 1; j <= 3; j++) {
            printf("  ");
        }
        printf("* ");
        printf("\n");
    }
    for (int i = 1; i <= 5; i++) {
        printf("* ");
    }
    printf("\n");
    return 0;
}