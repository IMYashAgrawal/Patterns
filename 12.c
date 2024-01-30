/*
A B C D 
  A B C D 
    A B C D 
      A B C D 
*/

#include<stdio.h>

int main() {
    for (int i = 0; i <= 3; i++) {
        for(int j = 0; j < i; j++) {
            printf("  ");
        }
        for (char ch = 'A'; ch <= 'D'; ch++) {
            printf("%c ",ch);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}