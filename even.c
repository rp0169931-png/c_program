// Program to check if a number is even or odd//


#include<stdio.h>
int main(void){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if (number%2==0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}