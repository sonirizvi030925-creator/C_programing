/*name - soni sunil chauhan 
uin - 251P061
div - C*/
#include<stdio.h>
struct Employee{
    int id;
    char name[30];
    float salary;
};
int main(){
    struct Employee e;
    FILE *fp;
    int i, n;
    fp = fopen("employees.txt", "w");

    if(fp == NULL){
        printf("file cannot be opened!");
        return 1;
    }
    printf("Enter number of employees:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("\nEnter details of employee %d\n", i);

        printf("ID: ");
        scanf("%d", &e.id);

        printf("Name: ");
        scanf(" %[^\n]", e.name);

        printf("Salary: ");
        scanf("%f", &e.salary);

        fprintf(fp, "%d %s %.2f\n", e.id, e.name, e.salary);
    }
    fclose(fp);

    fp = fopen("employees.txt", "r");

    if(fp == NULL){
        printf("file cannot be opened!");
        return 1;
    }
    printf("\n\n EMPLOYEE DATABASE \n");

    while(fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) != EOF){
        printf("\nID     :%d", e.id);
        printf("\nName   :%s", e.name);
        printf("\nSalary :%.2f\n", e.salary);
    }
    fclose(fp);
    return 0;

}