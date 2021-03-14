#include <stdlib.h>
#include <stdio.h>

void isPalindrome(int x = 101){
    int reversedX = 0;
   
    while(reversedX != 0){
        
        int remainder = reversedX % 10; 
        reversedX = reversedX * 10 + remainder;
        reversedX /= 10;
        
    }
    if(reversedX == x){
        printf("is true\n");
        isPalindrome == 0;   
     }else {    
         printf("Is not true\n");
        isPalindrome == false;
     }
    
    return 0;
}

int main(){

    bool isPalindrome = isPalindrome(x);

    printf(isPalindrome);
    return 0;
}



