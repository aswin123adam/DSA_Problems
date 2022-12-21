#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int set[] = {0, 1, 2, 3, 4, 5, 6, 7, 9};
    int len = size(set);
    cout << len << endl;
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
    for (int i = 0; i < pref.size(); i++)
    {
        cout << pref[i] << " ";
    }
}