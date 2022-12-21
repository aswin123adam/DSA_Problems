#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> pony = {23, 47, 8, 49, 47, 32, 48, 4,
                        36, 11, 8, 13, 2, 10, 18, 39, 31, 45, 9, 30};
    int num;
    int count = 0;
    bool flag = false;
    cin >> num;
    for (int i = 0; i < pony.size(); i++)
    {
        if (pony[i] == num)
            flag = true;
    }
    if (flag == true)
    {
        for (int i = 0; i < pony.size(); i++)
        {
            if (pony[i] > num)
                count++;
        }
    }
    else
        count = -1;
    cout << count;
    return 0;
}
