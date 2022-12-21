#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];
    int min = 1000;
    int max = 0;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    /*for (int i = 0; i < size; i++)
    {

    }*/
    cout << min << " " << max;
    return 0;
}