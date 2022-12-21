#include <iostream>

int main()
{
    using namespace std;

    int A = 0;
    cin >> A;
    int mid = A / 2;
    while (1)
    {
        int sel = mid / 2;
        if ((sel * sel) < A)
        {
            break;
        }
        mid = mid / 2;
    }
    int ans = -1;
    for (int i = 1; i <= mid; i++)
    {
        if (i * i == A)
        {
            ans = i;
            break;
        }
    }
    /*int A;
    cin >> A;
    int mid = A / 2;
    int ans = -1;
    for (int i = 1; i <= mid; i++)
    {
        if (i * i == A)
        {
            ans = i;
            break;
        }
    }*/
    cout << ans;
}
