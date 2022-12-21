#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int len;
    int max = 0;
    int min = 1000;
    int ans;
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }

        else
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
    }
    ans = max - min;
    cout << ans << endl;
    return 0;
}