#include<stdio.h>

int main(){

    /* 
    Write a C program to find maximum between two numbers using if else. C program to input two numbers from user and find maximum between two numbers using if else. How to find maximum or minimum between two numbers using if else in C programming.
     */
    /* int num1, num2;
    scanf("%d %d", &num1, &num2);
    if(num1>num2){
        printf("Maximum = %d", num1);
    } else{
        printf("Maximum = %d", num2);
    }; */

    /* Write a C program to find maximum between three numbers using ladder if else or nested if. How to find maximum or minimum between three numbers using if else in C programming. Logic to find maximum or minimum between three numbers in C program. */

    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1>num2 && num1>num3){
        printf("Maximum is: %d", num1);
    } else if(num2>num1 && num2>num3){
        printf("Maximum is: %d", num2);
    }else{
        printf("Maximum is: %d", num3);
    };
    return 0;
}