#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee{
    char name [100];
    char position [100];
    int salary;
};

typedef struct employee Employee;

void setEmployee(char n[], char p[], int sal, Employee * e)
{
    strcpy(e->name, n);
    strcpy(e->position, p);
    e->salary=sal;
}
void showInfo(Employee e)
{
    printf("Name: %s\nPosition: %s\nSalary: %d\n", e.name,e.position, e.salary);
}
int main()
{
    int numOfEmployee;
    scanf("%d",&numOfEmployee);
    Employee * e;
    e = malloc(numOfEmployee * sizeof(Employee));
    for (int i = 0 ; i<numOfEmployee; i++) {
        char n [100];
        char p[100];
        int sal;
        scanf("%s%s%d",n,p,&sal);
        setEmployee(n, p, sal, &e[i]);
    }
    for (int i = 0 ; i<numOfEmployee; i++) {
        showInfo(e[i]);
    }
    free(e);
    
        return 0;
}
