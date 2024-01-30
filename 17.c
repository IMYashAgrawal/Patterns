/*
*       * 
  *   * 
    * 
  *   * 
*       * 
*/

#include<stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == j || i * j == 8 || i * j == 5) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
        printf("* ");
    }
    printf("\n");
    return 0;
}
