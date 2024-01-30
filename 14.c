/*
A A A A A A A A A A 
B B B B     B B B B 
C C C         C C C 
D D             D D 
E                 E 
F F             F F 
G G G         G G G 
H H H H     H H H H 
I I I I I I I I I I 
*/

#include<stdio.h>

int main() {
    char ch;
    int x = 5, y = 0;
    for (ch = 'A'; ch <= 'E'; ch++) {
        for (int i = x; i > 0; i--) {
            printf("%c ", ch);
        }
        for (int j = y; j > 0; j--) {
            printf("  ");
        }
        y = y + 2;
        for (int i = x; i > 0; i--) {
            printf("%c ", ch);
        }
        x--;
        printf("\n");
    }
    x = x + 2;
    y = y - 4;
    for (ch = 'F'; ch <= 'I'; ch++) {
        for (int i = x; i > 0; i--) {
            printf("%c ", ch);
        }
        for (int j = y; j > 0; j--) {
            printf("  ");
        }
        y = y - 2;
        for (int i = x; i > 0; i--) {
            printf("%c ", ch);
        }
        x++;
        printf("\n");
    }
    printf("\n");
    return 0;
}