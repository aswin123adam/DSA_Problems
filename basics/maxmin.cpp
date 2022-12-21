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
    int maxpos, minpos;
    int ans;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            maxpos = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            minpos = i;
        }
    }
    if (maxpos > minpos)
        ans = max - min;
    else
        ans = min - max;
    cout << ans;
    return 0;
}