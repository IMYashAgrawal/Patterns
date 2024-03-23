/*
***********
 *       *
  *     *
   *   *
    * *
     *
*/

#include<stdio.h>

int main() {
    int num = 8;
    for(int i = 0; i < 11; i++) {
        printf("*");
    }
    printf("\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < i + 1; j++) {
            printf(" ");
        }
        printf("*");
        for(int j = num; j > 1; j--) {
            printf(" ");
        }
        if(num > 0) {
            printf("*");
        }
        num -= 2;
        printf("\n");
    }
    return 0;
}