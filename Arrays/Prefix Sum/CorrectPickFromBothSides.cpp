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
    for (int i = 0; i < size(pref); i++)
    {
        cout<<pref[i]<<" ";
    }
    
}