#include<stdio.h>
int main(){
    int num1;
    printf("Enter the number: ");
    scanf("%d",&num1);
    if(num1%2==0){
        printf("The number is even: %d", num1);
    }
    else {
        printf("The number is odd: %d", num1);
    }
}