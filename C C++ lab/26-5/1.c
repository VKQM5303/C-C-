#include <stdio.h>
#include <stdbool.h>
int main (void) 
{
    float sales, comm, salary;
    while(true) 
    {
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
        if (sales == -1) 
        {
            return 0;
        }
        comm = sales / 100 * 9;
        salary = comm + 200;
        printf("Salary is: %.2f\n", salary);
    }
    return 0;
}