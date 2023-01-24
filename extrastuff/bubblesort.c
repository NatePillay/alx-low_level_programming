#include <stdio.h>


int main(void)
{
	int a[] = {1,3,7,9,0,4,5,8,6};

	int length = 10;

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < (length - 1); j++)
		{
			if (a[j] > a[j + 1]) //sorting lowest to highest
			{
				int temp = a[j]; //temp var to store value before overriding it 
				a[j] = a[j + 1]; //swap out the value
				a[j + 1] = temp;
			}
		}
	}
	for (int i =  0; i < length; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
}

