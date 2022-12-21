#include <iostream>

int main()
{
    using namespace std;
    int target;
    cin >> target;
    if (target > 0)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << target << " * " << i << " = " << (target * i) << endl;
        }
    }
}