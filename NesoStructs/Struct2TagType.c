#include <stdio.h>

struct employee{
    char *name;
    int age;
    int salary;
};

int manager(){

    struct employee manager;

        manager.age = 27;

        if (manager.age > 30){
            manager.salary = 3000;
        }else{
            manager.salary = 2000; 
        }
    return manager.salary;
}

int main(){

    struct employee e1;
    struct employee e2;

    printf("Enter the salary of employee 1: \n");
        scanf("%d", &e1.salary);
    
    printf("Enter the salary of employee 2: \n");
        scanf("%d", &e2.salary);

    printf("Employee 1 salary is : %d\n", e1.salary);
    printf("Employee 2 salary is : %d\n", e2.salary);
    printf("Manager's salary is : %d\n", manager());        

    return 0;
}
