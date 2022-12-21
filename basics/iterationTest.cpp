#include <iostream>

int main()
{

    using namespace std;

    int N;
    cin >> N;
    int A[N];
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j < A[i]; j++)
        {
            if (A[i] % j == 0)
                sum = sum + j;
        }
        if (sum == A[i])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        sum = 0;
    }
}

/*if (sum == A[i])
            {
                cout << "YES";
                break;
                sum = 0;
            }
            cout << "NO";
            sum = 0;
            */