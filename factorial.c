#include <stdio.h>

int factorial(int number){
    int x=1;
    for(int i=1;i<=number;i++){
        x *=i;
    }
    return x;
}

int main(){
    int number;
    printf("Please enter an integer number: ");
    scanf("%d", &number);

    if(number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(number);
        printf("Factorial of %d is %d\n", number, result);
    }
    
    return 0;
}
