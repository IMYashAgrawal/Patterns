/*
1 2 3 4 5 6 
 2 3 4 5 6
  3 4 5 6 
   4 5 6
    5 6 
     6
    5 6
   4 5 6
  3 4 5 6
 2 3 4 5 6
1 2 3 4 5 6
*/

#include<stdio.h>

int main() {
    int count = 1;
    for(int i = 0; i < 6; i++) {
        for(int j = 1; j <= i; j++) {
            printf(" ");
        }
        for(int k = count, l = 0; l < 6 - i; k++, l++) {
            printf("%d ",k);
        }
        count++;
        printf("\n");
    }
    count -= 2;
    for(int i = 1; i < 6; i++) {
        for(int j = 1; j < 6 - i; j++) {
            printf(" ");
        }
        for(int k = count, l = 0; l <= i; k++, l++) {
            printf("%d ",k);
        }
        count--;
        printf("\n");
    }
    return 0;
}