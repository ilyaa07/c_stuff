#include <stdio.h>

int main() {
    int x;
    printf("Enter a number bigger than 10: ");
    scanf("%d", &x);
    
    if(x > 10){
        printf("Thanks for listening you awesome human being");
    }
    
    else{
        printf("you are blind");
    }
    
    return 0;
}
