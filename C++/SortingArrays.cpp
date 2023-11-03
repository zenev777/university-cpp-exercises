#include <iostream>
using namespace std;
void insertSort(int arr[], int size)
{

	for (int step = 0; step < size; step++)
	{
		int index = arr[step];
		int c = step;

		while (index <= arr[c - 1] && c > 0)
		{
			arr[c] = arr[c - 1];
			c = c - 1;
		}
		arr[c] = index;
	}
}


void BubSort(int arr[], int size)
{
	int first, second, c;
	for (int j = size-1; j >= 0; j--)
	{
		for (int i = 0; i < size-1; i++)
		{
			first = i;
			second = i + 1;

			if (arr[second] < arr[first])
			{
				c = arr[first];
				arr[first] = arr[second];
				arr[second] = c;
			}
		}
	}
}

void SelectionSort(int arr[], int size)
{
	for (int j = 0; j < size; j++)
	{
		int min = j;
		for (int i = j; i < size; i++)
		{
			if (arr[min]>arr[i])
			{
				min = i;
			}
		}
		swap(arr[min], arr[j]);
	}
}

void Print(int arr[], int size)
{

	for (int j = 0; j < size; j++)
	{
		cout << arr[j] << " ";
	}

}

int main()
{


	int data[] = { 8, 5 ,3,4,17,2,12,7,11 };
	int size = sizeof(data) / sizeof(data[0]);
	SelectionSort(data, size);
	cout << "Sorted array: \n";
	Print(data, size);


	//int arr[6] = { 4,11,7,38,21,2 };
	//int index = 0;
	//int c;
	//for (int i = 0; i < 6; i++)
	//{
	//	index = arr[i];
	//	c = i;
	//	while (index <= arr[c - 1] && c > 0)
	//	{
	//		arr[c] = arr[c - 1];
	//		c = c - 1;
	//	}
	//	arr[c] = index;
	//}
	//cout << "---------------------------------------";
	//int arr[6] = { 4,11,7,38,21,2 };
	//int last ;
	//int c;

	//for (int i = 6-1; i >=0; i--)
	//{
	//	last = arr[i];
	//	while (last<arr[i-1]&&last>=0)
	//	{
	//		c = last;
	//		last = arr[i - 1];
	//		arr[i - 1] == c;
	//	}
	//}
	//for (int i = 0; i < 6; i++)
	//{
	//	cout << arr[i] << " ";
	//}
}
