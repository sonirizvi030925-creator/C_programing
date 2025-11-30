/*name - soni sunil chauhan
uin - 251P061
div - C*/
#include<stdio.h>
int subNumbers(int *a, int *b){
    int sub = *a + *b;
    return sub;
}
int main(){
    int num1, num2;

    printf("Enter thr first number:");
    scanf("%d", &num1);

    printf("Enter the second number:");
    scanf("%d", &num2);
    
    printf("Result: %d", subNumbers(&num1 , &num2));
    return 0;
}