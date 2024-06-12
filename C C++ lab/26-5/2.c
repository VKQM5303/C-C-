#include <stdio.h>
int main (void)
{
	int num, i, sum = 0;
	printf("Enter the numbers of elements: \n");
	scanf("%d", &num);
	
    int arr[num];
	int *parr = arr;
	printf("Enter the array elements: \n");
	for (i = 0; i < num; i++)
	{
		scanf("%d", parr + i);
	}
	for (i = 0; i < num; i++)
	{
		sum = sum + *(parr + i);
	}
	float avg = (float)sum / num;
	printf("Sum: %d", sum);
	printf("\nAverage: %f", avg);
    return 0;
}