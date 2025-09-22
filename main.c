// palindrome checker

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    int i , len, isPal = 1;
    scanf("%s" , str);
    len = strlen(str);
    
    for (i=0 ; i < len/2 ; i++){
        if(str[i] != str[len - i - 1]){
            isPal = 0;
            break;
        }
    }
      if(isPal) {
          printf("%s is a palindrome!" , str);
      }
      else{
          printf("%s is not a palindrome!" , str);
      }
      
      return 0;
    
}