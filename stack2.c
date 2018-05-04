#include<stdio.h>
int add (int num1, int num2){
    return num1, num2;
}

int multiply(int num1, int num2){
    return num1*num2;
}

int main(int argc, char*argv[]){
    int num1;
    int num2;
    int result;
    num1 = 3;
    num2 = 5;
    result = add(num1, num2);
    printf("%d\n, result");
    return 0
}
