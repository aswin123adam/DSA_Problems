#include <iostream>

using namespace std;

int main()
{
    int N;
    int sum = 0;
    int rem;
    int get;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        get = i;
        while (get > 0)
        {
            rem = get % 10;
            rem = (rem * rem * rem);
            sum += rem;
            get = get / 10;
        }
        if (sum == i)
            cout << i << endl;
        sum = 0;
    }

    return 0;
}