#include <stdio.h>



int main(void) {
    int first;
    int second;
    int third;
    printf("My name is Harrison and I am taking Computer Science 10\n");
    printf("please give me two numbers that i will calculate the Sum:");
    scanf("%d %d", &first, &second);
    third = first + second;
    printf("here is the average: %d", third/2);
    //this is a push/change
    return 0;
}