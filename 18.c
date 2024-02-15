/*
          1
        2 1 2
      3 2 1 2 3
    4 3 2 1 2 3 4
  5 4 3 2 1 2 3 4 5
6 5 4 3 2 1 2 3 4 5 6
*/

#include<stdio.h>

int main() {
    int x = 1, count = 1, re = 1;
    for(int i = 7; i > 1; i--) {
        for(int j = i - 2; j > 0; j--){
            printf("  ");
        }
        for(; count >= 1 ; count--) {
            printf("%d ",count);
        }
        for(count = count + 2; count <= re; count++){
            printf("%d ",count );
        }
        x = x + 2;
        re++;
        count = re;
        printf("\n");
    }
    return 0;
}