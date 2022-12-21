#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int r;
    cin >> n;
    int arr[n];
    int temp1, temp2;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> r;
    /*
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    temp1 = arr[0];
                    arr[j] = arr[n - 1];
                    temp2 = arr[j + 1];
                    continue;
                }
                if (j < n - 1)
                {
                    arr[j] = temp1;
                    temp1 = temp2;
                    temp2 = arr[j + 1];
                    continue;
                }
                if (j == n - 1)
                {
                    arr[j] = temp2;
                }
            }
        }*/
    for (int k = 0; k < r; k++)
    {
        temp1 = arr[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}