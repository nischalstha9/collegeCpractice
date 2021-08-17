#include <stdio.h>
union Job
{
    float salary;
    int empId;
} teacher;

int main()
{
    teacher.salary = 12000.00;
    // when teacher.empId is assigned a value,
    // teacher.salary will no longer hold 12.3
    teacher.empId = 1;
    printf("Salary = %.1f\n", teacher.salary);
    printf("Emp Id = %d", teacher.empId);
    return 0;
}