#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int set[] = {1, 2, 3, 7, 1, 2, 3};
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
    int start;
    int eqcount = 0;
    for (start = 0; start < len; start++)
    {
        if (start == 0 || start == len - 1)
            continue;
        if (pref[start - 1] == pref[len - 1] - pref[start])
        {
            cout << start;
            eqcount++;
        }
    }
    if (eqcount == 0)
    {
        cout << "- 1";
    }
}