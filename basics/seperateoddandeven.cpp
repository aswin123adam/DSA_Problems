#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int len;
    vector<int> even;
    vector<int> odd;
    int temp;
    while (T--)
    {
        cin >> len;
        for (int i = 0; i < len; i++)
        {
            cin >> temp;
            if (temp % 2 == 0)
                even.push_back(temp);
            else
                odd.push_back(temp);
        }
        // cout << "EVEN : ";
        for (int i = 0; i < odd.size(); i++)
        {
            cout << odd[i] << " ";
        }
        cout << "\n";
        // cout << "ODD : ";
        for (int i = 0; i < even.size(); i++)
        {
            cout << even[i] << " ";
        }
        odd.clear();
        even.clear();
        cout << "\n";
    }
    return 0;
}