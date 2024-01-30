/*
*       * 
  *   * 
    * 
  *   * 
*       * 
*/

#include<stdio.h>

int main() {
    int k = 0, x = 0;
    for(int i = 1; i <= 3; i++) {
        for (int j = 0; j < x; j++) {
            printf("  ");
        }
        x = x + 1;
        printf("* ");
        int z = 0;
        for (int l = 3; k < l; l--) {
            printf("  ");
            z = 1;
        }
        k = k + 2;
        if (z == 1) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i <= 1; i++) {
        for (int j = 1; j <= 2; j++) {
            printf("  ");
            printf("* ");
        }
        printf("\n");
        printf("* ");
        for (int k = 1; k <= 3; k++) {
            printf("  ");
        }
        printf("* ");
    }
    printf("\n");
    return 0;
}