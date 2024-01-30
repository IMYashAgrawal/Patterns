/*
      # # # # 
    # # # #
  # # # #
# # # # 
*/

#include<stdio.h>

int main() {
    for (int i = 3; i >= 0; i--) {
        for (int j = i; j > 0; j--) {
            printf("  ");
        }
        for (int k = 1; k <= 4; k++) {
            printf("# ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}