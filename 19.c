/*
1 2 3 4 5 6 
 2 3 4 5 6 
  3 4 5 6 
   4 5 6
    5 6 
     6
*/

#include<stdio.h>

int main() {
    int count = 1, re = 1;
    for(int i = 0; i <= 5; i++){
        for(int j = i; j > 0; j--) {
            printf(" ");
        }
        for(;count <= 6; count++){
            printf("%d ",count);
        }
        re++;
        count = re;
        printf("\n");
    }
    return 0;
}