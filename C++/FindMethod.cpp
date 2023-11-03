#include <iostream>
using namespace std;
int main()
{
    int x;
    int arr[] = {1,5,8,4,8,6,7,4,3,9,4,1,2,5};

    cin >> x;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "The number X: " << x << " is at index: " << RetInd;
        cout << "X is missing";
}

int RetInd(int arr[], int size, int x)
{
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }

    }
}
----------------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
    int x,l,mid;
	l = 0;
	int h = sizeof(arr) / sizeof(arr[0]);
	cin >> x;
	while (l==h)
	{
		mid = (l + h) / 2;

		if (arr[mid]==x)
		{
			cout << "The number X: " << x << " is at index: " << mid;
		}
		else 
		{
			
		}
	}
}
