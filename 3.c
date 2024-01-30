/*
@ @ @ @ @ @ @ @ @ @ 
@ @ @ @     @ @ @ @ 
@ @ @         @ @ @ 
@ @             @ @ 
@                 @ 
*/

#include<stdio.h>

int main() {
    int x = 0;
    for(int i = 5; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            printf("@ ");
        }
        for (int j = 0; j < x; j++) {
            printf("  ");
        }
        x += 2;
        for (int l = i; l >= 1; l--) {
            printf("@ ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}