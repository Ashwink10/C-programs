#include <stdio.h>
#include <stdlib.h>

typedef struct{

    char name[30];
    int age;
    long long signed salary;
    long long signed phonenum;

} Employee;

int main()
{
    int i, n=20;

    Employee employees[n];


    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){

        printf("Employee %d:- \n",i+1);

        printf("Name: ");
        scanf("%s",employees[i].name);

        printf("Age: ");
        scanf("%d",&employees[i].age);

        printf("Salary: ");
        scanf("%lld",&employees[i].salary);

        printf("Phone number: ");
        scanf("%lld",&employees[i].phonenum);


        printf("\n");
    }
    printf("Name\tAge\tSalary\tPhone number ");


    for(i=0; i<n; i++){

        
        printf("\n%s\t%d\t%lld\t%lld  ",employees[i].name,employees[i].age,employees[i].salary,employees[i].phonenum);
        printf("\n");

        
    }

    return 0;

}
