#include <iostream>
using namespace std;

int main()
{
    int coins[] = {1, 2, 5, 10, 20, 50},price,counter=-1;
    int size = sizeof(coins) / sizeof(coins[0]);
    int List[100];
    int i = size-1;
    int j = 0;
    
    cin >> price;

    while (price>0)
    {
        if (price>=coins[i])
        {
            price -= coins[i];
            List[j] = coins[i];
            counter++;
            j++;
        }
        else
        {
            i--;
        }
    }
    
    for (int i = 0; i < j; i++)
    {
        cout << List[i]<<"\n";
    }
}


