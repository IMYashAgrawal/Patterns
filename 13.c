/*
        # 
      # # # 
    # # # # # 
  # # # # # # # 
# # # # # # # # # 
  # # # # # # # 
    # # # # # 
      # # # 
        # 
*/

#include<stdio.h>

int main() {
    int x = 0, y = 4;
    for (int i = 4; i >= 0; i--) {
        for (int j = y; j > 0; j--) {
            printf("  ");
        }
        y--;
        for (int k = x; k >= 0; k--) {
            printf("# ");
        }
        x = x + 2;
        printf("\n");
    }
    x = x - 4;
    y = y + 2;
    for (int i = 3; i >= 0; i--) {
        for (int j = y; j > 0; j--) {
            printf("  ");
        }
        y++;
        for (int k = x; k >= 0; k--) {
            printf("# ");
        }
        x = x - 2;
        printf("\n");
    }
    printf("\n");
    return 0;
}