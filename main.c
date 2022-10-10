#include <stdio.h>

int add(int, int);
int sub(int, int);
int div(int, int);
int mul(int, int);

int main(){
    int a, b, c;
    char operator;

    printf("Please enter a expression");
    scanf("%d %c %d", &a, &operator, &b);

    switch (opeator)
    {
    case '+':
        c = add(a, b);
        break;
    case '-':
        c = sub(a, b);
        break;
    case '*':
        c = mul(a, b);
        break;
    case '/':
        c = div(a, b);
        break;
    
    default:
        break;
    }

    printf("%d %c %d = %d", a, operator, b, c);
    return 0;
}

int add(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
int div(int a, int b){
    return a / b;
}
int mul(int a, int b){
    return a * b;
}