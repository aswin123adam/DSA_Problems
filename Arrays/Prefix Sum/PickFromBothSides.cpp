#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int set[] = {5, -2, 3, 1, 2};
    int B = 3;
    int len = size(set);
    vector<int> pref;
    for (int i = 0; i < len; i++)
    {
        if (i == 0)
        {
            pref.push_back(set[0]);
            continue;
        }

        pref.push_back(set[i] + pref[i - 1]);
    }

    int left, right;
    int max = 0;
    int temp = 0;
    if (B == 1)
    {
        if (pref[0] > pref[len - 1])
            cout << pref[0];
        else
            cout << pref[len - 1];
        return;
    }

    for (left = 0, right = B; left <= B && right >= 0; left++, right--)
    {
        if (left == 0)
        {
            temp = pref[len - 1] - pref[len - right - 1];
            if (temp > max)
                max = temp;
        }

        if (right == 0)
        {
            temp = pref[B - 1];
            if (temp > max)
                max = temp;
        }
    }
}