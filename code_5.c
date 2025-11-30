/*name = soni sunil chauhan 
uin - 251P061
div - C*/
#include<stdio.h>

int factorial_1(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    return fact;
}
int factorial(int num){
    if(num == 0 || num == 1){
        return 1;
    }else{
        return num * factorial(num - 1);
    }
}
int main(){
    int a = 5;
    printf("Factorial of %d : %d\n", a, factorial_1(a));
}    
    