#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("your favorite number: \n");
    for(int h = 1; h <= height; h++) {
       for(int u = height-1; u >= h; u--){
          printf(" ");
       }
        for(int s = 1; s <= h; s++){
            printf("*");
        }
           printf("  ");
           for(int n = 1; n <= h; n++){
            printf("*");
        }
        printf("\n");
      }
    }
       
            
