#include <iostream>

int main()
{
    using namespace std;
    int factor, sq;
    int count = 0;
    cout << "Program Starting/n";
    cout << "Enter the Numnber you wanna check factors for : \t";
    cin >> factor;
    sq = factor / 2;
    for (int i = 1; i <= factor / i; i++)
    {
        if (factor % i == 0)
            if (i == factor / i)
            {
                count++;
            }
            else
                count = count + 2;
    }
    cout << count;
    return 0;
}