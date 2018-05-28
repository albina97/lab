//Вариант 19 - сортировка выбором
#include <stdio.h>

void sort(int *arr, int n)
{
	int i, j, min_position;
	int tmp;

	for (i = 0; i < n; i++)
	{
		min_position = i;

		for (j = i + 1; j<n; j++)
		{
					if (arr[min_position] > arr[j])
						min_position = j;
					
			tmp = arr[min_position];
			arr[min_position] = arr[i];
			arr[i] = tmp;
		}
	}
}

