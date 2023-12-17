#include <iostream>
#include <stdio.h>
#define size 10

int main()
{
	int i, *pointer;
	float average = 0;

	int array[size];

	for (i = 0; i < size; i++) {
		printf("Enter %d number: ", i + 1);
		scanf_s("%d", &array[i]);
		pointer = &array[i];
		average += *pointer;
	}
	
	printf("Average is: %.2f", average / size);
}