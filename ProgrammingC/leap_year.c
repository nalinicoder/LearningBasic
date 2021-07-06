#include<stdio.h>
int main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if (year%4==0){
        printf("This is leap year: %d",year);
    }
    else {
        printf("This is non leap year: %d",year);
    }
}