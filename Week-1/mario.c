#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string space = " ";
    string wish = get_string("What symbol you like??\n");
    
   int height = get_int("What height you want:\n");
    for(int i=1; i<=height; i++){
      for(int n = height; n >= i; n--){
          printf("%s", space);
      }
        for(int k = 1; k <= i; k++){
            printf("%s", wish);
        }
//        for(int k = 1; k <= 1; k++){
//            printf("%s", star);
//        }
       
        printf("\n");
    }
}

