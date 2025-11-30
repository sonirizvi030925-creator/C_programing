/*name - soni sunil chauhan 
uin - 251P061
dic - C*/
#include<stdio.h>

void counter(){
    static int count = 0;
    count++;
    printf("Number of time function is called is %d\n", count);
}
int main(){
    counter();
    counter();

    return 0;
}
