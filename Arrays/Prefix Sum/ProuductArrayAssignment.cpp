#include <iostream>

using namespace std;

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int prod = 1;
    int len = size(A);
    int B[len];
    for (int i = 0; i < len; i++)
    {
        prod = prod * A[i];
    }

    for (int i = 0; i < len; i++)
    {
        B[i] = prod / A[i];
        cout << B[i] << "  ";
    }
}