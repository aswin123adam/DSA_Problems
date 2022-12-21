#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    vector<int> rev;
    int temp;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        temp = arr[i];
        rev.push_back(temp);
    }

    for (int i = 0; i < rev.size(); i++)
    {
        cout << rev.at(i) << " ";
    }

    /*rev.push_back(50);
cout << rev.size() << endl;
int sec = rev.at(rev.size() - 1);
cout << sec; */

    return 0;
}
