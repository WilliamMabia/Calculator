#include <stdio.h>
#include <ctype.h>
#include <math.h>

void add(){
    int A, B, ans;
    
    printf("Enter first number to Add\n");
    scanf("%d", &A);
    
    printf("Enter second number to Add\n");
    scanf("%d", &B);
    
    ans = A + B;
    
    printf("The sum of %d and %d is %d\n", A, B, ans);
}

int main(){
    
    char operator;
    
    printf("Look for the operation you want to perform and input the appropriate character\n");
    printf("Input (A) for Add: \n");

    scanf("%s", &operator);

    switch(toupper(operator))
    {
        case 'A':
            add();
            break;
            

        // If input does not patch any character
        default:
            printf("Error! operator is not correct\n");
    }

    return 0;
}
