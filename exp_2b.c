#include<stdio.h>
int main(){
    

int num1 , num2 , i , sum=0;

printf("Enter a number:");
scanf("%d", &num1);

printf("Enter a number:");
scanf("%d", &num2);

for(i=num1; i<=num2; i++){
    if(i % 2 != 0){
        sum+=i;
    }
}

printf("The sum of odd numbers is %d", sum);













}
