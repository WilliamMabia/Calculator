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

void evenodd() {
    int A;
    
    printf("Enter a number: \n");
    scanf("%d", &A);
    
    if (A % 2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    
}
void logint() {
    double A, ans;
    char B;

    printf("Enter a number to calculate its natural logarithm(base = e) \n");
    gets(&B);
    scanf("%lf", &A);
    

    ans = log(A);

    printf("Natural log of %.20f = %lf\n", A, ans);

}

void remainderint(){
    int A, B, ans;
    
    printf("Enter first number\n");
    scanf("%d", &A);
    
    printf("Enter second number\n");
    scanf("%d", &B);
    
    ans = A % B;
    
    printf("When A is divided by B the remainder is: %d", ans);
    
}

int main(){
    
    char operator;
    
    printf("Look for the operation you want to perform and input the appropriate character\n");
    printf("Input (A) for Add: \n");
    printf("Input (E) for Even or Odd: \n");
    printf("Input (L) for Natural Logarithm: \n");
    printf("Input (R) for Remainder: \n");

    scanf("%s", &operator);

    switch(toupper(operator))
    {
        case 'A':
            add();
            break;
            
        case 'E':
            evenodd();
            break;
            
         case 'L':
            logint();
            break;
            
         case 'R':
            remainderint();
            break;

        // If input does not match any character
        default:
            printf("Error! operator is not correct\n");
    }
    

    return 0;
}
