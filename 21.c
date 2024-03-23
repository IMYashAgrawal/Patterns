/*
     *
    * *
   *   *
  *     *
 *       *
***********
*/

#include<stdio.h>

int main() {
    int num = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 6 -1 - i; j++) {
            printf(" ");
        }
        printf("*");
        for(int j = 1; j < i * 2; j++) {
            printf(" ");
            num++;
        }
        if(num != 0) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0; i < 11; i++) {
        printf("*");
    }
    return 0;
}