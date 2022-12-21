#include <iostream>
using namespace std;

int main()
{
    int n;
    int len;
    int el;
    int pos = 0;
    cin >> n;
    cin >> len;
    int a[len];
    for (int i = 0; i < len; i++)
    {
        cin >> a[i];
    }
    cin >> el;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (a[j] == el)
            {
                pos = 1;
                break;
            }
        }
        cout << pos;
    }
    return 0;
}