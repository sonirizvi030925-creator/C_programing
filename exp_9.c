/*name - soni sunil chauhan
uin - 251P061
div - C*/
#include<stdio.h>
struct Student{
    char name [50];
    int roll;
    float marks;
};
int main(){
    struct Student s[5];
    int i, pos = 0;
    float max;

    for(i = 0; i < 5; i++){
        printf("\nEnter details of the student %d\n", i + 1);
        printf("Name : ");
        scanf(" %[^\n]", s[i].name); 
        
        printf("Roll Number : ");
        scanf("%d", &s[i].roll);            
        
        printf("Total Marks : ");
        scanf("%f", &s[i].marks);
    }
    max = s[0].marks;
    for(i = 1; i < 5; i++){
        if(s[i].marks > max){
            max = s[i].marks;
            pos = i;
        }
    }
    printf("\n TOPPER STUDENT DETAILS \n");
    printf("Name : %s\n", s[pos].name);         
    printf("Roll : %d\n", s[pos].roll);
    printf("Total Marks : %.2f\n", s[pos].marks);
    return 0;

}