#include<stdio.h>

int main(){

int physics,chemistry,maths,sum;

//input marks
printf("Enter physics marks\n");
scanf("%d", &physics);

printf("Enter chemistry marks\n");
scanf("%d", &chemistry);

printf("Enter maths marks\n");
scanf("%d", &maths);

//calculate avg
sum = physics + chemistry + maths;
int avg;
avg = sum/3;


(avg<=50)?printf("student is not eligible") : printf("student is eligiblde");

return 0;




}

