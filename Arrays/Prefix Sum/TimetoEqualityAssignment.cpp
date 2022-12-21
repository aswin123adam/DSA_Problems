#include <iostream>
using namespace std;

int main()
{
    int A[] = {2, 4, 1, 3, 2};
    int count = 0;
    int len = size(A);
    int max = A[0];
    for (int i = 0; i < len; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    cout << max;

    for (int i = 0; i < len; i++)
    {
        count = count + (max - A[i]);
    }
    cout << count;
}